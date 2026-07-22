# --------------------------------------------------------------
#
# Dimension_IV.lv2
#
# --------------------------------------------------------------

DIMENSION_IV_VERSION = 359e5e9c7a2e5899ccce0398263d9da4b882dc8e
DIMENSION_IV_SITE = https://github.com/Mondomod/Dimension_IV.git
DIMENSION_IV_SITE_METHOD = git
DIMENSION_IV_GIT_SUBMODULES = YES

DIMENSION_IV_BUNDLES = Dimension_IV.lv2

define DIMENSION_IV_BUILD_CMDS
	$(TARGET_MAKE_ENV) $(MAKE) -C $(@D)/plugin/source lv2_sep
endef

define DIMENSION_IV_INSTALL_TARGET_CMDS
	mkdir -p $(TARGET_DIR)/usr/lib/lv2/Dimension_IV.lv2

	cp -rL $(@D)/bin/Dimension_IV.lv2/* \
		$(TARGET_DIR)/usr/lib/lv2/Dimension_IV.lv2/

	cp -f $(@D)/lv2/*.ttl \
		$(TARGET_DIR)/usr/lib/lv2/Dimension_IV.lv2/

	cp -rf $(@D)/lv2/modgui \
		$(TARGET_DIR)/usr/lib/lv2/Dimension_IV.lv2/ 2>/dev/null || true

	cp -rf $(@D)/lv2/images \
		$(TARGET_DIR)/usr/lib/lv2/Dimension_IV.lv2/ 2>/dev/null || true
endef

$(eval $(generic-package))