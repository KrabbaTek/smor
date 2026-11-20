#ifndef SMOR_ELF_H
#define SMOR_ELF_H

#include <stdint.h>

#define SMOR_MACHINE_NONE          0   // No machine
#define SMOR_MACHINE_M32           1   // AT&T WE 32100
#define SMOR_MACHINE_SPARC         2   // SUN SPARC
#define SMOR_MACHINE_386           3   // Intel 80386
#define SMOR_MACHINE_68K           4   // Motorola m68k family
#define SMOR_MACHINE_88K           5   // Motorola m88k family
#define SMOR_MACHINE_IAMCU         6   // Intel MCU
#define SMOR_MACHINE_860           7   // Intel 80860
#define SMOR_MACHINE_MIPS          8   // MIPS R3000 big-endian
#define SMOR_MACHINE_S370          9   // IBM System/370
#define SMOR_MACHINE_MIPS_RS3_LE   10  // MIPS R3000 little-endian
// Reserved 11-14
#define SMOR_MACHINE_PARISC        15  // HPPA
// Reserved 16
#define SMOR_MACHINE_VPP500        17  // Fujitsu VPP500
#define SMOR_MACHINE_SPARC32PLUS   18  // Sun's "v8plus"
#define SMOR_MACHINE_960           19  // Intel 80960
#define SMOR_MACHINE_PPC           20  // PowerPC
#define SMOR_MACHINE_PPC64         21  // PowerPC 64-bit
#define SMOR_MACHINE_S390          22  // IBM S390
#define SMOR_MACHINE_SPU           23  // IBM SPU/SPC
                           // reserved 24-35
#define SMOR_MACHINE_V800          36  // NEC V800 series
#define SMOR_MACHINE_FR20          37  // Fujitsu FR20
#define SMOR_MACHINE_RH32          38  // TRW RH-32
#define SMOR_MACHINE_RCE           39  // Motorola RCE
#define SMOR_MACHINE_ARM           40  // ARM
#define SMOR_MACHINE_FAKE_ALPHA    41  // Digital Alpha
#define SMOR_MACHINE_SH            42  // Hitachi SH
#define SMOR_MACHINE_SPARCV9       43  // SPARC v9 64-bit
#define SMOR_MACHINE_TRICORE       44  // Siemens Tricore
#define SMOR_MACHINE_ARC           45  // Argonaut RISC Core
#define SMOR_MACHINE_H8_300        46  // Hitachi H8/300
#define SMOR_MACHINE_H8_300H       47  // Hitachi H8/300H
#define SMOR_MACHINE_H8S           48  // Hitachi H8S
#define SMOR_MACHINE_H8_500        49  // Hitachi H8/500
#define SMOR_MACHINE_IA_64         50  // Intel Merced
#define SMOR_MACHINE_MIPS_X        51  // Stanford MIPS-X
#define SMOR_MACHINE_COLDFIRE      52  // Motorola Coldfire
#define SMOR_MACHINE_68HC12        53  // Motorola M68HC12
#define SMOR_MACHINE_MMA           54  // Fujitsu MMA Multimedia Accelerator
#define SMOR_MACHINE_PCP           55  // Siemens PCP
#define SMOR_MACHINE_NCPU          56  // Sony nCPU embeeded RISC
#define SMOR_MACHINE_NDR1          57  // Denso NDR1 microprocessor
#define SMOR_MACHINE_STARCORE      58  // Motorola Start*Core processor
#define SMOR_MACHINE_ME16          59  // Toyota ME16 processor
#define SMOR_MACHINE_ST100         60  // STMicroelectronic ST100 processor
#define SMOR_MACHINE_TINYJ         61  // Advanced Logic Corp. Tinyj emb.fam
#define SMOR_MACHINE_X86_64        62  // AMD x86-64 architecture
#define SMOR_MACHINE_PDSP          63  // Sony DSP Processor
#define SMOR_MACHINE_PDP10         64  // Digital PDP-10
#define SMOR_MACHINE_PDP11         65  // Digital PDP-11
#define SMOR_MACHINE_FX66          66  // Siemens FX66 microcontroller
#define SMOR_MACHINE_ST9PLUS       67  // STMicroelectronics ST9+ 8/16 mc
#define SMOR_MACHINE_ST7           68  // STmicroelectronics ST7 8 bit mc
#define SMOR_MACHINE_68HC16        69  // Motorola MC68HC16 microcontroller
#define SMOR_MACHINE_68HC11        70  // Motorola MC68HC11 microcontroller
#define SMOR_MACHINE_68HC08        71  // Motorola MC68HC08 microcontroller
#define SMOR_MACHINE_68HC05        72  // Motorola MC68HC05 microcontroller
#define SMOR_MACHINE_SVX           73  // Silicon Graphics SVx
#define SMOR_MACHINE_ST19          74  // STMicroelectronics ST19 8 bit mc
#define SMOR_MACHINE_VAX           75  // Digital VAX
#define SMOR_MACHINE_CRIS          76  // Axis Communications 32-bit emb.proc
#define SMOR_MACHINE_JAVELIN       77  // Infineon Technologies 32-bit emb.proc
#define SMOR_MACHINE_FIREPATH      78  // Element 14 64-bit DSP Processor
#define SMOR_MACHINE_ZSP           79  // LSI Logic 16-bit DSP Processor
#define SMOR_MACHINE_MMIX          80  // Donald Knuth's educational 64-bit proc
#define SMOR_MACHINE_HUANY         81  // Harvard University machine-independent object files
#define SMOR_MACHINE_PRISM         82  // SiTera Prism
#define SMOR_MACHINE_AVR           83  // Atmel AVR 8-bit microcontroller
#define SMOR_MACHINE_FR30          84  // Fujitsu FR30
#define SMOR_MACHINE_D10V          85  // Mitsubishi D10V
#define SMOR_MACHINE_D30V          86  // Mitsubishi D30V
#define SMOR_MACHINE_V850          87  // NEC v850
#define SMOR_MACHINE_M32R          88  // Mitsubishi M32R
#define SMOR_MACHINE_MN10300       89  // Matsushita MN10300
#define SMOR_MACHINE_MN10200       90  // Matsushita MN10200
#define SMOR_MACHINE_PJ            91  // picoJava
#define SMOR_MACHINE_OPENRISC      92  // OpenRISC 32-bit embedded processor
#define SMOR_MACHINE_ARC_COMPACT   93  // ARC International ARCompact
#define SMOR_MACHINE_XTENSA        94  // Tensilica Xtensa Architecture
#define SMOR_MACHINE_VIDEOCORE     95  // Alphamosaic VideoCore
#define SMOR_MACHINE_TMM_GPP       96  // Thompson Multimedia General Purpose Proc
#define SMOR_MACHINE_NS32K         97  // National Semi. 32000
#define SMOR_MACHINE_TPC           98  // Tenor Network TPC
#define SMOR_MACHINE_SNP1K         99  // Trebia SNP 1000
#define SMOR_MACHINE_ST200         100 // STMicroelectronics ST200
#define SMOR_MACHINE_IP2K          101 // Ubicom IP2xxx
#define SMOR_MACHINE_MAX           102 // MAX processor
#define SMOR_MACHINE_CR            103 // National Semi. CompactRISC
#define SMOR_MACHINE_F2MC16        104 // Fujitsu F2MC16
#define SMOR_MACHINE_MSP430        105 // Texas Instruments msp430
#define SMOR_MACHINE_BLACKFIN      106 // Analog Devices Blackfin DSP
#define SMOR_MACHINE_SE_C33        107 // Seiko Epson S1C33 family
#define SMOR_MACHINE_SEP           108 // Sharp embedded microprocessor
#define SMOR_MACHINE_ARCA          109 // Arca RISC
#define SMOR_MACHINE_UNICORE       110 // PKU-Unity & MPRC Peking Uni. mc series
#define SMOR_MACHINE_EXCESS        111 // eXcess configurable cpu
#define SMOR_MACHINE_DXP           112 // Icera Semi. Deep Execution Processor
#define SMOR_MACHINE_ALTERA_NIOS2  113 // Altera Nios II
#define SMOR_MACHINE_CRX           114 // National Semi. CompactRISC CRX
#define SMOR_MACHINE_XGATE         115 // Motorola XGATE
#define SMOR_MACHINE_C166          116 // Infineon C16x/XC16x
#define SMOR_MACHINE_M16C          117 // Renesas M16C
#define SMOR_MACHINE_DSPIC30F      118 // Microchip Technology dsPIC30F
#define SMOR_MACHINE_CE            119 // Freescale Communication Engine RISC
#define SMOR_MACHINE_M32C          120 // Renesas M32C
// Reserved 121-130
#define SMOR_MACHINE_TSK3000       131 // Altium TSK3000
#define SMOR_MACHINE_RS08          132 // Freescale RS08
#define SMOR_MACHINE_SHARC         133 // Analog Devices SHARC family
#define SMOR_MACHINE_ECOG2         134 // Cyan Technology eCOG2
#define SMOR_MACHINE_SCORE7        135 // Sunplus S+core7 RISC
#define SMOR_MACHINE_DSP24         136 // New Japan Radio (NJR) 24-bit DSP
#define SMOR_MACHINE_VIDEOCORE3    137 // Broadcom VideoCore III
#define SMOR_MACHINE_LATTICEMICO32 138 // RISC for Lattice FPGA
#define SMOR_MACHINE_SE_C17        139 // Seiko Epson C17
#define SMOR_MACHINE_TI_C6000      140 // Texas Instruments TMS320C6000 DSP
#define SMOR_MACHINE_TI_C2000      141 // Texas Instruments TMS320C2000 DSP
#define SMOR_MACHINE_TI_C5500      142 // Texas Instruments TMS320C55x DSP
#define SMOR_MACHINE_TI_ARP32      143 // Texas Instruments App. Specific RISC
#define SMOR_MACHINE_TI_PRU        144 // Texas Instruments Prog. Realtime Unit
// Reserved 145-159
#define SMOR_MACHINE_MMDSP_PLUS    160 // STMicroelectronics 64bit VLIW DSP
#define SMOR_MACHINE_CYPRESS_M8C   161 // Cypress M8C
#define SMOR_MACHINE_R32C          162 // Renesas R32C
#define SMOR_MACHINE_TRIMEDIA      163 // NXP Semi. TriMedia
#define SMOR_MACHINE_QDSP6         164 // QUALCOMM DSP6
#define SMOR_MACHINE_8051          165 // Intel 8051 and variants
#define SMOR_MACHINE_STXP7X        166 // STMicroelectronics STxP7x
#define SMOR_MACHINE_NDS32         167 // Andes Tech. compact code emb. RISC
#define SMOR_MACHINE_ECOG1X        168 // Cyan Technology eCOG1X
#define SMOR_MACHINE_MAXQ30        169 // Dallas Semi. MAXQ30 mc
#define SMOR_MACHINE_XIMO16        170 // New Japan Radio (NJR) 16-bit DSP
#define SMOR_MACHINE_MANIK         171 // M2000 Reconfigurable RISC
#define SMOR_MACHINE_CRAYNV2       172 // Cray NV2 vector architecture
#define SMOR_MACHINE_RX            173 // Renesas RX
#define SMOR_MACHINE_METAG         174 // Imagination Tech. META
#define SMOR_MACHINE_MCST_ELBRUS   175 // MCST Elbrus
#define SMOR_MACHINE_ECOG16        176 // Cyan Technology eCOG16
#define SMOR_MACHINE_CR16          177 // National Semi. CompactRISC CR16
#define SMOR_MACHINE_ETPU          178 // Freescale Extended Time Processing Unit
#define SMOR_MACHINE_SLE9X         179 // Infineon Tech. SLE9X
#define SMOR_MACHINE_L10M          180 // Intel L10M
#define SMOR_MACHINE_K10M          181 // Intel K10M
// Reserved 182
#define SMOR_MACHINE_AARCH64       183 // ARM AARCH64
// Reserved 184
#define SMOR_MACHINE_AVR32         185 // Amtel 32-bit microprocessor
#define SMOR_MACHINE_STM8          186 // STMicroelectronics STM8
#define SMOR_MACHINE_TILE64        187 // Tileta TILE64
#define SMOR_MACHINE_TILEPRO       188 // Tilera TILEPro
#define SMOR_MACHINE_MICROBLAZE    189 // Xilinx MicroBlaze
#define SMOR_MACHINE_CUDA          190 // NVIDIA CUDA
#define SMOR_MACHINE_TILEGX        191 // Tilera TILE-Gx
#define SMOR_MACHINE_CLOUDSHIELD   192 // CloudShield
#define SMOR_MACHINE_COREA_1ST     193 // KIPO-KAIST Core-A 1st gen.
#define SMOR_MACHINE_COREA_2ND     194 // KIPO-KAIST Core-A 2nd gen.
#define SMOR_MACHINE_ARC_COMPACT2  195 // Synopsys ARCompact V2
#define SMOR_MACHINE_OPEN8         196 // Open8 RISC
#define SMOR_MACHINE_RL78          197 // Renesas RL78
#define SMOR_MACHINE_VIDEOCORE5    198 // Broadcom VideoCore V
#define SMOR_MACHINE_78KOR         199 // Renesas 78KOR
#define SMOR_MACHINE_56800EX       200 // Freescale 56800EX DSC
#define SMOR_MACHINE_BA1           201 // Beyond BA1
#define SMOR_MACHINE_BA2           202 // Beyond BA2
#define SMOR_MACHINE_XCORE         203 // XMOS xCORE
#define SMOR_MACHINE_MCHP_PIC      204 // Microchip 8-bit PIC(r)
// Reserved 205-209
#define SMOR_MACHINE_KM32          210 // KM211 KM32
#define SMOR_MACHINE_KMX32         211 // KM211 KMX32
#define SMOR_MACHINE_EMX16         212 // KM211 KMX16
#define SMOR_MACHINE_EMX8          213 // KM211 KMX8
#define SMOR_MACHINE_KVARC         214 // KM211 KVARC
#define SMOR_MACHINE_CDP           215 // Paneve CDP
#define SMOR_MACHINE_COGE          216 // Cognitive Smart Memory Processor
#define SMOR_MACHINE_COOL          217 // Bluechip CoolEngine
#define SMOR_MACHINE_NORC          218 // Nanoradio Optimized RISC
#define SMOR_MACHINE_CSR_KALIMBA   219 // CSR Kalimba
#define SMOR_MACHINE_Z80           220 // Zilog Z80
#define SMOR_MACHINE_VISIUM        221 // Controls and Data Services VISIUMcore
#define SMOR_MACHINE_FT32          222 // FTDI Chip FT32
#define SMOR_MACHINE_MOXIE         223 // Moxie processor
#define SMOR_MACHINE_AMDGPU        224 // AMD GPU
// Reserved 225-242
#define SMOR_MACHINE_RISCV         243 // RISC-V

#define SMOR_MACHINE_BPF           247 // Linux BPF -- in-kernel virtual machine
#define SMOR_MACHINE_CSKY          252 // C-SKY

#define SMOR_MACHINE_NUM           253
#define SMOR_MACHINE_ARC_A5        SMOR_MACHINE_ARC_COMPACT
#define SMOR_MACHINE_ALPHA         0x9026

#define SMOR_TYPE_NONE		0		// No file type
#define SMOR_TYPE_REL		1		// Relocatable file
#define SMOR_TYPE_EXEC		2		// Executable file
#define SMOR_TYPE_DYN		3		// Shared object file
#define SMOR_TYPE_CORE		4		// Core file
#define	SMOR_TYPE_NUM		5		// Number of defined types
#define SMOR_TYPE_LOOS		0xfe00  // OS-specific range start
#define SMOR_TYPE_HIOS		0xfeff	// OS-specific range end
#define SMOR_TYPE_LOPROC	0xff00	// Processor-specific range start
#define SMOR_TYPE_HIPROC	0xffff	// Processor-specific range end

typedef struct {
    uint8_t  e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;   // Always 1

    uint64_t e_entry;     // Address where execution starts

    uint64_t e_phoff;     // Program header's offset
    uint64_t e_shoff;     // Section header's offset

    uint16_t e_ehsize;    // Header size
    uint16_t e_phentsize; // Size of a single program header
    uint16_t e_phnum;     // Count of program headers
    uint16_t e_shentsize; // Size of a single section header
    uint16_t e_shnum;     // Count of section headers
    uint16_t e_shstrndx;  // Index of names' section in the table


} SmorElf64ExecutableHeader;

typedef struct {
    uint32_t p_type;
    uint32_t p_flags;

    uint64_t p_offset; // Offset where it should be read

    uint64_t p_vaddr;  // Virtual address where it should be loaded
    uint64_t p_paddr;  // Physical address where it should be loaded

    uint64_t p_filesz; // Size on file
    uint64_t p_memsz;  // Size in memory

    uint64_t p_align;

} SmorElf64ProgramHeader;

typedef struct {
    uint32_t sh_name;  // Offset into .shstrtab
    uint32_t sh_type;  // What content it holds, .text, etc

    uint64_t sh_flags; // Attributes

    uint64_t sh_addr;  // Virtual address of the section
    uint64_t sh_offset;
    uint64_t sh_size;
    uint32_t sh_link;
    uint32_t sh_info;
    uint64_t sh_addralign;
    uint64_t sh_entsize;

} SmorElf64SectionHeader;

#endif // SMOR_ELF_H