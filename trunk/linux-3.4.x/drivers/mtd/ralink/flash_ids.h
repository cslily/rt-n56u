
static struct chip_info chips_data [] = {
	/* REVISIT: fill in JEDEC ids, for parts that have them */
	{ "FL016AIF",		0x01, 0x02140000, 64 * 1024, 32,  0 },
	{ "FL064AIF",		0x01, 0x02160000, 64 * 1024, 128, 0 },

	{ "S25FL032P",		0x01, 0x02154D00, 64 * 1024, 64,  0 },
	{ "S25FL064P",		0x01, 0x02164D00, 64 * 1024, 128, 0 },
	{ "S25FL064L",      0x01, 0x60170000, 64 * 1024, 128, 0 },
	{ "S25FL128P",		0x01, 0x20180301, 64 * 1024, 256, 0 },
	{ "S25FL129P",		0x01, 0x20184D01, 64 * 1024, 256, 0 },
	{ "S25FL256S",		0x01, 0x02194D01, 64 * 1024, 512, 1 },

	/*
	 * Spansion
	 */
	{ "S25FL116K",		0x01, 0x40150140, 64 * 1024, 32,  0 },
	{ "S25FL132K",		0x01, 0x40160140, 64 * 1024, 64,  0 },
	{ "S25FL164K",		0x01, 0x40170140, 64 * 1024, 128, 0 },

	/* PMC */

	/* Intel/Numonyx -- xxxs33b */
	{ "160s33b",  0x89, 0x89110000, 64 * 1024,  32, 0 },
	{ "320s33b",  0x89, 0x89120000, 64 * 1024,  64, 0 },
	{ "640s33b",  0x89, 0x89130000, 64 * 1024, 128, 0 },

	/* EON -- en25xxx */
	{ "EN25F80",		0x1c, 0x31141c31, 64 * 1024, 16,  0 },
	{ "EN25F16",		0x1c, 0x31151c31, 64 * 1024, 32,  0 },
	{ "EN25F32",		0x1c, 0x31161c31, 64 * 1024, 64,  0 },
	{ "EN25F64",		0x1c, 0x20171c20, 64 * 1024, 128, 0 },
	{ "EN25Q80B",		0x1c, 0x30141c30, 64 * 1024, 16,  0 },
	{ "EN25QH80",		0x1c, 0x70141c30, 64 * 1024, 16,  0 },
	{ "EN25Q16B",		0x1c, 0x30151c30, 64 * 1024, 32,  0 },
	{ "EN25QH16B",		0x1c, 0x70151c30, 64 * 1024, 32,  0 },
	{ "EN25Q32B",		0x1c, 0x30161c30, 64 * 1024, 64,  0 },
	{ "EN25QH32B",		0x1c, 0x70161c30, 64 * 1024, 64,  0 },
	{ "EN25Q64",		0x1c, 0x30171c30, 64 * 1024, 128, 0 },
	{ "EN25QH64",		0x1c, 0x70171c30, 64 * 1024, 128, 0 },
	{ "EN25Q128",		0x1c, 0x30181c30, 64 * 1024, 256, 0 },
	{ "EN25QH128",		0x1c, 0x70181c30, 64 * 1024, 256, 0 },
	{ "EN25Q256",		0x1c, 0x30191c30, 64 * 1024, 512, 0 },
	{ "EN25QH256",		0x1c, 0x70191c30, 64 * 1024, 512, 0 },
	
	/* Atmel -- some are (confusingly) marketed as "DataFlash" */
	{ "AT26DF161",		0x1f, 0x46000000, 64 * 1024, 32,  0 },
	{ "AT25DF321",		0x1f, 0x47000000, 64 * 1024, 64,  0 },

	/* Micron */
	{ "N25Q016A",		0x20, 0xba151000, 64 * 1024, 32,  0 },
	{ "N25Q032A",		0x20, 0xba161000, 64 * 1024, 64,  0 },
	{ "N25Q064A",		0x20, 0xba171000, 64 * 1024, 128, 0 },
	{ "N25Q128A",		0x20, 0xba181000, 64 * 1024, 256, 0 },
	{ "N25Q256A",		0x20, 0xba191000, 64 * 1024, 512, 1 },
	{ "MT25QL512AB",	0x20, 0xba201044, 64 * 1024, 1024, 1 },

	/* XMC? Micron? */
	{ "XM25QH128A",		0x20, 0x70180000, 64 * 1024, 256, 0 },
	{ "XM25Q128",		0x20, 0x40180000, 64 * 1024, 256, 0 },
	{ "XM25Q064",		0x20, 0x40170000, 64 * 1024, 128, 0 },
	{ "XM25Q032",		0x20, 0x40160000, 64 * 1024, 64, 0 },
	{ "XM25Q016",		0x20, 0x40160000, 64 * 1024, 32, 0 },
	
	/* ESMT */
	{ "F25L08QA",		0x8c, 0x41148c41, 64 * 1024, 16,  0 },
	{ "F25L16QA",		0x8c, 0x41158c41, 64 * 1024, 32,  0 },
	{ "F25L32QA",		0x8c, 0x41168c41, 64 * 1024, 64,  0 },
	{ "F25L64QA",		0x8c, 0x41170000, 64 * 1024, 128, 0 },
	{ "F25L128QA",		0x8c, 0x41180000, 64 * 1024, 256, 0 },
	{ "F25L256QA",		0x8c, 0x41190000, 64 * 1024, 512, 0 },
	
	/* Macronix */
	{ "MX25L8005D",		0xc2, 0x2014c220, 64 * 1024, 16,  0 },
	{ "MX25L1605D",		0xc2, 0x2015c220, 64 * 1024, 32,  0 },
	{ "MX25L3205D",		0xc2, 0x2016c220, 64 * 1024, 64,  0 },
	{ "MX25L6406E",		0xc2, 0x2017c220, 64 * 1024, 128, 0 },
	{ "MX25L12835F",	0xc2, 0x2018c220, 64 * 1024, 256, 0 },
	{ "MX25L12845E",	0xe1, 0x100c6110, 64 * 1024, 256, 0 },
	{ "MX25L25635F",	0xc2, 0x2019c220, 64 * 1024, 512, 1 },
	{ "MX25L51245G",	0xc2, 0x201ac220, 64 * 1024, 1024, 1 },

	/* GigaDevice */
	{ "GD25Q80",		0xc8, 0x40140000, 64 * 1024, 16,  0 },
	{ "GD25Q16",		0xc8, 0x40150000, 64 * 1024, 32, 0 },
	{ "GD25Q32",		0xc8, 0x40160000, 64 * 1024, 64,  0 },
	{ "GD25Q64B",		0xc8, 0x40170000, 64 * 1024, 128, 0 },
	{ "GD25Q64",		0xc8, 0x4017c840, 64 * 1024, 128, 0 },
	{ "GD25Q128",		0xc8, 0x40180000, 64 * 1024, 256, 0 },
	{ "GD25Q256",		0xc8, 0x40190000, 64 * 1024, 512, 1 },
	{ "GD25Q512",		0xc8, 0x401ac840, 64 * 1024, 1024, 1 },
	
	/* Winbond -- w25x "blocks" are 64K, "sectors" are 4KiB */
	{ "W25X80",			0xef, 0x30140000, 64 * 1024, 16,  0 },
	{ "W25X16",			0xef, 0x30150000, 64 * 1024, 32,  0 },
	{ "W25X32",			0xef, 0x30160000, 64 * 1024, 64,  0 },
	{ "W25Q80",			0xef, 0x40140000, 64 * 1024, 16, 0 }, 
	{ "W25Q16",			0xef, 0x40150000, 64 * 1024, 32, 0 }, 
	{ "W25Q32",			0xef, 0x40160000, 64 * 1024, 64,  0 },
	{ "W25Q64",	   		0xef, 0x40170000, 64 * 1024, 128, 0 }, 
	{ "W25Q128",		0xef, 0x40180000, 64 * 1024, 256, 0 },
	{ "W25Q128JV",		0xef, 0x70180000, 64 * 1024, 256, 0 },
	{ "W25Q256",		0xef, 0x40190000, 64 * 1024, 512, 1 },
	{ "W25Q256FV",		0xef, 0x70190000, 64 * 1024, 512, 1 },

	/* ST Microelectronics -- newer production may have feature updates */
	{ "m25p32",  		0x20, 0x20160000,  64 * 1024,  64, 0 },
	{ "m25p64",  		0x20, 0x20170000,  64 * 1024, 128, 0 },
	{ "m25p128", 		0x20, 0x20180000,  256 * 1024,  64, 0 },

#if defined (CONFIG_RT2880_FLASH_32M)
	{ "Unknown",		0x00, 0xffffffff, 64 * 1024, 512, 1 },
#elif defined (CONFIG_RT2880_FLASH_16M) || defined (CONFIG_RT2880_FLASH_AUTO)
	{ "Unknown",		0x00, 0xffffffff, 64 * 1024, 256, 0 },
#elif defined (CONFIG_RT2880_FLASH_8M)
	{ "Unknown",		0x00, 0xffffffff, 64 * 1024, 128, 0 },
#else
	{ "Unknown",		0x00, 0xffffffff, 64 * 1024, 64,  0 },
#endif
};
