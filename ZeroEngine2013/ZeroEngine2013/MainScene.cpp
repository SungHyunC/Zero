#include "stdafx.h"
#include "MainScene.h"
#include <iostream>

MainScene::MainScene()
{
	enemy = new ZeroSprite("Resouces/Image/shoot.png");
	enemy->SetPos(100, 100);
	button = new ZeroSprite("Resouces/Image/button.png");
	button->SetPos(500, 500);
	
}


MainScene::~MainScene()
{
}

void MainScene::Update(float eTime){
	ZeroIScene::Update(eTime);
	//enemy->AddPos(100 * eTime,100 * eTime);
	//enemy->AddScale(1);
	//enemy->AddRot(10);
	if (ZeroInputMgr->GetKey(VK_LBUTTON) == INPUTMGR_KEYDOWN){
		if (button->IsOverlapped(ZeroInputMgr->GetClientPoint())){
			ZeroSceneMgr->ChangeScene(new GameScene());
			return;
			//씬 변환이후에 꼭 리턴
		}
	}
}

void MainScene::Render(){
	ZeroIScene::Render();
	enemy->Render();
	button->Render();
}