# --------------------------------------------------------------
# LV2 Packaging
# Copies custom LV2 metadata and MOD GUI resources into
# the generated LV2 bundle.
# --------------------------------------------------------------

DIMENSION_IV_SITE = https://github.com/Mondomod/Dimension_IV.git
DIMENSION_IV_SITE_METHOD = git
DIMENSION_IV_GIT_SUBMODULES = y
DIMENSION_IV_BUNDLES = Dimension_IV.lv2


# needed for submodules support
DIMENSION_IV_PRE_DOWNLOAD_HOOKS += MOD_PLUGIN_BUILDER_DOWNLOAD_WITH_SUBMODULES

define DIMENSION_IV_INSTALL_TARGET_CMDS
	cp -rL $(@D)/Dimension_IV.lv2 $(TARGET_DIR)/usr/lib/lv2/
endef

$(eval $(cmake-package))
