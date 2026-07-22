#!/usr/bin/make -f
# Makefile for DISTRHO Plugins #
# ---------------------------- #
# Created by falkTX
#
# Modified by Wasted Audio
#

include dpf/Makefile.base.mk
include lv2-package.mk

all: plugin gen copy-lv2

# --------------------------------------------------------------

dgl:
# ifeq ($(HAVE_CAIRO_OR_OPENGL),true)
# 	$(MAKE) -C dpf/dgl FILE_BROWSER_DISABLED=true
# endif

plugin: dgl
	$(MAKE) all -C plugin/source

ifneq ($(CROSS_COMPILING),true)
gen: plugin lv2_ttl_generator
	@$(CURDIR)/dpf/utils/generate-ttl.sh

lv2_ttl_generator:
	$(MAKE) -C dpf/utils/lv2-ttl-generator
else
gen:
endif

# --------------------------------------------------------------

clean:
	$(MAKE) clean -C dpf/utils/lv2-ttl-generator
	$(MAKE) clean -C plugin/source
	rm -rf bin build

# --------------------------------------------------------------

.PHONY: plugin copy-lv2 clean