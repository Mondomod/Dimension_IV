# --------------------------------------------------------------
# LV2 Packaging
# Copies custom LV2 metadata and MOD GUI resources into
# the generated LV2 bundle.
# --------------------------------------------------------------

DIMENSION_IV_VERSION = ed9db523859437cba61d05d3fd08fd579a4a4993
DIMENSION_IV_SITE = https://github.com/Mondomod/Dimension_IV.git
DIMENSION_IV_SITE_METHOD = git
DIMENSION_IV_GIT_SUBMODULES = y
DIMENSION_IVBUNDLES = Dimension_IV.lv2

# Directory containing your custom LV2 files
LV2_ASSETS ?= lv2

# Find all generated LV2 bundles
LV2_BUNDLES := $(wildcard bin/*.lv2)

copy-lv2:
	@for bundle in $(LV2_BUNDLES); do \
		echo "Packaging $$bundle"; \
		cp -f $(LV2_ASSETS)/*.ttl "$$bundle/"; \
		cp -rf $(LV2_ASSETS)/modgui "$$bundle/" 2>/dev/null || true; \
		cp -f $(LV2_ASSETS)/*.html "$$bundle/" 2>/dev/null || true; \
		cp -f $(LV2_ASSETS)/*.css "$$bundle/" 2>/dev/null || true; \
		cp -f $(LV2_ASSETS)/*.js "$$bundle/" 2>/dev/null || true; \
		cp -rf $(LV2_ASSETS)/images "$$bundle/" 2>/dev/null || true; \
	done

.PHONY: copy-lv2