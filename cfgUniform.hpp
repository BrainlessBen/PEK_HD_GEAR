/*class CfgPatches
{
    class PEK_HD_Uniform
    {
        author="PEK";
        url="";
        requiredaddons[]=
        {
            "A3_Characters_F",
            "3DMA_WD_Uniform"
        };
        requiredVersion=1;
        units[]={};
        weapons[]=
        {
            "PEK_HD_NFP_Green_Patagonia_PadsSleeves",
            "PEK_HD_NFP_Tan_Patagonia_PadsSleeves",
            "PEK_HD_NFP_Multitone_Patagonia_PadsSleeves",
            "PEK_HD_NFP_Green_Patagonia_PadsGlovesSleeves",
            "PEK_HD_NFP_Tan_Patagonia_PadsGlovesSleeves",
            "PEK_HD_NFP_Multitone_Patagonia_PadsGlovesSleeves",
            "PEK_HD_NFP_Green_G3_Uniform_Pads",
            "PEK_HD_NFP_Tan_G3_Uniform_Pads",
            "PEK_HD_NFP_Multitone_G3_Uniform_Pads",
            "PEK_HD_NFP_Green_G3_Uniform_PadsSleeves",
            "PEK_HD_NFP_Tan_G3_Uniform_PadsSleeves",
            "PEK_HD_NFP_Multitone_G3_Uniform_PadsSleeves",
            "PEK_HD_NFP_Green_G3_Uniform_PadsGloves",
            "PEK_HD_NFP_Tan_G3_Uniform_PadsGloves",
            "PEK_HD_NFP_Multitone_G3_Uniform_PadsGloves",
            "PEK_HD_NFP_Green_G3_Uniform_PadsGlovesSleeves",
            "PEK_HD_NFP_Tan_G3_Uniform_PadsGlovesSleeves",
            "PEK_HD_NFP_Multitone_G3_Uniform_PadsGlovesSleeves"
        };
		magazines[]={};
    };
};*/
class CfgWeapons
{
    class UniformItem;
    class 3DMA_WD_Patagonia_PadsSleeves;
    class PEK_HD_NFP_Green_Patagonia_PadsSleeves: 3DMA_WD_Patagonia_PadsSleeves
    {
        author="PEK";
        displayName="";
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Green_TESTMAN_PATAGONIA_Kneepads_Sleeves";
		};
    };
    class PEK_HD_NFP_Tan_Patagonia_PadsSleeves: PEK_HD_NFP_Green_Patagonia_PadsSleeves
    {
        displayName="";
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Tan_TESTMAN_PATAGONIA_Kneepads_Sleeves";
		};
    };
    class PEK_HD_NFP_Multitone_Patagonia_PadsSleeves: PEK_HD_NFP_Green_Patagonia_PadsSleeves
    {
        displayName="";
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Multitone_TESTMAN_PATAGONIA_Kneepads_Sleeves";
		};
    };

    class 3DMA_WD_Patagonia_PadsGlovesSleeves;
    class PEK_HD_NFP_Green_Patagonia_PadsGlovesSleeves: 3DMA_WD_Patagonia_PadsGlovesSleeves
    {
        author="PEK";
        displayName="";
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Green_TESTMAN_PATAGONIA_Kneepads_Gloves_Sleeves";
		};
    };
    class PEK_HD_NFP_Tan_Patagonia_PadsGlovesSleeves: PEK_HD_NFP_Green_Patagonia_PadsGlovesSleeves
    {
        displayName="";
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Tan_TESTMAN_PATAGONIA_Kneepads_Gloves_Sleeves";
		};
    };
    class PEK_HD_NFP_Multitone_Patagonia_PadsGlovesSleeves: PEK_HD_NFP_Green_Patagonia_PadsGlovesSleeves
    {
        displayName="";
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Multitone_TESTMAN_PATAGONIA_Kneepads_Gloves_Sleeves";
		};
    };

    class 3DMA_WD_G3_Uniform_Pads;
    class PEK_HD_NFP_Green_G3_Uniform_Pads: 3DMA_WD_G3_Uniform_Pads
    {
        author="PEK";
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Green_TESTMAN_G3_Kneepads";
		};
    };
    class PEK_HD_NFP_Tan_G3_Uniform_Pads: PEK_HD_NFP_Green_G3_Uniform_Pads
    {
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Tan_TESTMAN_G3_Kneepads";
		};
    };
    class PEK_HD_NFP_Multitone_G3_Uniform_Pads: PEK_HD_NFP_Green_G3_Uniform_Pads
    {
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Multitone_TESTMAN_G3_Kneepads";
		};
    };

    class 3DMA_WD_G3_Uniform_PadsSleeves;
    class PEK_HD_NFP_Green_G3_Uniform_PadsSleeves: 3DMA_WD_G3_Uniform_PadsSleeves
    {
        author="PEK";
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Green_TESTMAN_G3_Kneepads_Sleeves";
		};
    };
    class PEK_HD_NFP_Tan_G3_Uniform_PadsSleeves: PEK_HD_NFP_Green_G3_Uniform_PadsSleeves
    {
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Tan_TESTMAN_G3_Kneepads_Sleeves";
		};
    };
    class PEK_HD_NFP_Multitone_G3_Uniform_PadsSleeves: PEK_HD_NFP_Green_G3_Uniform_PadsSleeves
    {
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Multitone_TESTMAN_G3_Kneepads_Sleeves";
		};
    };

    class 3DMA_WD_G3_Uniform_PadsGloves;
    class PEK_HD_NFP_Green_G3_Uniform_PadsGloves: 3DMA_WD_G3_Uniform_PadsGloves
    {
        author="PEK";
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Green_TESTMAN_G3_Kneepads_Gloves";
		};
    };
    class PEK_HD_NFP_Tan_G3_Uniform_PadsGloves: PEK_HD_NFP_Green_G3_Uniform_PadsGloves
    {
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Tan_TESTMAN_G3_Kneepads_Gloves";
		};
    };
    class PEK_HD_NFP_Multitone_G3_Uniform_PadsGloves: PEK_HD_NFP_Green_G3_Uniform_PadsGloves
    {
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Multitone_TESTMAN_G3_Kneepads_Gloves";
		};
    };

    class 3DMA_WD_G3_Uniform_PadsGlovesSleeves;
    class PEK_HD_NFP_Green_G3_Uniform_PadsGlovesSleeves: 3DMA_WD_G3_Uniform_PadsGlovesSleeves
    {
        author="PEK";
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Green_TESTMAN_G3_Kneepads_Gloves_Sleeves";
		};
    };
    class PEK_HD_NFP_Tan_G3_Uniform_PadsGlovesSleeves: PEK_HD_NFP_Green_G3_Uniform_PadsGlovesSleeves
    {
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Tan_TESTMAN_G3_G3_Kneepads_Gloves_Sleeves";
		};
    };
    class PEK_HD_NFP_Multitone_G3_Uniform_PadsGlovesSleeves: PEK_HD_NFP_Green_G3_Uniform_PadsGlovesSleeves
    {
        class ItemInfo: UniformItem
		{
			uniformClass="PEK_HD_NFP_Multitone_TESTMAN_G3_Kneepads_Gloves_Sleeves";
		};
    };

};
class CfgVehicles
{
    class 3DMA_WD_TESTMAN_PATAGONIA_Kneepads_Sleeves;
    class PEK_HD_NFP_Green_TESTMAN_PATAGONIA_Kneepads_Sleeves: 3DMA_WD_TESTMAN_PATAGONIA_Kneepads_Sleeves
    {
        author="PEK";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_TESTMAN_PATAGONIA_Kneepads_Sleeves: PEK_HD_NFP_Green_TESTMAN_PATAGONIA_Kneepads_Sleeves
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_TESTMAN_PATAGONIA_Kneepads_Sleeves: PEK_HD_NFP_Green_TESTMAN_PATAGONIA_Kneepads_Sleeves
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };

    class 3DMA_WD_TESTMAN_PATAGONIA_Kneepads_Gloves_Sleeves;
    class PEK_HD_NFP_Green_TESTMAN_PATAGONIA_Kneepads_Gloves_Sleeves: 3DMA_WD_TESTMAN_PATAGONIA_Kneepads_Gloves_Sleeves
    {
        author="PEK";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo4_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_TESTMAN_PATAGONIA_Kneepads_Gloves_Sleeves: PEK_HD_NFP_Green_TESTMAN_PATAGONIA_Kneepads_Gloves_Sleeves
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo4_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_TESTMAN_PATAGONIA_Kneepads_Gloves_Sleeves: PEK_HD_NFP_Green_TESTMAN_PATAGONIA_Kneepads_Gloves_Sleeves
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo4_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };

    class 3DMA_WD_TESTMAN_G3_Kneepads;
    class PEK_HD_NFP_Green_TESTMAN_G3_Kneepads: 3DMA_WD_TESTMAN_G3_Kneepads
    {
        author="PEK";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo4_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_TESTMAN_G3_Kneepads: PEK_HD_NFP_Green_TESTMAN_G3_Kneepads
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo4_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_TESTMAN_G3_Kneepads: PEK_HD_NFP_Green_TESTMAN_G3_Kneepads
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo4_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };

    class 3DMA_WD_TESTMAN_G3_Kneepads_Sleeves;
    class PEK_HD_NFP_Green_TESTMAN_G3_Sleeves: 3DMA_WD_TESTMAN_G3_Kneepads_Sleeves
    {
        author="PEK";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo4_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_TESTMAN_G3_Sleeves: PEK_HD_NFP_Green_TESTMAN_G3_Sleeves
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo4_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_TESTMAN_G3_Sleeves: PEK_HD_NFP_Green_TESTMAN_G3_Sleeves
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo4_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };

    class 3DMA_WD_TESTMAN_G3_Kneepads_Gloves;
    class PEK_HD_NFP_Green_TESTMAN_G3_Kneepads_Gloves: 3DMA_WD_TESTMAN_G3_Kneepads_Gloves
    {
        author="PEK";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo4_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_TESTMAN_G3_Kneepads_Gloves: PEK_HD_NFP_Green_TESTMAN_G3_Kneepads_Gloves
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo4_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_TESTMAN_G3_Kneepads_Gloves: PEK_HD_NFP_Green_TESTMAN_G3_Kneepads_Gloves
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo4_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };

    class 3DMA_WD_TESTMAN_G3_Kneepads_Gloves_Sleeves;
    class PEK_HD_NFP_Green_TESTMAN_G3_Kneepads_Gloves_Sleeves: 3DMA_WD_TESTMAN_G3_Kneepads_Gloves_Sleeves
    {
        author="PEK";
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo4_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };
    class PEK_HD_NFP_Tan_TESTMAN_G3_Kneepads_Gloves_Sleeves: PEK_HD_NFP_Green_TESTMAN_G3_Kneepads_Gloves_Sleeves
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo4_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };
    class PEK_HD_NFP_Multitone_TESTMAN_G3_Kneepads_Gloves_Sleeves: PEK_HD_NFP_Green_TESTMAN_G3_Kneepads_Gloves_Sleeves
    {
        hiddenSelectionsTextures[]=
		{
			"3DMA_WD_Uniforms\data\patagonia\textures\camo1_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo2_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo3_co.paa",
			"3DMA_WD_Uniforms\data\shared\camo4_co.paa",
			"3DMA_WD_Uniforms\data\shared\patch_co.paa"
		};
    };
};
