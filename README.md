# SR2I207 2019 - BadUSB
## Presentation

Examples for the BADUSB project. Those examples are here to show that a simple and spreaded device like an arduino can be used to realise this kind of attack.

There are two types of attacks develloped here.
1. The first one is a RickRoll attack. It is a good joke to do to a friend. It plays [Never gonna give you up](https://www.youtube.com/watch?v=dQw4w9WgXcQ) forever and forces the volume to 100%. The only solution is to go the task manager to kill both processes. A possible improvement is to add a press on ESCAPE key in the script to close task manager.

2. The second is a more serious attack which gives a administrator reverse shell to the attacker.

For both examples, a simple reboot can kill the script but it is possible to improve them by making them start at boot. I didn't make this improvment because I showed those examples on my own computer.

## Requirements
Those programs work only on Arduino compatible with `Keyboard.h` library like Arduino Leonardo, Micro or Due for instance.
