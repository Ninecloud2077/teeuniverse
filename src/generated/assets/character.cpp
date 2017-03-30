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

#include <generated/assets/character.h>
#include <shared/assets/assetssaveloadcontext.h>
#include <shared/archivefile.h>


void CAsset_Character::CPart::CTuaType_0_2_0::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_Character::CPart& SysType)
{
	SysType.m_Name = pLoadingContext->ArchiveFile()->GetString(TuaType.m_Name);
	pLoadingContext->ReadAssetPath(TuaType.m_DefaultPath, SysType.m_DefaultPath);
}


void CAsset_Character::CTuaType_0_2_0::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_Character& SysType)
{
	CAsset::CTuaType_0_2_0::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_IdlePath, SysType.m_IdlePath);
	pLoadingContext->ReadAssetPath(TuaType.m_WalkPath, SysType.m_WalkPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ControlledJumpPath, SysType.m_ControlledJumpPath);
	pLoadingContext->ReadAssetPath(TuaType.m_UncontrolledJumpPath, SysType.m_UncontrolledJumpPath);
	{
		const CAsset_Character::CPart::CTuaType_0_2_0* pData = (const CAsset_Character::CPart::CTuaType_0_2_0*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_Part.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Part.m_Size);
		SysType.m_Part.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			CAsset_Character::CPart::CTuaType_0_2_0::Read(pLoadingContext, pData[i], SysType.m_Part[i]);
		}
	}
	
}


void CAsset_Character::CPart::CTuaType_0_2_0::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Character::CPart& SysType, CTuaType_0_2_0& TuaType)
{
	TuaType.m_Name = pLoadingContext->ArchiveFile()->AddString(SysType.m_Name.buffer());
	pLoadingContext->WriteAssetPath(SysType.m_DefaultPath, TuaType.m_DefaultPath);
}

void CAsset_Character::CTuaType_0_2_0::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Character& SysType, CTuaType_0_2_0& TuaType)
{
	CAsset::CTuaType_0_2_0::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_IdlePath, TuaType.m_IdlePath);
	pLoadingContext->WriteAssetPath(SysType.m_WalkPath, TuaType.m_WalkPath);
	pLoadingContext->WriteAssetPath(SysType.m_ControlledJumpPath, TuaType.m_ControlledJumpPath);
	pLoadingContext->WriteAssetPath(SysType.m_UncontrolledJumpPath, TuaType.m_UncontrolledJumpPath);
	{
		TuaType.m_Part.m_Size = SysType.m_Part.size();
		CAsset_Character::CPart::CTuaType_0_2_0* pData = new CAsset_Character::CPart::CTuaType_0_2_0[SysType.m_Part.size()];
		for(unsigned int i=0; i<SysType.m_Part.size(); i++)
		{
			CAsset_Character::CPart::CTuaType_0_2_0::Write(pLoadingContext, SysType.m_Part[i], pData[i]);
		}
		TuaType.m_Part.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAsset_Character::CPart::CTuaType_0_2_0)*SysType.m_Part.size());
		delete[] pData;
	}
}

void CAsset_Character::CPart::CTuaType_0_2_1::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_Character::CPart& SysType)
{
	SysType.m_Name = pLoadingContext->ArchiveFile()->GetString(TuaType.m_Name);
	pLoadingContext->ReadAssetPath(TuaType.m_DefaultPath, SysType.m_DefaultPath);
}


void CAsset_Character::CTuaType_0_2_1::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_Character& SysType)
{
	CAsset::CTuaType_0_2_1::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_IdlePath, SysType.m_IdlePath);
	pLoadingContext->ReadAssetPath(TuaType.m_WalkPath, SysType.m_WalkPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ControlledJumpPath, SysType.m_ControlledJumpPath);
	pLoadingContext->ReadAssetPath(TuaType.m_UncontrolledJumpPath, SysType.m_UncontrolledJumpPath);
	{
		const CAsset_Character::CPart::CTuaType_0_2_1* pData = (const CAsset_Character::CPart::CTuaType_0_2_1*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_Part.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Part.m_Size);
		SysType.m_Part.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			CAsset_Character::CPart::CTuaType_0_2_1::Read(pLoadingContext, pData[i], SysType.m_Part[i]);
		}
	}
	
}


void CAsset_Character::CPart::CTuaType_0_2_1::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Character::CPart& SysType, CTuaType_0_2_1& TuaType)
{
	TuaType.m_Name = pLoadingContext->ArchiveFile()->AddString(SysType.m_Name.buffer());
	pLoadingContext->WriteAssetPath(SysType.m_DefaultPath, TuaType.m_DefaultPath);
}

void CAsset_Character::CTuaType_0_2_1::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Character& SysType, CTuaType_0_2_1& TuaType)
{
	CAsset::CTuaType_0_2_1::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_IdlePath, TuaType.m_IdlePath);
	pLoadingContext->WriteAssetPath(SysType.m_WalkPath, TuaType.m_WalkPath);
	pLoadingContext->WriteAssetPath(SysType.m_ControlledJumpPath, TuaType.m_ControlledJumpPath);
	pLoadingContext->WriteAssetPath(SysType.m_UncontrolledJumpPath, TuaType.m_UncontrolledJumpPath);
	{
		TuaType.m_Part.m_Size = SysType.m_Part.size();
		CAsset_Character::CPart::CTuaType_0_2_1* pData = new CAsset_Character::CPart::CTuaType_0_2_1[SysType.m_Part.size()];
		for(unsigned int i=0; i<SysType.m_Part.size(); i++)
		{
			CAsset_Character::CPart::CTuaType_0_2_1::Write(pLoadingContext, SysType.m_Part[i], pData[i]);
		}
		TuaType.m_Part.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAsset_Character::CPart::CTuaType_0_2_1)*SysType.m_Part.size());
		delete[] pData;
	}
}

void CAsset_Character::CPart::CTuaType_0_2_2::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_Character::CPart& SysType)
{
	SysType.m_Name = pLoadingContext->ArchiveFile()->GetString(TuaType.m_Name);
	pLoadingContext->ReadAssetPath(TuaType.m_DefaultPath, SysType.m_DefaultPath);
}


void CAsset_Character::CTuaType_0_2_2::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_Character& SysType)
{
	CAsset::CTuaType_0_2_2::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_IdlePath, SysType.m_IdlePath);
	pLoadingContext->ReadAssetPath(TuaType.m_WalkPath, SysType.m_WalkPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ControlledJumpPath, SysType.m_ControlledJumpPath);
	pLoadingContext->ReadAssetPath(TuaType.m_UncontrolledJumpPath, SysType.m_UncontrolledJumpPath);
	{
		const CAsset_Character::CPart::CTuaType_0_2_2* pData = (const CAsset_Character::CPart::CTuaType_0_2_2*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_Part.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Part.m_Size);
		SysType.m_Part.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			CAsset_Character::CPart::CTuaType_0_2_2::Read(pLoadingContext, pData[i], SysType.m_Part[i]);
		}
	}
	
}


void CAsset_Character::CPart::CTuaType_0_2_2::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Character::CPart& SysType, CTuaType_0_2_2& TuaType)
{
	TuaType.m_Name = pLoadingContext->ArchiveFile()->AddString(SysType.m_Name.buffer());
	pLoadingContext->WriteAssetPath(SysType.m_DefaultPath, TuaType.m_DefaultPath);
}

void CAsset_Character::CTuaType_0_2_2::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Character& SysType, CTuaType_0_2_2& TuaType)
{
	CAsset::CTuaType_0_2_2::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_IdlePath, TuaType.m_IdlePath);
	pLoadingContext->WriteAssetPath(SysType.m_WalkPath, TuaType.m_WalkPath);
	pLoadingContext->WriteAssetPath(SysType.m_ControlledJumpPath, TuaType.m_ControlledJumpPath);
	pLoadingContext->WriteAssetPath(SysType.m_UncontrolledJumpPath, TuaType.m_UncontrolledJumpPath);
	{
		TuaType.m_Part.m_Size = SysType.m_Part.size();
		CAsset_Character::CPart::CTuaType_0_2_2* pData = new CAsset_Character::CPart::CTuaType_0_2_2[SysType.m_Part.size()];
		for(unsigned int i=0; i<SysType.m_Part.size(); i++)
		{
			CAsset_Character::CPart::CTuaType_0_2_2::Write(pLoadingContext, SysType.m_Part[i], pData[i]);
		}
		TuaType.m_Part.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAsset_Character::CPart::CTuaType_0_2_2)*SysType.m_Part.size());
		delete[] pData;
	}
}

void CAsset_Character::CPart::CTuaType_0_2_3::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_3& TuaType, CAsset_Character::CPart& SysType)
{
	SysType.m_Name = pLoadingContext->ArchiveFile()->GetString(TuaType.m_Name);
	pLoadingContext->ReadAssetPath(TuaType.m_DefaultPath, SysType.m_DefaultPath);
}


void CAsset_Character::CTuaType_0_2_3::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_3& TuaType, CAsset_Character& SysType)
{
	CAsset::CTuaType_0_2_3::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_IdlePath, SysType.m_IdlePath);
	pLoadingContext->ReadAssetPath(TuaType.m_WalkPath, SysType.m_WalkPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ControlledJumpPath, SysType.m_ControlledJumpPath);
	pLoadingContext->ReadAssetPath(TuaType.m_UncontrolledJumpPath, SysType.m_UncontrolledJumpPath);
	{
		const CAsset_Character::CPart::CTuaType_0_2_3* pData = (const CAsset_Character::CPart::CTuaType_0_2_3*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_Part.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Part.m_Size);
		SysType.m_Part.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			CAsset_Character::CPart::CTuaType_0_2_3::Read(pLoadingContext, pData[i], SysType.m_Part[i]);
		}
	}
	
}


void CAsset_Character::CPart::CTuaType_0_2_3::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Character::CPart& SysType, CTuaType_0_2_3& TuaType)
{
	TuaType.m_Name = pLoadingContext->ArchiveFile()->AddString(SysType.m_Name.buffer());
	pLoadingContext->WriteAssetPath(SysType.m_DefaultPath, TuaType.m_DefaultPath);
}

void CAsset_Character::CTuaType_0_2_3::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Character& SysType, CTuaType_0_2_3& TuaType)
{
	CAsset::CTuaType_0_2_3::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_IdlePath, TuaType.m_IdlePath);
	pLoadingContext->WriteAssetPath(SysType.m_WalkPath, TuaType.m_WalkPath);
	pLoadingContext->WriteAssetPath(SysType.m_ControlledJumpPath, TuaType.m_ControlledJumpPath);
	pLoadingContext->WriteAssetPath(SysType.m_UncontrolledJumpPath, TuaType.m_UncontrolledJumpPath);
	{
		TuaType.m_Part.m_Size = SysType.m_Part.size();
		CAsset_Character::CPart::CTuaType_0_2_3* pData = new CAsset_Character::CPart::CTuaType_0_2_3[SysType.m_Part.size()];
		for(unsigned int i=0; i<SysType.m_Part.size(); i++)
		{
			CAsset_Character::CPart::CTuaType_0_2_3::Write(pLoadingContext, SysType.m_Part[i], pData[i]);
		}
		TuaType.m_Part.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAsset_Character::CPart::CTuaType_0_2_3)*SysType.m_Part.size());
		delete[] pData;
	}
}

void CAsset_Character::CPart::CTuaType_0_2_4::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_4& TuaType, CAsset_Character::CPart& SysType)
{
	SysType.m_Name = pLoadingContext->ArchiveFile()->GetString(TuaType.m_Name);
	pLoadingContext->ReadAssetPath(TuaType.m_DefaultPath, SysType.m_DefaultPath);
}


void CAsset_Character::CTuaType_0_2_4::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_4& TuaType, CAsset_Character& SysType)
{
	CAsset::CTuaType_0_2_4::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_IdlePath, SysType.m_IdlePath);
	pLoadingContext->ReadAssetPath(TuaType.m_WalkPath, SysType.m_WalkPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ControlledJumpPath, SysType.m_ControlledJumpPath);
	pLoadingContext->ReadAssetPath(TuaType.m_UncontrolledJumpPath, SysType.m_UncontrolledJumpPath);
	{
		const CAsset_Character::CPart::CTuaType_0_2_4* pData = (const CAsset_Character::CPart::CTuaType_0_2_4*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_Part.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Part.m_Size);
		SysType.m_Part.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			CAsset_Character::CPart::CTuaType_0_2_4::Read(pLoadingContext, pData[i], SysType.m_Part[i]);
		}
	}
	
}


void CAsset_Character::CPart::CTuaType_0_2_4::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Character::CPart& SysType, CTuaType_0_2_4& TuaType)
{
	TuaType.m_Name = pLoadingContext->ArchiveFile()->AddString(SysType.m_Name.buffer());
	pLoadingContext->WriteAssetPath(SysType.m_DefaultPath, TuaType.m_DefaultPath);
}

void CAsset_Character::CTuaType_0_2_4::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Character& SysType, CTuaType_0_2_4& TuaType)
{
	CAsset::CTuaType_0_2_4::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_IdlePath, TuaType.m_IdlePath);
	pLoadingContext->WriteAssetPath(SysType.m_WalkPath, TuaType.m_WalkPath);
	pLoadingContext->WriteAssetPath(SysType.m_ControlledJumpPath, TuaType.m_ControlledJumpPath);
	pLoadingContext->WriteAssetPath(SysType.m_UncontrolledJumpPath, TuaType.m_UncontrolledJumpPath);
	{
		TuaType.m_Part.m_Size = SysType.m_Part.size();
		CAsset_Character::CPart::CTuaType_0_2_4* pData = new CAsset_Character::CPart::CTuaType_0_2_4[SysType.m_Part.size()];
		for(unsigned int i=0; i<SysType.m_Part.size(); i++)
		{
			CAsset_Character::CPart::CTuaType_0_2_4::Write(pLoadingContext, SysType.m_Part[i], pData[i]);
		}
		TuaType.m_Part.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAsset_Character::CPart::CTuaType_0_2_4)*SysType.m_Part.size());
		delete[] pData;
	}
}

void CAsset_Character::CPart::CTuaType_0_3_0::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_3_0& TuaType, CAsset_Character::CPart& SysType)
{
	SysType.m_Name = pLoadingContext->ArchiveFile()->GetString(TuaType.m_Name);
	pLoadingContext->ReadAssetPath(TuaType.m_DefaultPath, SysType.m_DefaultPath);
}


void CAsset_Character::CTuaType_0_3_0::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_3_0& TuaType, CAsset_Character& SysType)
{
	CAsset::CTuaType_0_3_0::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_IdlePath, SysType.m_IdlePath);
	pLoadingContext->ReadAssetPath(TuaType.m_WalkPath, SysType.m_WalkPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ControlledJumpPath, SysType.m_ControlledJumpPath);
	pLoadingContext->ReadAssetPath(TuaType.m_UncontrolledJumpPath, SysType.m_UncontrolledJumpPath);
	{
		const CAsset_Character::CPart::CTuaType_0_3_0* pData = (const CAsset_Character::CPart::CTuaType_0_3_0*) pLoadingContext->ArchiveFile()->GetData(TuaType.m_Part.m_Data);
		uint32 Size = pLoadingContext->ArchiveFile()->ReadUInt32(TuaType.m_Part.m_Size);
		SysType.m_Part.resize(Size);
		for(uint32 i=0; i<Size; i++)
		{
			CAsset_Character::CPart::CTuaType_0_3_0::Read(pLoadingContext, pData[i], SysType.m_Part[i]);
		}
	}
	
}


void CAsset_Character::CPart::CTuaType_0_3_0::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Character::CPart& SysType, CTuaType_0_3_0& TuaType)
{
	TuaType.m_Name = pLoadingContext->ArchiveFile()->AddString(SysType.m_Name.buffer());
	pLoadingContext->WriteAssetPath(SysType.m_DefaultPath, TuaType.m_DefaultPath);
}

void CAsset_Character::CTuaType_0_3_0::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_Character& SysType, CTuaType_0_3_0& TuaType)
{
	CAsset::CTuaType_0_3_0::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_IdlePath, TuaType.m_IdlePath);
	pLoadingContext->WriteAssetPath(SysType.m_WalkPath, TuaType.m_WalkPath);
	pLoadingContext->WriteAssetPath(SysType.m_ControlledJumpPath, TuaType.m_ControlledJumpPath);
	pLoadingContext->WriteAssetPath(SysType.m_UncontrolledJumpPath, TuaType.m_UncontrolledJumpPath);
	{
		TuaType.m_Part.m_Size = SysType.m_Part.size();
		CAsset_Character::CPart::CTuaType_0_3_0* pData = new CAsset_Character::CPart::CTuaType_0_3_0[SysType.m_Part.size()];
		for(unsigned int i=0; i<SysType.m_Part.size(); i++)
		{
			CAsset_Character::CPart::CTuaType_0_3_0::Write(pLoadingContext, SysType.m_Part[i], pData[i]);
		}
		TuaType.m_Part.m_Data = pLoadingContext->ArchiveFile()->AddData((uint8*) pData, sizeof(CAsset_Character::CPart::CTuaType_0_3_0)*SysType.m_Part.size());
		delete[] pData;
	}
}

template<>
int CAsset_Character::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const
{
	switch(ValueType)
	{
		case PART_ARRAYSIZE:
			return GetPartArraySize();
	}
	return CAsset::GetValue<int>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Character::SetValue(int ValueType, const CSubPath& SubPath, int Value)
{
	switch(ValueType)
	{
		case PART_ARRAYSIZE:
			SetPartArraySize(Value);
			return true;
	}
	return CAsset::SetValue<int>(ValueType, SubPath, Value);
}

template<>
const char* CAsset_Character::GetValue(int ValueType, const CSubPath& SubPath, const char* DefaultValue) const
{
	switch(ValueType)
	{
		case PART_NAME:
			return GetPartName(SubPath);
	}
	return CAsset::GetValue<const char*>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Character::SetValue(int ValueType, const CSubPath& SubPath, const char* Value)
{
	switch(ValueType)
	{
		case PART_NAME:
			SetPartName(SubPath, Value);
			return true;
	}
	return CAsset::SetValue<const char*>(ValueType, SubPath, Value);
}

template<>
CAssetPath CAsset_Character::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const
{
	switch(ValueType)
	{
		case IDLEPATH:
			return GetIdlePath();
		case WALKPATH:
			return GetWalkPath();
		case CONTROLLEDJUMPPATH:
			return GetControlledJumpPath();
		case UNCONTROLLEDJUMPPATH:
			return GetUncontrolledJumpPath();
		case PART_DEFAULTPATH:
			return GetPartDefaultPath(SubPath);
	}
	return CAsset::GetValue<CAssetPath>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_Character::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value)
{
	switch(ValueType)
	{
		case IDLEPATH:
			SetIdlePath(Value);
			return true;
		case WALKPATH:
			SetWalkPath(Value);
			return true;
		case CONTROLLEDJUMPPATH:
			SetControlledJumpPath(Value);
			return true;
		case UNCONTROLLEDJUMPPATH:
			SetUncontrolledJumpPath(Value);
			return true;
		case PART_DEFAULTPATH:
			SetPartDefaultPath(SubPath, Value);
			return true;
	}
	return CAsset::SetValue<CAssetPath>(ValueType, SubPath, Value);
}

int CAsset_Character::AddSubItem(int Type, const CSubPath& SubPath)
{
	switch(Type)
	{
		case TYPE_PART:
			return AddPart();
	}
	return -1;
}

int CAsset_Character::AddSubItemAt(int Type, const CSubPath& SubPath, int Index)
{
	switch(Type)
	{
		case TYPE_PART:
			AddAtPart(Index);
			return Index;
	}
	return -1;
}

void CAsset_Character::DeleteSubItem(const CSubPath& SubPath)
{
	switch(SubPath.GetType())
	{
		case TYPE_PART:
			DeletePart(SubPath);
			break;
	}
}

void CAsset_Character::RelMoveSubItem(CSubPath& SubPath, int RelMove)
{
	switch(SubPath.GetType())
	{
		case TYPE_PART:
			RelMovePart(SubPath, RelMove);
			break;
	}
}


