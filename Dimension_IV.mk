#!/usr/bin/make -f
# Makefile for MOD Audio cloud builder
# Dimension_IV LV2 Plugin
# Created for MOD cloud builder submission

# Default target
all: build

# Build the plugin
build:
	$(MAKE) -C . plugin gen

# Install target - creates Dimension_IV.lv2 directory with all necessary files
install: build
	@echo "Building Dimension_IV.lv2 package..."
	@mkdir -p Dimension_IV.lv2
	@echo "Copying compiled plugin files..."
	@cp -r bin/Dimension_IV.lv2/* Dimension_IV.lv2/ 2>/dev/null || true
	@echo "Copying LV2 metadata files..."
	@cp lv2/*.ttl Dimension_IV.lv2/ 2>/dev/null || true
	@echo "Copying MOD GUI files..."
	@cp -r lv2/modgui Dimension_IV.lv2/ 2>/dev/null || true
	@echo "Dimension_IV.lv2 package created successfully!"

# Clean build artifacts
clean:
	$(MAKE) -C . clean
	rm -rf Dimension_IV.lv2

# Phony targets
.PHONY: all build install clean
