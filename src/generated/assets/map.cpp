/*
 * Copyright (C) 2016 necropotame (necropotame@gmail.com)
 * 
 * This file is part of TeeUniverse.
 * 
 * TeeUniverse is free software: you can redistribute it and/or  modify
 * it under the terms of the GNU Affero General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * TeeUniverse is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with TeeUniverse.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * THIS FILE HAS BEEN GENERATED BY A SCRIPT.
 * DO NOT EDIT MANUALLY!
 *
 * Please use the script "scripts/assets/assets.py" to regenerate it.
 *
 * Why this file is generated by a script?
 * Because there is more than 10 files that follow the same format.
 * In addition, each time a new member is added, enums, getter, setters,
 * copy/transfert functions and storage structure must be updated.
 * It's too much to avoid mistakes.
 */

#include <generated/assets/map.h>
#include <shared/assets/assetssaveloadcontext.h>
#include <shared/archivefile.h>

CAsset_Map::CAsset_Map()
{
	m_CameraZoom = 1.0f;
	m_ShowEntities = true;
	m_ShowZones = true;
}

void CAsset_Map::CTuaType_0_2_0::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_Map& SysType)
{
	CAsset::CTuaType_0_2_0::Read(pLoadingContext, TuaType, SysType);

	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_BgGroup.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_BgGroup.m_Size);
		SysType.m_BgGroup.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_BgGroup[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_FgGroup.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_FgGroup.m_Size);
		SysType.m_FgGroup.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_FgGroup[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_ZoneLayer.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_ZoneLayer.m_Size);
		SysType.m_ZoneLayer.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_ZoneLayer[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_EntityLayer.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_EntityLayer.m_Size);
		SysType.m_EntityLayer.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_EntityLayer[i]);
		}
	}
	
	SysType.m_CameraPosition.x = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraPosition.m_X);
	SysType.m_CameraPosition.y = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraPosition.m_Y);
	SysType.m_CameraZoom = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraZoom);
	SysType.m_ShowEntities = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ShowEntities);
	SysType.m_ShowZones = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ShowZones);
}


void CAsset_Map::CTuaType_0_2_0::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Map& SysType, CTuaType_0_2_0& TuaType)
{
	CAsset::CTuaType_0_2_0::Write(pLoadingContext, SysType, TuaType);

	{
		TuaType.m_BgGroup.m_Size = SysType.m_BgGroup.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_BgGroup.size()];
		for(unsigned int i=0; i<SysType.m_BgGroup.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_BgGroup[i], pData[i]);
		}
		TuaType.m_BgGroup.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_BgGroup.size());
		delete[] pData;
	}
	{
		TuaType.m_FgGroup.m_Size = SysType.m_FgGroup.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_FgGroup.size()];
		for(unsigned int i=0; i<SysType.m_FgGroup.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_FgGroup[i], pData[i]);
		}
		TuaType.m_FgGroup.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_FgGroup.size());
		delete[] pData;
	}
	{
		TuaType.m_ZoneLayer.m_Size = SysType.m_ZoneLayer.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_ZoneLayer.size()];
		for(unsigned int i=0; i<SysType.m_ZoneLayer.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_ZoneLayer[i], pData[i]);
		}
		TuaType.m_ZoneLayer.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_ZoneLayer.size());
		delete[] pData;
	}
	{
		TuaType.m_EntityLayer.m_Size = SysType.m_EntityLayer.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_EntityLayer.size()];
		for(unsigned int i=0; i<SysType.m_EntityLayer.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_EntityLayer[i], pData[i]);
		}
		TuaType.m_EntityLayer.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_EntityLayer.size());
		delete[] pData;
	}
	TuaType.m_CameraPosition.m_X = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraPosition.x);
	TuaType.m_CameraPosition.m_Y = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraPosition.y);
	TuaType.m_CameraZoom = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraZoom);
	TuaType.m_ShowEntities = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ShowEntities);
	TuaType.m_ShowZones = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ShowZones);
}

void CAsset_Map::CTuaType_0_2_1::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_Map& SysType)
{
	CAsset::CTuaType_0_2_1::Read(pLoadingContext, TuaType, SysType);

	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_BgGroup.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_BgGroup.m_Size);
		SysType.m_BgGroup.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_BgGroup[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_FgGroup.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_FgGroup.m_Size);
		SysType.m_FgGroup.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_FgGroup[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_ZoneLayer.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_ZoneLayer.m_Size);
		SysType.m_ZoneLayer.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_ZoneLayer[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_EntityLayer.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_EntityLayer.m_Size);
		SysType.m_EntityLayer.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_EntityLayer[i]);
		}
	}
	
	SysType.m_CameraPosition.x = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraPosition.m_X);
	SysType.m_CameraPosition.y = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraPosition.m_Y);
	SysType.m_CameraZoom = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraZoom);
	SysType.m_ShowEntities = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ShowEntities);
	SysType.m_ShowZones = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ShowZones);
}


void CAsset_Map::CTuaType_0_2_1::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Map& SysType, CTuaType_0_2_1& TuaType)
{
	CAsset::CTuaType_0_2_1::Write(pLoadingContext, SysType, TuaType);

	{
		TuaType.m_BgGroup.m_Size = SysType.m_BgGroup.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_BgGroup.size()];
		for(unsigned int i=0; i<SysType.m_BgGroup.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_BgGroup[i], pData[i]);
		}
		TuaType.m_BgGroup.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_BgGroup.size());
		delete[] pData;
	}
	{
		TuaType.m_FgGroup.m_Size = SysType.m_FgGroup.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_FgGroup.size()];
		for(unsigned int i=0; i<SysType.m_FgGroup.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_FgGroup[i], pData[i]);
		}
		TuaType.m_FgGroup.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_FgGroup.size());
		delete[] pData;
	}
	{
		TuaType.m_ZoneLayer.m_Size = SysType.m_ZoneLayer.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_ZoneLayer.size()];
		for(unsigned int i=0; i<SysType.m_ZoneLayer.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_ZoneLayer[i], pData[i]);
		}
		TuaType.m_ZoneLayer.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_ZoneLayer.size());
		delete[] pData;
	}
	{
		TuaType.m_EntityLayer.m_Size = SysType.m_EntityLayer.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_EntityLayer.size()];
		for(unsigned int i=0; i<SysType.m_EntityLayer.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_EntityLayer[i], pData[i]);
		}
		TuaType.m_EntityLayer.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_EntityLayer.size());
		delete[] pData;
	}
	TuaType.m_CameraPosition.m_X = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraPosition.x);
	TuaType.m_CameraPosition.m_Y = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraPosition.y);
	TuaType.m_CameraZoom = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraZoom);
	TuaType.m_ShowEntities = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ShowEntities);
	TuaType.m_ShowZones = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ShowZones);
}

void CAsset_Map::CTuaType_0_2_2::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_Map& SysType)
{
	CAsset::CTuaType_0_2_2::Read(pLoadingContext, TuaType, SysType);

	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_BgGroup.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_BgGroup.m_Size);
		SysType.m_BgGroup.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_BgGroup[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_FgGroup.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_FgGroup.m_Size);
		SysType.m_FgGroup.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_FgGroup[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_ZoneLayer.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_ZoneLayer.m_Size);
		SysType.m_ZoneLayer.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_ZoneLayer[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_EntityLayer.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_EntityLayer.m_Size);
		SysType.m_EntityLayer.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_EntityLayer[i]);
		}
	}
	
	SysType.m_CameraPosition.x = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraPosition.m_X);
	SysType.m_CameraPosition.y = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraPosition.m_Y);
	SysType.m_CameraZoom = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraZoom);
	SysType.m_ShowEntities = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ShowEntities);
	SysType.m_ShowZones = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ShowZones);
}


void CAsset_Map::CTuaType_0_2_2::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Map& SysType, CTuaType_0_2_2& TuaType)
{
	CAsset::CTuaType_0_2_2::Write(pLoadingContext, SysType, TuaType);

	{
		TuaType.m_BgGroup.m_Size = SysType.m_BgGroup.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_BgGroup.size()];
		for(unsigned int i=0; i<SysType.m_BgGroup.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_BgGroup[i], pData[i]);
		}
		TuaType.m_BgGroup.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_BgGroup.size());
		delete[] pData;
	}
	{
		TuaType.m_FgGroup.m_Size = SysType.m_FgGroup.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_FgGroup.size()];
		for(unsigned int i=0; i<SysType.m_FgGroup.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_FgGroup[i], pData[i]);
		}
		TuaType.m_FgGroup.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_FgGroup.size());
		delete[] pData;
	}
	{
		TuaType.m_ZoneLayer.m_Size = SysType.m_ZoneLayer.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_ZoneLayer.size()];
		for(unsigned int i=0; i<SysType.m_ZoneLayer.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_ZoneLayer[i], pData[i]);
		}
		TuaType.m_ZoneLayer.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_ZoneLayer.size());
		delete[] pData;
	}
	{
		TuaType.m_EntityLayer.m_Size = SysType.m_EntityLayer.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_EntityLayer.size()];
		for(unsigned int i=0; i<SysType.m_EntityLayer.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_EntityLayer[i], pData[i]);
		}
		TuaType.m_EntityLayer.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_EntityLayer.size());
		delete[] pData;
	}
	TuaType.m_CameraPosition.m_X = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraPosition.x);
	TuaType.m_CameraPosition.m_Y = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraPosition.y);
	TuaType.m_CameraZoom = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraZoom);
	TuaType.m_ShowEntities = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ShowEntities);
	TuaType.m_ShowZones = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ShowZones);
}

void CAsset_Map::CTuaType_0_2_3::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_3& TuaType, CAsset_Map& SysType)
{
	CAsset::CTuaType_0_2_3::Read(pLoadingContext, TuaType, SysType);

	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_BgGroup.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_BgGroup.m_Size);
		SysType.m_BgGroup.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_BgGroup[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_FgGroup.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_FgGroup.m_Size);
		SysType.m_FgGroup.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_FgGroup[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_ZoneLayer.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_ZoneLayer.m_Size);
		SysType.m_ZoneLayer.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_ZoneLayer[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_EntityLayer.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_EntityLayer.m_Size);
		SysType.m_EntityLayer.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_EntityLayer[i]);
		}
	}
	
	SysType.m_CameraPosition.x = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraPosition.m_X);
	SysType.m_CameraPosition.y = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraPosition.m_Y);
	SysType.m_CameraZoom = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraZoom);
	SysType.m_ShowEntities = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ShowEntities);
	SysType.m_ShowZones = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ShowZones);
}


void CAsset_Map::CTuaType_0_2_3::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Map& SysType, CTuaType_0_2_3& TuaType)
{
	CAsset::CTuaType_0_2_3::Write(pLoadingContext, SysType, TuaType);

	{
		TuaType.m_BgGroup.m_Size = SysType.m_BgGroup.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_BgGroup.size()];
		for(unsigned int i=0; i<SysType.m_BgGroup.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_BgGroup[i], pData[i]);
		}
		TuaType.m_BgGroup.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_BgGroup.size());
		delete[] pData;
	}
	{
		TuaType.m_FgGroup.m_Size = SysType.m_FgGroup.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_FgGroup.size()];
		for(unsigned int i=0; i<SysType.m_FgGroup.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_FgGroup[i], pData[i]);
		}
		TuaType.m_FgGroup.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_FgGroup.size());
		delete[] pData;
	}
	{
		TuaType.m_ZoneLayer.m_Size = SysType.m_ZoneLayer.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_ZoneLayer.size()];
		for(unsigned int i=0; i<SysType.m_ZoneLayer.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_ZoneLayer[i], pData[i]);
		}
		TuaType.m_ZoneLayer.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_ZoneLayer.size());
		delete[] pData;
	}
	{
		TuaType.m_EntityLayer.m_Size = SysType.m_EntityLayer.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_EntityLayer.size()];
		for(unsigned int i=0; i<SysType.m_EntityLayer.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_EntityLayer[i], pData[i]);
		}
		TuaType.m_EntityLayer.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_EntityLayer.size());
		delete[] pData;
	}
	TuaType.m_CameraPosition.m_X = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraPosition.x);
	TuaType.m_CameraPosition.m_Y = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraPosition.y);
	TuaType.m_CameraZoom = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraZoom);
	TuaType.m_ShowEntities = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ShowEntities);
	TuaType.m_ShowZones = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ShowZones);
}

void CAsset_Map::CTuaType_0_2_4::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_4& TuaType, CAsset_Map& SysType)
{
	CAsset::CTuaType_0_2_4::Read(pLoadingContext, TuaType, SysType);

	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_BgGroup.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_BgGroup.m_Size);
		SysType.m_BgGroup.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_BgGroup[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_FgGroup.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_FgGroup.m_Size);
		SysType.m_FgGroup.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_FgGroup[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_ZoneLayer.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_ZoneLayer.m_Size);
		SysType.m_ZoneLayer.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_ZoneLayer[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_EntityLayer.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_EntityLayer.m_Size);
		SysType.m_EntityLayer.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_EntityLayer[i]);
		}
	}
	
	SysType.m_CameraPosition.x = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraPosition.m_X);
	SysType.m_CameraPosition.y = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraPosition.m_Y);
	SysType.m_CameraZoom = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraZoom);
	SysType.m_ShowEntities = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ShowEntities);
	SysType.m_ShowZones = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ShowZones);
}


void CAsset_Map::CTuaType_0_2_4::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Map& SysType, CTuaType_0_2_4& TuaType)
{
	CAsset::CTuaType_0_2_4::Write(pLoadingContext, SysType, TuaType);

	{
		TuaType.m_BgGroup.m_Size = SysType.m_BgGroup.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_BgGroup.size()];
		for(unsigned int i=0; i<SysType.m_BgGroup.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_BgGroup[i], pData[i]);
		}
		TuaType.m_BgGroup.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_BgGroup.size());
		delete[] pData;
	}
	{
		TuaType.m_FgGroup.m_Size = SysType.m_FgGroup.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_FgGroup.size()];
		for(unsigned int i=0; i<SysType.m_FgGroup.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_FgGroup[i], pData[i]);
		}
		TuaType.m_FgGroup.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_FgGroup.size());
		delete[] pData;
	}
	{
		TuaType.m_ZoneLayer.m_Size = SysType.m_ZoneLayer.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_ZoneLayer.size()];
		for(unsigned int i=0; i<SysType.m_ZoneLayer.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_ZoneLayer[i], pData[i]);
		}
		TuaType.m_ZoneLayer.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_ZoneLayer.size());
		delete[] pData;
	}
	{
		TuaType.m_EntityLayer.m_Size = SysType.m_EntityLayer.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_EntityLayer.size()];
		for(unsigned int i=0; i<SysType.m_EntityLayer.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_EntityLayer[i], pData[i]);
		}
		TuaType.m_EntityLayer.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_EntityLayer.size());
		delete[] pData;
	}
	TuaType.m_CameraPosition.m_X = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraPosition.x);
	TuaType.m_CameraPosition.m_Y = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraPosition.y);
	TuaType.m_CameraZoom = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraZoom);
	TuaType.m_ShowEntities = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ShowEntities);
	TuaType.m_ShowZones = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ShowZones);
}

void CAsset_Map::CTuaType_0_3_0::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_3_0& TuaType, CAsset_Map& SysType)
{
	CAsset::CTuaType_0_3_0::Read(pLoadingContext, TuaType, SysType);

	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_BgGroup.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_BgGroup.m_Size);
		SysType.m_BgGroup.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_BgGroup[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_FgGroup.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_FgGroup.m_Size);
		SysType.m_FgGroup.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_FgGroup[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_ZoneLayer.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_ZoneLayer.m_Size);
		SysType.m_ZoneLayer.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_ZoneLayer[i]);
		}
	}
	
	{
		const CAssetPath::CTuaType* pData = (const CAssetPath::CTuaType*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_EntityLayer.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_EntityLayer.m_Size);
		SysType.m_EntityLayer.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			pLoadingContext->ReadAssetPath(pData[i], SysType.m_EntityLayer[i]);
		}
	}
	
	SysType.m_CameraPosition.x = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraPosition.m_X);
	SysType.m_CameraPosition.y = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraPosition.m_Y);
	SysType.m_CameraZoom = pLoadingContext->ArchiveFile()->ReadFloat(TuaType.m_CameraZoom);
	SysType.m_ShowEntities = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ShowEntities);
	SysType.m_ShowZones = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ShowZones);
}


void CAsset_Map::CTuaType_0_3_0::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Map& SysType, CTuaType_0_3_0& TuaType)
{
	CAsset::CTuaType_0_3_0::Write(pLoadingContext, SysType, TuaType);

	{
		TuaType.m_BgGroup.m_Size = SysType.m_BgGroup.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_BgGroup.size()];
		for(unsigned int i=0; i<SysType.m_BgGroup.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_BgGroup[i], pData[i]);
		}
		TuaType.m_BgGroup.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_BgGroup.size());
		delete[] pData;
	}
	{
		TuaType.m_FgGroup.m_Size = SysType.m_FgGroup.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_FgGroup.size()];
		for(unsigned int i=0; i<SysType.m_FgGroup.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_FgGroup[i], pData[i]);
		}
		TuaType.m_FgGroup.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_FgGroup.size());
		delete[] pData;
	}
	{
		TuaType.m_ZoneLayer.m_Size = SysType.m_ZoneLayer.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_ZoneLayer.size()];
		for(unsigned int i=0; i<SysType.m_ZoneLayer.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_ZoneLayer[i], pData[i]);
		}
		TuaType.m_ZoneLayer.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_ZoneLayer.size());
		delete[] pData;
	}
	{
		TuaType.m_EntityLayer.m_Size = SysType.m_EntityLayer.size();
		CAssetPath::CTuaType* pData = new CAssetPath::CTuaType[SysType.m_EntityLayer.size()];
		for(unsigned int i=0; i<SysType.m_EntityLayer.size(); i++)
		{
			pLoadingContext->WriteAssetPath(SysType.m_EntityLayer[i], pData[i]);
		}
		TuaType.m_EntityLayer.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAssetPath::CTuaType)*SysType.m_EntityLayer.size());
		delete[] pData;
	}
	TuaType.m_CameraPosition.m_X = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraPosition.x);
	TuaType.m_CameraPosition.m_Y = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraPosition.y);
	TuaType.m_CameraZoom = pLoadingContext->ArchiveFile()->WriteFloat(SysType.m_CameraZoom);
	TuaType.m_ShowEntities = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ShowEntities);
	TuaType.m_ShowZones = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ShowZones);
}

template<>
int CAsset_Map::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const
{
	switch(ValueType)
	{
		case BGGROUP_ARRAYSIZE:
			return GetBgGroupArraySize();
		case FGGROUP_ARRAYSIZE:
			return GetFgGroupArraySize();
		case ZONELAYER_ARRAYSIZE:
			return GetZoneLayerArraySize();
		case ENTITYLAYER_ARRAYSIZE:
			return GetEntityLayerArraySize();
	}
	return CAsset::GetValue<int>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Map::SetValue(int ValueType, const CSubPath& SubPath, int Value)
{
	switch(ValueType)
	{
		case BGGROUP_ARRAYSIZE:
			SetBgGroupArraySize(Value);
			return true;
		case FGGROUP_ARRAYSIZE:
			SetFgGroupArraySize(Value);
			return true;
		case ZONELAYER_ARRAYSIZE:
			SetZoneLayerArraySize(Value);
			return true;
		case ENTITYLAYER_ARRAYSIZE:
			SetEntityLayerArraySize(Value);
			return true;
	}
	return CAsset::SetValue<int>(ValueType, SubPath, Value);
}

template<>
bool CAsset_Map::GetValue(int ValueType, const CSubPath& SubPath, bool DefaultValue) const
{
	switch(ValueType)
	{
		case SHOWENTITIES:
			return GetShowEntities();
		case SHOWZONES:
			return GetShowZones();
	}
	return CAsset::GetValue<bool>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Map::SetValue(int ValueType, const CSubPath& SubPath, bool Value)
{
	switch(ValueType)
	{
		case SHOWENTITIES:
			SetShowEntities(Value);
			return true;
		case SHOWZONES:
			SetShowZones(Value);
			return true;
	}
	return CAsset::SetValue<bool>(ValueType, SubPath, Value);
}

template<>
float CAsset_Map::GetValue(int ValueType, const CSubPath& SubPath, float DefaultValue) const
{
	switch(ValueType)
	{
		case CAMERAPOSITION_X:
			return GetCameraPositionX();
		case CAMERAPOSITION_Y:
			return GetCameraPositionY();
		case CAMERAZOOM:
			return GetCameraZoom();
	}
	return CAsset::GetValue<float>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Map::SetValue(int ValueType, const CSubPath& SubPath, float Value)
{
	switch(ValueType)
	{
		case CAMERAPOSITION_X:
			SetCameraPositionX(Value);
			return true;
		case CAMERAPOSITION_Y:
			SetCameraPositionY(Value);
			return true;
		case CAMERAZOOM:
			SetCameraZoom(Value);
			return true;
	}
	return CAsset::SetValue<float>(ValueType, SubPath, Value);
}

template<>
vec2 CAsset_Map::GetValue(int ValueType, const CSubPath& SubPath, vec2 DefaultValue) const
{
	switch(ValueType)
	{
		case CAMERAPOSITION:
			return GetCameraPosition();
	}
	return CAsset::GetValue<vec2>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Map::SetValue(int ValueType, const CSubPath& SubPath, vec2 Value)
{
	switch(ValueType)
	{
		case CAMERAPOSITION:
			SetCameraPosition(Value);
			return true;
	}
	return CAsset::SetValue<vec2>(ValueType, SubPath, Value);
}

template<>
CAssetPath CAsset_Map::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const
{
	switch(ValueType)
	{
		case BGGROUP:
			return GetBgGroup(SubPath);
		case FGGROUP:
			return GetFgGroup(SubPath);
		case ZONELAYER:
			return GetZoneLayer(SubPath);
		case ENTITYLAYER:
			return GetEntityLayer(SubPath);
	}
	return CAsset::GetValue<CAssetPath>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Map::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value)
{
	switch(ValueType)
	{
		case BGGROUP:
			SetBgGroup(SubPath, Value);
			return true;
		case FGGROUP:
			SetFgGroup(SubPath, Value);
			return true;
		case ZONELAYER:
			SetZoneLayer(SubPath, Value);
			return true;
		case ENTITYLAYER:
			SetEntityLayer(SubPath, Value);
			return true;
	}
	return CAsset::SetValue<CAssetPath>(ValueType, SubPath, Value);
}

int CAsset_Map::AddSubItem(int Type, const CSubPath& SubPath)
{
	switch(Type)
	{
		case TYPE_BGGROUP:
			return AddBgGroup();
		case TYPE_FGGROUP:
			return AddFgGroup();
		case TYPE_ZONELAYER:
			return AddZoneLayer();
		case TYPE_ENTITYLAYER:
			return AddEntityLayer();
	}
	return -1;
}

int CAsset_Map::AddSubItemAt(int Type, const CSubPath& SubPath, int Index)
{
	switch(Type)
	{
		case TYPE_BGGROUP:
			AddAtBgGroup(Index);
			return Index;
		case TYPE_FGGROUP:
			AddAtFgGroup(Index);
			return Index;
		case TYPE_ZONELAYER:
			AddAtZoneLayer(Index);
			return Index;
		case TYPE_ENTITYLAYER:
			AddAtEntityLayer(Index);
			return Index;
	}
	return -1;
}

void CAsset_Map::DeleteSubItem(const CSubPath& SubPath)
{
	switch(SubPath.GetType())
	{
		case TYPE_BGGROUP:
			DeleteBgGroup(SubPath);
			break;
		case TYPE_FGGROUP:
			DeleteFgGroup(SubPath);
			break;
		case TYPE_ZONELAYER:
			DeleteZoneLayer(SubPath);
			break;
		case TYPE_ENTITYLAYER:
			DeleteEntityLayer(SubPath);
			break;
	}
}

void CAsset_Map::RelMoveSubItem(CSubPath& SubPath, int RelMove)
{
	switch(SubPath.GetType())
	{
		case TYPE_BGGROUP:
			RelMoveBgGroup(SubPath, RelMove);
			break;
		case TYPE_FGGROUP:
			RelMoveFgGroup(SubPath, RelMove);
			break;
		case TYPE_ZONELAYER:
			RelMoveZoneLayer(SubPath, RelMove);
			break;
		case TYPE_ENTITYLAYER:
			RelMoveEntityLayer(SubPath, RelMove);
			break;
	}
}


