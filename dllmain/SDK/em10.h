// filename is likely wrong...
#pragma once
#include "cloth.h"
#include "obj.h"

class cEm10 : cEm
{
public:
	Vec TmpV_408;
	Vec St_pos_414;
	Vec Keep_pos_420;
	Vec Route_target_42C;
	Vec Return_ck_pos_438;
	Vec Pl_pos_444;
	Vec Sub_pos_450;
	Vec Go_pos_45C;
	Vec Floor_ang_468;
	Vec Spd_474;
	Vec Target_pos_480;
	Vec Goto_pos_48C;
	Vec Scale_498;
	Vec Campos_4A4;
	uint32_t Be_flg_4B0;
	float Timer_4B4;
	float Timer2_4B8;
	float Timer3_4BC;
	float Timer4_4C0;
	float Timer5_4C4;
	float TmpF_4C8;
	float TmpF2_4CC;
	uint32_t TmpU32_4D0;
	cModelData* Md_4D4[41];
	uint32_t Wmd_578[38];
	class cEmWep* pWeapon_610;
	class cEmWep* pWeapon2_614;
	struct cEmShield* pShield_618;
	class cObj12* pCap_61C;
	class cObj12* pGlasses_620;
	class cObj12* pCart_624;
	cModelInfo* pRHand_628;
	cModelInfo* pLHand_62C;
	cModelInfo* pHead_630;
	cModelInfo* pRobe_634;
	cModelInfo* pCloth_638;
	cModelInfo* pGoods_63C;
	cModelInfo* pSack_640;
	cModelInfo* pHood_644;
	cModelInfo* pWhood_648;
	cModelInfo* pAccesory_64C[7];
	float St_dir_668;
	class cObjLadder* objLadder_66C;
	class cEmSwitch* switchPtr_670;
	float Pl_dir_674;
	float Pl_rot_678;
	float Sub_dir_67C;
	float Sub_rot_680;
	float L_sub_684;
	float Go_dir_688;
	float Go_rot_68C;
	float L_go_690;
	float L_pl_route_694;
	float L_sub_route_698;
	float L_pl_guard_69C;
	float L_guard_6A0;
	class cEmWindow* pWindow_6A4;
	cEm* pTruck_6A8;
	class cObjGondola* pGondola_6AC;
	cObj* pDrill_6B0;
	class cObjGatling* pGatling_6B4;
	class cCtrl14* pDragon_6B8;
	class cObj16* pCore_6BC;
	class cObj16* pTen_6C0[5];
	class cEm25* pParasite_6D4;
	class cObjChain* pGunBelt_6D8;
	class cObjChain* pChain_6DC;
	class cCtrl12* pCtrlGroup_6E0;
	class cCtrl11* pCtrlSe_6E4;
	uint32_t Seid_voice_6E8;
	uint32_t Seid_breath_6EC;
	uint32_t Seid_frame_6F0;
	uint32_t Seid_csaw_6F4;
	float Neck_dir_x_6F8;
	float Neck_dir_y_6FC;
	float Finger_dir_700;
	float Waist_dir_y_704;
	float Compress_y_708;
	float Target_dir_70C;
	uint32_t Goto_mode_710;
	uint32_t Mot_tbl_714[4];
	uint32_t Seq_tbl_724[4];
	float HoseiCnt_734;
	float Lose_timer_738;
	uint32_t Wander_route_73C;
	float Bomb_wait_740;
	float Sin_neck_744;
	float Route_h_748;
	float Parasite_wait_74C;
	float Jcatch_wait_750;
	float Slope_spd_754;
	float Dash_wait_758;
	uint32_t Csaw_se_id_75C;
	float Fire_timer_760;
	float Eff_timer_764;
	uint32_t Gatling_seid_768;
	float Blend_76C;
	float Hokan_770;
	float Frame_774;
	float Esc_timer_778;
	float CriAtk_wait_77C;
	float Poison_wait_780;
	float Find_timer_784;
	float Wander_timer_788;
	float Csaw_fake_timer_78C;
	float Csaw_sign_wait_790;
	float Anger_timer_794;
	float Slope_timer_798;
	float Throw_timer_79C;
	float Dash_timer_7A0;
	float WakeTimer_7A4;
	float Atk_wait_7A8;
	float Breath_se_wait_7AC;
	float Back_wait_7B0;
	float Frame_timer_7B4;
	float Csaw_se_wait_7B8;
	uint16_t Claw_hp_7BC;
	uint8_t St_set_7BE;
	uint8_t Gatling_mode_7BF;
	float Eff_wait_7C0;
	uint8_t Eff_type_7C4;
	float Atk_no_wait_7C8;
	uint8_t Atk_ck_7CC;
	uint8_t Atk_ck2_7CD;
	uint8_t Bend_rno_7CE;
	uint8_t Walk_type_7CF;
	uint8_t DownCnt_7D0;
	uint8_t EffKindIdCsaw_7D1;
	uint8_t EffKindIdEye_7D2;
	uint8_t EffKindIdWork_7D3;
	uint8_t EffKindIdArrow_7D4;
	uint8_t EffKindIdCore_7D5;
	uint8_t em10unk_7D6[2];
	float Water_eff_wait_7D8;
	float Water_eff_wait2_7DC;
	float Water_eff_wait3_7E0;
	float Bomb_se_wait_7E4;
	uint8_t Look_cnt_7E8;
	uint8_t Gatling_roll_7E9;
	uint8_t Route_type_7EA;
	uint8_t Hand_type_7EB;
	uint8_t Parasite_on_7EC;
	uint8_t Go_target_7ED;
	uint8_t Trade_ck_7EE;
	uint8_t Se_no_7EF;
	uint8_t Wep_type_7F0;
	uint8_t Wep_type2_7F1;
	uint8_t Cap_type_7F2;
	uint8_t Arrow_num_7F3;
	uint8_t Now_hide_7F4;
	uint8_t Reset_enable_7F5;
	uint8_t Pl_in_ck_7F6;
	uint8_t R11c_in_ck_7F7;
	uint8_t R11c_in_ck2_7F8;
	uint8_t Csaw_regist_7F9;
	uint8_t em10unk_7FA[2];
	float No_adj_timer_7FC;
	uint8_t Landing_ck_800;
	uint8_t Claw_rno_l_801;
	uint8_t Claw_rno_r_802;
	uint8_t em10unk_803[1];
	float Chain_se_wait_804;
	float Die_wait_808;
	uint8_t Atk_trg_80C;
	float No_dmg_timer_810;
	uint8_t Omake_set_814;
	uint8_t em10unk_815[3];
	float R180Timer_818;
	uint8_t Ganado_81C;
	uint8_t Se_tbl_81D[19];
	uint8_t JumpMode_830;
	uint8_t em10unk_831[3];
	YARARE_INFO YarareTbl_834[10];
	CAMERA Cam_A3C;
	CLOTH_INFO Cloth_B34;
	MOTION_INFO Sub_mot_B94;

	virtual void setHand(int, int) = 0;
	virtual void setWeaponFall() = 0;
	virtual int ckFindPL() = 0;
	virtual void setFindPL() = 0;
	virtual void clearFindPL() = 0;
	virtual bool ckParasite() = 0;
	virtual int ckGoto() = 0;
	virtual void setGoto(Vec*, int) = 0;
	virtual void setGotoSwitch(cEm* emSwitch, int, Vec*) = 0;
	virtual bool ckResetEnable() = 0;
	virtual void setReset() = 0;
	virtual void chgSet(char) = 0;
	virtual void setEvtMotion(int, int, int, int) = 0;
	virtual void setGondolaMotion(int, int, int, int) = 0;
	virtual void setR11DMotion(int) = 0;
	virtual void setDrill(int, int, int, int) = 0;
	virtual void setGatling(uint32_t*, int, int, int, int) = 0;
	virtual void setGatlingMode(char) = 0;
	virtual bool ckBombFire() = 0;
	virtual bool ckShiled() = 0;
	virtual bool ckBowgunFire() = 0;
	virtual void setSwitch(int) = 0;
	virtual void setLost() = 0;
	virtual void setWeapon(int, uint32_t*, char) = 0;
	virtual bool ckWeapon() = 0;
	virtual bool ckTakeAway() = 0;
	virtual void setUFOCatch(int, int) = 0;
	virtual bool ckR305BomberEnable() = 0;
};
assert_size(cEm10, 0xC64);