include $(RTE_SDK)/mk/rte.vars.mk

# library name
LIB = libusocket.a

CFLAGS += -I$(SRCDIR) -O2 -fno-strict-aliasing

EXPORT_MAP := usocket_version.map

LIBABIVER := 2

# all source are stored in SRCS-y
SRCS-y := usocket.c

# install includes
SYMLINK-y-include := usocket.h

include $(RTE_SDK)/mk/rte.lib.mk
