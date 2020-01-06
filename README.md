# Circular log support for FreeBSD syslogd

## Background

This patch grew out of a project needing to support syslog files on
an embedded platform machine with only RAM and flash.  No disk and no
swap space.  Placing the log files on the flash disk would introduce
excessive wear on the flash device.  Placing the log files in RAM
resulted in a slow squeeze of available memory as they grew ever larger.

By introducing circular logfiles, it becomes possible to put the syslog files
on a RAM disk but contain them at a constant size that can be planned for
and does not require routine maintenance inappropriate to an embedded device.

Support for circular logfiles requires a small patch to syslogd and a support
program called clog.  The clog program creates the circular logfiles and can
be used to view their contents.

This software is presented here for historical interest; it is not 
actively maintained.

## Downloads

Source code for this software is available under the BSD public license.

In order to build the patched syslogd, the clog source must be available in
a sibling directory.  That is, if syslogd is in /usr/src/usr.sbin/syslogd,
then clog should be unpacked to /usr/src/usr.sbin/clog.

## Release History

* 1.0.2: Moved to github.  2020-01-05

* 1.0.1: Fixed an oversight in clog that made it act as if the -f
option was always in use. 10/2/2001

* 1.0: Initial release. 10/1/2001

This page was last updated on 2020-01-05.

