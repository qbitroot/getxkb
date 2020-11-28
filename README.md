# getxkb

GetXKB shows you current X11 keyboard layout.

## Usage

`./getxkb`

Example output: `US`

I tested this program on Arch GNU/Linux with i3wm

To see layout in lowercase uncomment 2 lines like `tok[N] = tok[N] - 0x20;` and recompile program.

## Installation

First, install `libx11-dev` with your package manager. For example, `sudo apt install libx11-dev`

Then clone this repository: `git clone https://github.com/qbitroot/getxkb`

Compile project:

`gcc -I/usr/include getxkb.c -lX11 -lxkbfile -o getxkb`

To make getxkb binary available global, execute command:

`sudo cp getxkb /usr/local/bin/getxkb`

(`/usr/local/bin` has to be in your `$PATH`)

## Objective

One day I started using i3wm. And it didn't show current keyboard layout. I found a C program that does almost what I need, then I modified it. So here is the result!
