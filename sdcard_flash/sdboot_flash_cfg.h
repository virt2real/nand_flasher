#define BLOCK 512
#define KB 1024
#define MB 0x100000

// locatins in RAM

//#define UBOOT_ADDR	(void*)0x81080000
#define UBOOT_ADDR	(void*)0x82000000

#define KERNEL_ADDR	(void*)0x80700000 // uImage
//#define KERNEL_ADDR	(void*)0x80008000 // Image, ready to run
#define ROOTFS_ADDR	(void*)0x82000000


// locations in NAND flash

#define KERNEL_FLASH 0x400000
//#define ROOTFS_FLASH 0x600000
#define ROOTFS_FLASH 0x900000
// 0x3e0000 - uboot env
#define CONFIG_ENV_OFFSET            0x3C0000    /* environment starts here */

#define UBL_CCS_ENTRY 0x20		// CCS UBL ublDM355-nand.bin
#define UBL_CCS_MAGIC 0xE59F0124	// CCS UBL ublDM355-nand.bin first word
#define UBL_GNU_ENTRY 0x100		// gcc UBL from DM35x_FlashAndBootUtils_1_10
#define UBL_GNU_MAGIC 0XEE190F31	// gcc UBL from DM35x_FlashAndBootUtils_1_10 first word

// sizes

#define SDBOOT_SIZE (30*KB) // like UBL
#define UBL_SIZE (30*KB) // max UBL size is 30 KB
//#define UBL_ENTRY UBL_GNU_ENTRY
#define UBL_ENTRY UBL_CCS_ENTRY
//#define UBOOT_SIZE (160*KB)
//#define UBOOT_SIZE (512*KB)
#define UBOOT_SIZE (320*KB)

#define KERNEL_SIZE (3*MB)
#define ROOTFS_SIZE (4*MB)

// location on SD card

#define RBL_RECORD_SDC	(8*BLOCK) // gap between MBR and FAT
#define SDBOOT_SDC	BLOCK
#define TEST_SDC	0x008000
#define UBL_SDC 	0x010000
#define UBOOT_SDC	0x020000
//#define KERNEL_SDC	0x060000
//#define KERNEL_SDC	0x080000
#define KERNEL_SDC	0x070000
#define ROOTFS_SDC	0x400000

#define MAGIC_NUMBER_VALID          (0xA1ACED00)
