/*class CfgPatches
{
    class PEK_HD_Backpacks
    {
        author="PEK";
        url="";
        requiredaddons[]=
        {
            "A3_Characters_F",
            "3DMA_WD_Backpacks"
        };
        requiredVersion=1;
        units[]=
        {
            "PEK_HD_NFP_Green_SatL",
            "PEK_HD_NFP_Tan_SatL",
            "PEK_HD_NFP_Multitone_SatL",
            "PEK_HD_NFP_Green_DeltaBag",
            "PEK_HD_NFP_Tan_DeltaBag",
            "PEK_HD_NFP_Multitone_DeltaBag",
            "PEK_HD_NFP_Green_GMRMinimap",
            "PEK_HD_NFP_Tan_GMRMinimap",
            "PEK_HD_NFP_Multitone_GMRMinimap",
            "PEK_HD_NFP_Green_BackPanelBanger",
            "PEK_HD_NFP_Tan_BackPanelBanger",
            "PEK_HD_NFP_Multitone_BackPanelBanger",
            "PEK_HD_NFP_Green_AVSZipOn",
            "PEK_HD_NFP_Tan_AVSZipOn",
            "PEK_HD_NFP_Multitone_AVSZipOn",
            "PEK_HD_NFP_Green_SpiritusBackPanel",
            "PEK_HD_NFP_Tan_SpiritusBackPanel",
            "PEK_HD_NFP_Multitone_SpiritusBackPanel"
        };
        weapons[]={}:
		magazines[]={};
    };
};*/
class CfgVehicles
{
    class 3DMA_WD_SatL;
    class PEK_HD_NFP_Green_SatL: 3DMA_WD_SatL
    {
        author="PEK";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Backpacks\data\satl\textures\satl_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_SatL: PEK_HD_NFP_Green_SatL
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Backpacks\data\satl\textures\satl_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_SatL: PEK_HD_NFP_Green_SatL
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Backpacks\data\satl\textures\satl_co.paa"
		};
    };

    class 3DMA_WD_DeltaBag;
    class PEK_HD_NFP_Green_DeltaBag: 3DMA_WD_DeltaBag
    {
        author="PEK";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Backpacks\data\delta\textures\delta_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_DeltaBag: PEK_HD_NFP_Green_DeltaBag
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Backpacks\data\delta\textures\delta_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_DeltaBag: PEK_HD_NFP_Green_DeltaBag
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Backpacks\data\delta\textures\delta_co.paa",
			"3DMA_WD_Vests\data\avs\textures\misc_1_co.paa"
		};
    };

    class 3DMA_WD_GMRMinimap;
    class PEK_HD_NFP_Green_GMRMinimap: 3DMA_WD_GMRMinimap
    {
        author="PEK";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Backpacks\data\minimap\textures\minimap_co.paa",
			"3DMA_WD_Vests\data\patches\textures\flag_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_GMRMinimap: PEK_HD_NFP_Green_GMRMinimap
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Backpacks\data\minimap\textures\minimap_co.paa",
			"3DMA_WD_Vests\data\patches\textures\flag_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_GMRMinimap: PEK_HD_NFP_Green_GMRMinimap
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Backpacks\data\minimap\textures\minimap_co.paa",
			"3DMA_WD_Vests\data\patches\textures\flag_co.paa"
		};
    };

    class 3DMA_WD_BackPanelBanger;
    class PEK_HD_NFP_Green_BackPanelBanger: 3DMA_WD_BackPanelBanger
    {
        author="PEK";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Backpacks\data\banger\textures\banger_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_BackPanelBanger: PEK_HD_NFP_Green_BackPanelBanger
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Backpacks\data\banger\textures\banger_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_BackPanelBanger: PEK_HD_NFP_Green_BackPanelBanger
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Backpacks\data\banger\textures\banger_co.paa"
		};
    };

    class 3DMA_WD_AVSZipOn;
    class PEK_HD_NFP_Green_AVSZipOn: 3DMA_WD_AVSZipOn
    {
        author="PEK";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Backpacks\data\zipon\textures\zipon_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_AVSZipOn: PEK_HD_NFP_Green_AVSZipOn
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Backpacks\data\zipon\textures\zipon_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_AVSZipOn: PEK_HD_NFP_Green_AVSZipOn
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Backpacks\data\zipon\textures\zipon_co.paa"
		};
    };

    class 3DMA_WD_SpiritusBackPanel;
    class PEK_HD_NFP_Green_SpiritusBackPanel: 3DMA_WD_SpiritusBackPanel
    {
        author="PEK";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_SpiritusBackPanel: PEK_HD_NFP_Green_SpiritusBackPanel
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_SpiritusBackPanel: PEK_HD_NFP_Green_SpiritusBackPanel
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Vests\data\spiritus\textures\backpanel_co.paa"
		};
    };
};
