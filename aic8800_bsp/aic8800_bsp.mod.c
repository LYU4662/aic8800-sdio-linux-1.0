#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_DATA(dpd_res, "", "");
KSYMTAB_FUNC(aicbsp_get_feature, "_gpl", "");
KSYMTAB_FUNC(aicbsp_resv_mem_alloc_skb, "_gpl", "");
KSYMTAB_FUNC(aicbsp_resv_mem_kfree_skb, "_gpl", "");
KSYMTAB_FUNC(aicbsp_set_subsys, "_gpl", "");
KSYMTAB_FUNC(aicbsp_get_load_fw_in_fdrv, "_gpl", "");
KSYMTAB_FUNC(get_fw_path, "", "");
KSYMTAB_FUNC(get_testmode, "", "");
KSYMTAB_FUNC(get_sdio_func, "", "");
KSYMTAB_FUNC(set_irq_handler, "", "");
KSYMTAB_FUNC(aicwf_prealloc_txq_alloc, "", "");

MODULE_INFO(depends, "");

MODULE_ALIAS("sdio:c07v*d*");

MODULE_INFO(srcversion, "A58A4D13063CA21A6455CDE");
