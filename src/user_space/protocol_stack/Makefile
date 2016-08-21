
ifeq ($(RTE_SDK),)
$(error "Please define RTE_SDK environment variable")
endif

# Default target, can be overriden by command line or environment
RTE_TARGET ?= x86_64-native-linuxapp-gcc

include $(RTE_SDK)/mk/rte.vars.mk

# binary name
APP = usocket

# all source are stored in SRCS-y
SRCS-y := main.c

CFLAGS += -O2


include $(RTE_SDK)/mk/rte.extapp.mk
