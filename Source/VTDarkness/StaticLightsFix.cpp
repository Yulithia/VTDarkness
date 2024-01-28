// Fill out your copyright notice in the Description page of Project Settings.


#include "StaticLightsFix.h"
import unreal_engine as ue


StaticLightsFix::StaticLightsFix()
{
	for actor in ue.editor_get_selected_actors() :
		LightmassSettings = actor.rootComponent.LightmassSettings.clone()
		LightmassSettings.bUseEmissiveForStaticLighting = True
		LightmassSettings.EmissiveBoost = 10
		actor.rootComponent.LightmassSettings = LightmassSettings
}

StaticLightsFix::~StaticLightsFix()
{
}
