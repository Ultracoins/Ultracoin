Ultracoin Core
=============

Setup
---------------------
Ultracoin Core is the original Ultracoin client and it builds the backbone of the network. It downloads and, by default, stores the entire history of Ultracoin transactions, which requires a few hundred gigabytes of disk space. Depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download Ultracoin Core, visit [ultracoincore.org](https://ultracoincore.org/en/download/).

Running
---------------------
The following are some helpful notes on how to run Ultracoin Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/ultracoin-qt` (GUI) or
- `bin/ultracoind` (headless)

### Windows

Unpack the files into a directory, and then run ultracoin-qt.exe.

### macOS

Drag Ultracoin Core to your applications folder, and then run Ultracoin Core.

### Need Help?

* See the documentation at the [Ultracoin Wiki](https://en.ultracoin.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#ultracoin](https://webchat.freenode.net/#ultracoin) on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#ultracoin).
* Ask for help on the [UltracoinTalk](https://ultracointalk.org/) forums, in the [Technical Support board](https://ultracointalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build Ultracoin Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Gitian Building Guide (External Link)](https://github.com/ultracoin-core/docs/blob/master/gitian-building.md)

Development
---------------------
The Ultracoin repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://doxygen.ultracoincore.org/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [UltracoinTalk](https://ultracointalk.org/) forums, in the [Development & Technical Discussion board](https://ultracointalk.org/index.php?board=6.0).
* Discuss project-specific development on #ultracoin-core-dev on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#ultracoin-core-dev).
* Discuss general Ultracoin development on #ultracoin-dev on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#ultracoin-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [ultracoin.conf Configuration File](ultracoin-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Memory](reduce-memory.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)
- [PSBT support](psbt.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
