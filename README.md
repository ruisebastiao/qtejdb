# Qt/Qml JSON database

[![Build Status](https://travis-ci.org/markusmarx/qtejdb.svg?branch=master)](https://travis-ci.org/markusmarx/qtejdb)
[![codecov.io](http://codecov.io/github/markusmarx/qtejdb/coverage.svg?branch=master)](http://codecov.io/github/markusmarx/qtejdb?branch=master)
<a href="https://scan.coverity.com/projects/5815">
  <img alt="Coverity Scan Build Status"
       src="https://scan.coverity.com/projects/5815/badge.svg"/>
</a>
[![Gitter](https://badges.gitter.im/Join%20Chat.svg)](https://gitter.im/markusmarx/qtejdb?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge)

QtEjdb is an ejdb based embedded bson and json document store/ database. QtEjdb is completely build uppon Qt. Main features are store and query documents in and from collections. Visit http://ejdb.org/ for more informations. QtEjdb serves a qtquickplugin to access documents from qml.

## Status

QtEjdb is highly (daily) in development phase. All features are well testet with qmltest and gmock. Version 1.0 will be the first stable release.

## Requirements

Dependencies:

  - Qt (>= 5)
  - ejdb (included)
  - CMake (>= 2.8.11)
  - zlib

Test dependencies (are downloaded while building):
  - GoogleTest, GoogleMock
  - boost

## Build and Test

First check if the conditions are complied to build a Qt application with CMake 2.8.11. More informations at http://doc.qt.io/qt-5/cmake-manual.html.


### Linux (64bit, 32bit)

```
  git clone --recursive https://github.com/markusmarx/qtejdb.git
  cd qtejdb
  mkdir build/release
  cd build
  cmake ../.. -DCMAKE_BUILD_TYPE=Release
  make
```

### Mac OS X

```
  git clone --recursive https://github.com/markusmarx/qtejdb.git
  cd qtejdb
  mkdir build/release
  cd build
  cmake ../.. -DCMAKE_BUILD_TYPE=Release
  make
```

### Windows (mingw 32bit)

- git clone --recursive https://github.com/markusmarx/qtejdb.git 
- Open QtCreator
- Open qtejdb project
- call cmake with -DCMAKE_BUILD_TYPE=Release

### Android

```
pending. Ejdb dont work with android currently.
```

### iOS

```
pending
```


The unit tests can be executed with ctest:

```
  ctest -V
```

## Examples

The demo can be executed with
Linux or OSX

```
  make demo1
  make demo2
```

Windows with mingw32

```
  mingw32-make demo1
  mingw32-make demo2
```

## Licence

Distributed under [LGPL-3.0 license](http://opensource.org/licenses/LGPL-3.0).

Copyright (c) 2014-2015 [Markus Marx](mailto:markus.marx@marxenter.de) and contributors.
