#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <X11/XKBlib.h>
#include <X11/extensions/XKBrules.h>


int main() {
	Display *dpy = XOpenDisplay(NULL);

	if (dpy == NULL) {
		exit(1);
	}

	XkbStateRec state;
	XkbGetState(dpy, XkbUseCoreKbd, &state);

	XkbRF_VarDefsRec vd;
	XkbRF_GetNamesProp(dpy, NULL, &vd);

	char *tok = strtok(vd.layout, ",");
	for (int i = 0; i < state.group; i++) {
		tok = strtok(NULL, ",");
	}
	tok[0] = tok[0] - 0x20; // to upper case
	tok[1] = tok[1] - 0x20;

	printf("%s\n", tok);

	XCloseDisplay(dpy);

	return 0;
}
