TEMPLATE = subdirs
TARGET = sodacad
CONFIG += ordered

SUBDIRS     = \
    libraries \
    plugins \
    tools

exists( custom.pro ):include( custom.pro )
