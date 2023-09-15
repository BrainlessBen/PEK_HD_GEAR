/*class CfgPatches
{
    class PEK_HD_Vest
    {
        author="PEK";
        url="";
        requiredaddons[]=
        {
            "A3_Characters_F",
            "3DMA_WD_Vest"
        };
        requiredVersion=1;
        units[]={};
        weapons[]=
        {
            "PEK_HD_NFP_Green_Vest_Tyr",
            "PEK_HD_NFP_Tan_Vest_Tyr",
            "PEK_HD_NFP_Multitone_Vest_Tyr",
            "PEK_HD_NFP_Green_AVS_Base",
            "PEK_HD_NFP_Tan_AVS_Base",
            "PEK_HD_NFP_Multitone_AVS_Base",
            "PEK_HD_NFP_Green_AVS_Base_H",
            "PEK_HD_NFP_Tan_AVS_Base_H",
            "PEK_HD_NFP_Multitone_AVS_Base_H",
            "PEK_HD_NFP_Green_AVS_Grenadier",
            "PEK_HD_NFP_Tan_AVS_Grenadier",
            "PEK_HD_NFP_Multitone_AVS_Grenadier",
            "PEK_HD_NFP_Green_AVS_JTAC",
            "PEK_HD_NFP_Tan_AVS_JTAC",
            "PEK_HD_NFP_Multitone_AVS_JTAC",
            "PEK_HD_NFP_Green_AVS_PLLEAD",
            "PEK_HD_NFP_Tan_AVS_PLLEAD",
            "PEK_HD_NFP_Multitone_AVS_PLLEAD",
            "PEK_HD_NFP_Green_AVS_Medic",
            "PEK_HD_NFP_Tan_AVS_Medic",
            "PEK_HD_NFP_Multitone_AVS_Medic",
            "PEK_HD_NFP_Green_AVS_PLRadio",
            "PEK_HD_NFP_Tan_AVS_PLRadio",
            "PEK_HD_NFP_Multitone_AVS_PLRadio",
            "PEK_HD_NFP_Green_AVS_PLSGT",
            "PEK_HD_NFP_Tan_AVS_PLSGT",
            "PEK_HD_NFP_Multitone_AVS_PLSGT",
            "PEK_HD_NFP_Green_AVS_SL",
            "PEK_HD_NFP_Tan_AVS_SL",
            "PEK_HD_NFP_Multitone_AVS_SL",
            "PEK_HD_NFP_Green_AVS_Saw",
            "PEK_HD_NFP_Tan_AVS_Saw",
            "PEK_HD_NFP_Multitone_AVS_Saw",
            "PEK_HD_NFP_Green_AVS_Rifleman_v1",
            "PEK_HD_NFP_Tan_AVS_Rifleman_v1",
            "PEK_HD_NFP_Multitone_AVS_Rifleman_v1",
            "PEK_HD_NFP_Green_AVS_Rifleman_v2",
            "PEK_HD_NFP_Tan_AVS_Rifleman_v2",
            "PEK_HD_NFP_Multitone_AVS_Rifleman_v2",
            "PEK_HD_NFP_Green_AVS_Rifleman_v3",
            "PEK_HD_NFP_Tan_AVS_Rifleman_v3",
            "PEK_HD_NFP_Multitone_AVS_Rifleman_v3",
            "PEK_HD_NFP_Green_AVS_Rifleman_v4",
            "PEK_HD_NFP_Tan_AVS_Rifleman_v4",
            "PEK_HD_NFP_Multitone_AVS_Rifleman_v4",
            "PEK_HD_NFP_Green_AVS_SNOT",
            "PEK_HD_NFP_Tan_AVS_SNOT",
            "PEK_HD_NFP_Multitone_AVS_SNOT"
        };
		magazines[]={};
    };
};*/
class CfgWeapons
{
    class 3DMA_WD_Tyr;
    class PEK_HD_NFP_Green_Vest_Tyr: 3DMA_WD_Tyr
    {
        author="PEK";
        displayName="NFP Green Tyr Belt";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_Vest_Tyr: PEK_HD_NFP_Green_Vest_Tyr
    {
        displayName="NFP Tan Tyr Belt";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_Vest_Tyr: PEK_HD_NFP_Green_Vest_Tyr
    {
        displayName="NFP Multitone Tyr Belt";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa"
		};
    };

    class 3DMA_WD_AVS_Base;
    class PEK_HD_NFP_Green_AVS_Base: 3DMA_WD_AVS_Base
    {
        author="PEK";
        displayName="NFP Green AVS (Base)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVS_Base: PEK_HD_NFP_Green_AVS_Base
    {
        displayName="NFP Tan AVS (Base)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVS_Base: PEK_HD_NFP_Green_AVS_Base
    {
        displayName="NFP Multitone AVS (Base)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa"
		};
    };

    class 3DMA_WD_AVS_Base_H;
    class PEK_HD_NFP_Green_AVS_Base_H: 3DMA_WD_AVS_Base_H
    {
        author="PEK";
        displayName="NFP Green AVS (Base/Holster)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVS_Base_H: PEK_HD_NFP_Green_AVS_Base_H
    {
        displayName="NFP Tan AVS (Base/Holster)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVS_Base_H: PEK_HD_NFP_Green_AVS_Base_H
    {
        displayName="NFP Multitone AVS (Base/Holster)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa"
		};
    };

    class 3DMA_WD_AVS_Grenadier;
    class PEK_HD_NFP_Green_AVS_Grenadier: 3DMA_WD_AVS_Grenadier
    {
        author="PEK";
        displayName="NFP Green AVS (Grenadier)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\avs\textures\40mm_co.paa",
			"3DMA_WD_Vests\data\avs\textures\40mm_pouch_co.paa",
			"3DMA_WD_Vests\data\avs\textures\abdominal_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mechanix_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVS_Grenadier: PEK_HD_NFP_Green_AVS_Grenadier
    {
        displayName="NFP Tan AVS (Grenadier)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\avs\textures\40mm_co.paa",
			"3DMA_WD_Vests\data\avs\textures\40mm_pouch_co.paa",
			"3DMA_WD_Vests\data\avs\textures\abdominal_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mechanix_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVS_Grenadier: PEK_HD_NFP_Green_AVS_Grenadier
    {
        displayName="NFP Multitone AVS (Grenadier)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\avs\textures\40mm_co.paa",
			"3DMA_WD_Vests\data\avs\textures\40mm_pouch_co.paa",
			"3DMA_WD_Vests\data\avs\textures\abdominal_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mechanix_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa"
		};
    };

    class 3DMA_WD_AVS_JTAC;
    class PEK_HD_NFP_Green_AVS_JTAC: 3DMA_WD_AVS_JTAC
    {
        author="PEK";
        displayName="NFP Green AVS (JTAC)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\patches\textures\jtac_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\avs\textures\s7_co.paa",
			"3DMA_WD_Vests\data\avs\textures\sixpouch_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVS_JTAC: PEK_HD_NFP_Green_AVS_JTAC
    {
        displayName="NFP Tan AVS (JTAC)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\patches\textures\jtac_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\avs\textures\s7_co.paa",
			"3DMA_WD_Vests\data\avs\textures\sixpouch_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVS_JTAC: PEK_HD_NFP_Green_AVS_JTAC
    {
        displayName="NFP Multitone AVS (JTAC)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\patches\textures\jtac_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\avs\textures\s7_co.paa",
			"3DMA_WD_Vests\data\avs\textures\sixpouch_co.paa"
		};
    };

    class 3DMA_WD_AVS_PLLEAD;
    class PEK_HD_NFP_Green_AVS_PLLEAD: 3DMA_WD_AVS_PLLEAD
    {
        author="PEK";
        displayName="NFP Green AVS (PL Lead)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mpu5_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVS_PLLEAD: PEK_HD_NFP_Green_AVS_PLLEAD
    {
        displayName="NFP Tan AVS (PL Lead)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mpu5_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVS_PLLEAD: PEK_HD_NFP_Green_AVS_PLLEAD
    {
        displayName="NFP Multitone AVS (PL Lead)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mpu5_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa"
		};
    };

    class 3DMA_WD_AVS_Medic;
    class PEK_HD_NFP_Green_AVS_Medic: 3DMA_WD_AVS_Medic
    {
        author="PEK";
        displayName="NFP Green AVS (Medic)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\roll1_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVS_Medic: PEK_HD_NFP_Green_AVS_Medic
    {
        displayName="NFP Tan AVS (Medic)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\roll1_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVS_Medic: PEK_HD_NFP_Green_AVS_Medic
    {
        displayName="NFP Multitone AVS (Medic)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\roll1_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa"
		};
    };

    class 3DMA_WD_AVS_PLRadio;
    class PEK_HD_NFP_Green_AVS_PLRadio: 3DMA_WD_AVS_PLRadio
    {
        author="PEK";
        displayName="NFP Green AVS (PL Radio)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVS_PLRadio: PEK_HD_NFP_Green_AVS_PLRadio
    {
        displayName="NFP Tan AVS (PL Radio)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVS_PLRadio: PEK_HD_NFP_Green_AVS_PLRadio
    {
        displayName="NFP Multitone AVS (PL Radio)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa"
		};
    };

    class 3DMA_WD_AVS_PLSGT;
    class PEK_HD_NFP_Green_AVS_PLSGT: 3DMA_WD_AVS_PLSGT
    {
        author="PEK";
        displayName="NFP Green AVS (PL SGT)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mpu5_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVS_PLSGT: PEK_HD_NFP_Green_AVS_PLSGT
    {
        displayName="NFP Tan AVS (PL SGT)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mpu5_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVS_PLSGT: PEK_HD_NFP_Green_AVS_PLSGT
    {
        displayName="NFP Multitone AVS (PL SGT)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mpu5_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa"
		};
    };

    class 3DMA_WD_AVS_SL;
    class PEK_HD_NFP_Green_AVS_SL: 3DMA_WD_AVS_SL
    {
        author="PEK";
        displayName="NFP Green AVS (SL)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mechanix_co.paa",
			"3DMA_WD_Vests\data\avs\textures\s7_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVS_SL: PEK_HD_NFP_Green_AVS_SL
    {
        displayName="NFP Tan AVS (SL)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mechanix_co.paa",
			"3DMA_WD_Vests\data\avs\textures\s7_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVS_SL: PEK_HD_NFP_Green_AVS_SL
    {
        displayName="NFP Multitone AVS (SL)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mechanix_co.paa",
			"3DMA_WD_Vests\data\avs\textures\s7_co.paa"
		};
    };

    class 3DMA_WD_AVS_Saw;
    class PEK_HD_NFP_Green_AVS_Saw: 3DMA_WD_AVS_Saw
    {
        author="PEK";
        displayName="NFP Green AVS (Saw Gunner)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_m60_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mechanix_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVS_Saw: PEK_HD_NFP_Green_AVS_Saw
    {
        displayName="NFP Tan AVS (Saw Gunner)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_m60_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mechanix_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVS_Saw: PEK_HD_NFP_Green_AVS_Saw
    {
        displayName="NFP Multitone AVS (Saw Gunner)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_m60_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mechanix_co.paa"
		};
    };

    class 3DMA_WD_AVS_Rifleman_v1;
    class PEK_HD_NFP_Green_AVS_Rifleman_v1: 3DMA_WD_AVS_Rifleman_v1
    {
        author="PEK";
        displayName="NFP Green AVS (Rifleman v1)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\sixpouch_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVS_Rifleman_v1: PEK_HD_NFP_Green_AVS_Rifleman_v1
    {
        displayName="NFP Tan AVS (Rifleman v1)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\sixpouch_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVS_Rifleman_v1: PEK_HD_NFP_Green_AVS_Rifleman_v1
    {
        displayName="NFP Multitone AVS (Rifleman v1)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\sixpouch_co.paa"
		};
    };

    class 3DMA_WD_AVS_Rifleman_v2;
    class PEK_HD_NFP_Green_AVS_Rifleman_v2: 3DMA_WD_AVS_Rifleman_v2
    {
        author="PEK";
        displayName="NFP Green AVS (Rifleman v2)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\knife_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mechanix_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVS_Rifleman_v2: PEK_HD_NFP_Green_AVS_Rifleman_v2
    {
        displayName="NFP Tan AVS (Rifleman v2)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\knife_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mechanix_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVS_Rifleman_v2: PEK_HD_NFP_Green_AVS_Rifleman_v2
    {
        displayName="NFP Multitone AVS (Rifleman v2)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\knife_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mechanix_co.paa"
		};
    };

    class 3DMA_WD_AVS_Rifleman_v3;
    class PEK_HD_NFP_Green_AVS_Rifleman_v3: 3DMA_WD_AVS_Rifleman_v3
    {
        author="PEK";
        displayName="NFP Green AVS (Rifleman v3)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\avs\textures\roll1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\sixpouch_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVS_Rifleman_v3: PEK_HD_NFP_Green_AVS_Rifleman_v3
    {
        displayName="NFP Tan AVS (Rifleman v3)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\avs\textures\roll1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\sixpouch_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVS_Rifleman_v3: PEK_HD_NFP_Green_AVS_Rifleman_v3
    {
        displayName="NFP Multitone AVS (Rifleman v3)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\avs\textures\roll1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\sixpouch_co.paa"
		};
    };

    class 3DMA_WD_AVS_Rifleman_v4;
    class PEK_HD_NFP_Green_AVS_Rifleman_v4: 3DMA_WD_AVS_Rifleman_v4
    {
        author="PEK";
        displayName="NFP Green AVS (Rifleman v4)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVS_Rifleman_v4: PEK_HD_NFP_Green_AVS_Rifleman_v4
    {
        displayName="NFP Tan AVS (Rifleman v4)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVS_Rifleman_v4: PEK_HD_NFP_Green_AVS_Rifleman_v4
    {
        displayName="NFP Multitone AVS (Rifleman v4)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_avs_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa"
		};
    };

    class 3DMA_WD_AVS_SNOT;
    class PEK_HD_NFP_Green_AVS_SNOT: 3DMA_WD_AVS_SNOT
    {
        author="PEK";
        displayName="NFP Green AVS (SNOT)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\magdmr_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mechanix_co.paa",
			"3DMA_WD_Vests\data\avs\textures\s7_co.paa",
			"3DMA_WD_Vests\data\patches\textures\3dma_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVS_SNOT: PEK_HD_NFP_Green_AVS_SNOT
    {
        displayName="NFP Tan AVS (SNOT)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\magdmr_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mechanix_co.paa",
			"3DMA_WD_Vests\data\avs\textures\s7_co.paa",
			"3DMA_WD_Vests\data\patches\textures\3dma_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVS_SNOT: PEK_HD_NFP_Green_AVS_SNOT
    {
        displayName="NFP Multitone AVS (SNOT)";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\avs\textures\camo_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\belt_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\dumppouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\g17_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\safariland_co.paa",
			"3DMA_WD_Vests\data\avs\textures\gpouch_co.paa",
			"3DMA_WD_Vests\data\tyr\textures\ifak_co.paa",
			"3DMA_WD_Vests\data\avs\textures\m4mag_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa",
			"3DMA_WD_Vests\data\avs\textures\pouch_spud_co.paa",
			"3DMA_WD_Vests\data\avs\textures\anprc_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_2_co.paa",
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa",
			"3DMA_WD_Vests\data\avs\textures\magdmr_co.paa",
			"3DMA_WD_Vests\data\avs\textures\mechanix_co.paa",
			"3DMA_WD_Vests\data\avs\textures\s7_co.paa",
			"3DMA_WD_Vests\data\patches\textures\3dma_co.paa"
		};
    };
};
