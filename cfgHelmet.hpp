/*class CfgPatches
{
    class PEK_HD_Helmets
    {
        author="PEK";
        url="";
        requiredaddons[]=
        {
            "A3_Characters_F",
            "3DMA_WD_Helmets"
        };
        requiredVersion=1;
        units[]={};
        weapons[]=
        {
            "PEK_HD_NFP_Green_Opscore_V1",
            "PEK_HD_NFP_Tan_Opscore_V1",
            "PEK_HD_NFP_Multitone_Opscore_V1",
            "PEK_HD_NFP_Green_Opscore_V2",
            "PEK_HD_NFP_Tan_Opscore_V2",
            "PEK_HD_NFP_Multitone_Opscore_V2",
            "PEK_HD_NFP_Green_Opscore_V3",
            "PEK_HD_NFP_Tan_Opscore_V3",
            "PEK_HD_NFP_Multitone_Opscore_V3",
            "PEK_HD_NFP_Green_Opscore_V4",
            "PEK_HD_NFP_Tan_Opscore_V4",
            "PEK_HD_NFP_Multitone_Opscore_V4",
            "PEK_HD_NFP_Green_Opscore_V5",
            "PEK_HD_NFP_Tan_Opscore_V5",
            "PEK_HD_NFP_Multitone_Opscore_V5"
        };
		magazines[]={};
    };
};*/
class CfgWeapons
{
    class HeadgearItem;
    class 3DMA_WD_Opscore_V1;
    class PEK_HD_NFP_Green_Opscore_V1: 3DMA_WD_Opscore_V1
    {
        author="PEK";
        displayName="NFP Green Opscore Helmet (Scrim/v1)";
		hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Helmets\data\opscore\textures\camo1_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo2_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo3_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_Opscore_V1: PEK_HD_NFP_Green_Opscore_V1
    {
        displayName="NFP Tan Opscore Helmet (Scrim/v1)";
		hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Helmets\data\opscore\textures\camo1_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo2_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo3_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_Opscore_V1: PEK_HD_NFP_Green_Opscore_V1
    {
        displayName="NFP Multitone Opscore Helmet (Scrim/v1)";
		hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Helmets\data\opscore\textures\camo1_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo2_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo3_co.paa"
		};
    };

    class 3DMA_WD_Opscore_V2;
    class PEK_HD_NFP_Green_Opscore_V2: 3DMA_WD_Opscore_V1
    {
        author="PEK";
        displayName="NFP Green Opscore Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Helmets\data\opscore\textures\camo1_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo2_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo3_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_Opscore_V2: PEK_HD_NFP_Green_Opscore_V2
    {
        displayName="NFP Tan Opscore Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Helmets\data\opscore\textures\camo1_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo2_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo3_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_Opscore_V2: PEK_HD_NFP_Green_Opscore_V2
    {
        displayName="NFP Tan Opscore Helmet (Cover)";
		hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Helmets\data\opscore\textures\camo1_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo2_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo3_co.paa"
		};
    };

    class 3DMA_WD_Opscore_V3;
    class PEK_HD_NFP_Green_Opscore_V3: 3DMA_WD_Opscore_V3
    {
        author="PEK";
        displayName="NFP Green Opscore Helmet (v1)";
		hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Helmets\data\opscore\textures\camo1_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo2_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_Opscore_V3: PEK_HD_NFP_Green_Opscore_V3
    {
        displayName="NFP Tan Opscore Helmet (v1)";
		hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Helmets\data\opscore\textures\camo1_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo2_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_Opscore_V3: PEK_HD_NFP_Green_Opscore_V3
    {
        displayName="NFP Multitone Opscore Helmet (v1)";
		hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Helmets\data\opscore\textures\camo1_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo2_co.paa"
		};
    };

    class 3DMA_WD_Opscore_V4;
    class PEK_HD_NFP_Green_Opscore_V4: 3DMA_WD_Opscore_V4
    {
        author="PEK";
        displayName="NFP Green Opscore Helmet (Scrim/v2)";
		hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Helmets\data\opscore\textures\camo1_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo2_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo3_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_Opscore_V4: PEK_HD_NFP_Green_Opscore_V4
    {
        displayName="NFP Tan Opscore Helmet (Scrim/v2)";
		hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Helmets\data\opscore\textures\camo1_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo2_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo3_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_Opscore_V4: PEK_HD_NFP_Green_Opscore_V4
    {
        displayName="NFP Multitone Opscore Helmet (Scrim/v2)";
		hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Helmets\data\opscore\textures\camo1_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo2_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo3_co.paa"
		};
    };

    class 3DMA_WD_Opscore_V5;
    class PEK_HD_NFP_Green_Opscore_V5: 3DMA_WD_Opscore_V5
    {
        author="PEK";
        displayName="NFP Green Opscore Helmet (v2)";
		hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Helmets\data\opscore\textures\camo1_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo2_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo3_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_Opscore_V5: PEK_HD_NFP_Green_Opscore_V5
    {
        displayName="NFP Tan Opscore Helmet (v2)";
		hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Helmets\data\opscore\textures\camo1_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo2_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo3_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_Opscore_V5: PEK_HD_NFP_Green_Opscore_V5
    {
        displayName="NFP Multitone Opscore Helmet (v2)";
		hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Helmets\data\opscore\textures\camo1_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo2_co.paa",
			"3DMA_WD_Helmets\data\opscore\textures\camo3_co.paa"
		};
    };
};
