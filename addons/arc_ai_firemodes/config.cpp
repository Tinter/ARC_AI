#include "\userconfig\arc_ai\macros.hpp"
#include "macros.hpp"

class CfgPatches {
    class arc_ai_firemodes {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.54;
        author[] = {"Ed", "Kingsley"};
        authorUrl = "https://github.com/ARCOMM/ARC_AI";
        requiredAddons[] = {
			"",
			"",
			"",
			"",
			"",
		};
        ammo[] = {};
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {
    #include "rifles.hpp"
    // #include "smg.hpp"
    // #include "dmr.hpp"
    // #include "mg.hpp"
    
    PROTO(Default)
    
    // GL(GrenadeLauncher, Default)
    // GL(UGL_F, GrenadeLauncher)
    // GL(GP25_Base, UGL_F)
};