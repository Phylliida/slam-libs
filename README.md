# slam-libs
Lots of windows binaries needed for building orb-slam, lsd-slam, etc. Built in x64 Release Mode.

You can build any of these yourself it is just very unpleasant so I figured I'd share to ease others' pain.

The main ones that are missing are the boost libraries, boost headers, and some opencv libraries. They were very large so I just included the most common/smallest things.

If you have issues using these, make sure you are building for Release mode in 64 bit.
You can also try going to C/C++ Tab -> Code Generation and change Runtime Library to Multi-threaded (/MT).

