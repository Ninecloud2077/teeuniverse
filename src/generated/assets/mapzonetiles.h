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

#ifndef __CLIENT_ASSETS_MAPZONETILES__
#define __CLIENT_ASSETS_MAPZONETILES__

#include <shared/assets/asset.h>
#include <shared/tl/array2d.h>
#include <shared/assets/assetpath.h>

class CAsset_MapZoneTiles : public CAsset
{
public:
	static const int TypeId = 18;
	
	enum
	{
		TYPE_TILE,
		TYPE_DATAINT,
	};
	
	static inline CSubPath SubPath_Tile(int Id0, int Id1) { return CSubPath(TYPE_TILE, Id0, Id1, 0); }
	static inline CSubPath SubPath_DataInt(int Id0, int Id1) { return CSubPath(TYPE_DATAINT, Id0, Id1, 0); }
	
	enum
	{
		NAME = CAsset::NAME,
		PARENTPATH,
		ZONETYPEPATH,
		TILE_WIDTH,
		TILE_HEIGHT,
		TILE_DEPTH,
		TILE_PTR,
		TILE_ARRAY,
		TILE_INDEX,
		TILE_FLAGS,
		TILE,
		VISIBILITY,
		DATAINT_WIDTH,
		DATAINT_HEIGHT,
		DATAINT_DEPTH,
		DATAINT_PTR,
		DATAINT_ARRAY,
		DATAINT,
		POSITIONX,
		POSITIONY,
	};
	
	class CTile
	{
	public:
		class CTuaType_0_2_0
		{
		public:
			tua_uint8 m_Index;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_MapZoneTiles::CTile& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapZoneTiles::CTile& SysType, CTuaType_0_2_0& TuaType);
		};
		
		class CTuaType_0_2_1
		{
		public:
			tua_uint8 m_Index;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_MapZoneTiles::CTile& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapZoneTiles::CTile& SysType, CTuaType_0_2_1& TuaType);
		};
		
		class CTuaType_0_2_2
		{
		public:
			tua_uint8 m_Index;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_MapZoneTiles::CTile& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapZoneTiles::CTile& SysType, CTuaType_0_2_2& TuaType);
		};
		
		class CTuaType_0_2_3
		{
		public:
			tua_uint8 m_Index;
			tua_uint32 m_Flags;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_3& TuaType, CAsset_MapZoneTiles::CTile& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapZoneTiles::CTile& SysType, CTuaType_0_2_3& TuaType);
		};
		
		class CTuaType_0_2_4
		{
		public:
			tua_uint8 m_Index;
			tua_uint32 m_Flags;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_4& TuaType, CAsset_MapZoneTiles::CTile& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapZoneTiles::CTile& SysType, CTuaType_0_2_4& TuaType);
		};
		
		class CTuaType_0_3_0
		{
		public:
			tua_uint8 m_Index;
			tua_uint32 m_Flags;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_3_0& TuaType, CAsset_MapZoneTiles::CTile& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapZoneTiles::CTile& SysType, CTuaType_0_3_0& TuaType);
		};
		
	
	private:
		uint8 m_Index;
		uint32 m_Flags;
	
	public:
		CTile();
		inline uint8 GetIndex() const { return m_Index; }
		
		inline uint32 GetFlags() const { return m_Flags; }
		
		inline void SetIndex(uint8 Value) { m_Index = Value; }
		
		inline void SetFlags(uint32 Value) { m_Flags = Value; }
		
		void AssetPathOperation(const CAssetPath::COperation& Operation)
		{
		}
		
	};
	class CTuaType_0_2_0 : public CAsset::CTuaType_0_2_0
	{
	public:
		CAssetPath::CTuaType m_ParentPath;
		CAssetPath::CTuaType m_ZoneTypePath;
		CTuaArray2d m_Tile;
		tua_uint8 m_Visibility;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_MapZoneTiles& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapZoneTiles& SysType, CTuaType_0_2_0& TuaType);
	};
	
	class CTuaType_0_2_1 : public CAsset::CTuaType_0_2_1
	{
	public:
		CAssetPath::CTuaType m_ParentPath;
		CAssetPath::CTuaType m_ZoneTypePath;
		CTuaArray2d m_Tile;
		tua_uint8 m_Visibility;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_MapZoneTiles& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapZoneTiles& SysType, CTuaType_0_2_1& TuaType);
	};
	
	class CTuaType_0_2_2 : public CAsset::CTuaType_0_2_2
	{
	public:
		CAssetPath::CTuaType m_ParentPath;
		CAssetPath::CTuaType m_ZoneTypePath;
		CTuaArray2d m_Tile;
		tua_uint8 m_Visibility;
		CTuaArray2d m_DataInt;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_MapZoneTiles& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapZoneTiles& SysType, CTuaType_0_2_2& TuaType);
	};
	
	class CTuaType_0_2_3 : public CAsset::CTuaType_0_2_3
	{
	public:
		CAssetPath::CTuaType m_ParentPath;
		CAssetPath::CTuaType m_ZoneTypePath;
		CTuaArray2d m_Tile;
		tua_uint8 m_Visibility;
		CTuaArray2d m_DataInt;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_3& TuaType, CAsset_MapZoneTiles& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapZoneTiles& SysType, CTuaType_0_2_3& TuaType);
	};
	
	class CTuaType_0_2_4 : public CAsset::CTuaType_0_2_4
	{
	public:
		CAssetPath::CTuaType m_ParentPath;
		CAssetPath::CTuaType m_ZoneTypePath;
		CTuaArray2d m_Tile;
		tua_uint8 m_Visibility;
		CTuaArray2d m_DataInt;
		tua_int32 m_PositionX;
		tua_int32 m_PositionY;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_4& TuaType, CAsset_MapZoneTiles& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapZoneTiles& SysType, CTuaType_0_2_4& TuaType);
	};
	
	class CTuaType_0_3_0 : public CAsset::CTuaType_0_3_0
	{
	public:
		CAssetPath::CTuaType m_ParentPath;
		CAssetPath::CTuaType m_ZoneTypePath;
		CTuaArray2d m_Tile;
		tua_uint8 m_Visibility;
		CTuaArray2d m_DataInt;
		tua_int32 m_PositionX;
		tua_int32 m_PositionY;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_3_0& TuaType, CAsset_MapZoneTiles& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_MapZoneTiles& SysType, CTuaType_0_3_0& TuaType);
	};
	

private:
	CAssetPath m_ParentPath;
	CAssetPath m_ZoneTypePath;
	array2d< CTile > m_Tile;
	bool m_Visibility;
	array2d< int > m_DataInt;
	int m_PositionX;
	int m_PositionY;

public:
	virtual ~CAsset_MapZoneTiles() {}
	
	template<typename T>
	T GetValue(int ValueType, const CSubPath& SubPath, T DefaultValue) const
	{
		return CAsset::GetValue<T>(ValueType, SubPath, DefaultValue);
	}
	
	template<typename T>
	bool SetValue(int ValueType, const CSubPath& SubPath, T Value)
	{
		return CAsset::SetValue<T>(ValueType, SubPath, Value);
	}
	
	int AddSubItem(int Type, const CSubPath& SubPath);
	
	int AddSubItemAt(int Type, const CSubPath& SubPath, int Index);
	
	void DeleteSubItem(const CSubPath& SubPath);
	
	void RelMoveSubItem(CSubPath& SubPath, int RelMove);
	
	CAsset_MapZoneTiles();
	inline CAssetPath GetParentPath() const { return m_ParentPath; }
	
	inline CAssetPath GetZoneTypePath() const { return m_ZoneTypePath; }
	
	inline int GetTileWidth() const { return m_Tile.get_width(); }
	
	inline int GetTileHeight() const { return m_Tile.get_height(); }
	
	inline int GetTileDepth() const { return m_Tile.get_depth(); }
	
	inline const CAsset_MapZoneTiles::CTile* GetTilePtr() const { return m_Tile.base_ptr(); }
	
	inline const array2d< CTile >& GetTileArray() const { return m_Tile; }
	inline array2d< CTile >& GetTileArray() { return m_Tile; }
	
	inline const CAsset_MapZoneTiles::CTile& GetTile(const CSubPath& SubPath) const { return m_Tile.get_clamp(SubPath.GetId(), SubPath.GetId2()); }
	
	inline uint8 GetTileIndex(const CSubPath& SubPath) const { return m_Tile.get_clamp(SubPath.GetId(), SubPath.GetId2()).GetIndex(); }
	
	inline uint32 GetTileFlags(const CSubPath& SubPath) const { return m_Tile.get_clamp(SubPath.GetId(), SubPath.GetId2()).GetFlags(); }
	
	inline bool GetVisibility() const { return m_Visibility; }
	
	inline int GetDataIntWidth() const { return m_DataInt.get_width(); }
	
	inline int GetDataIntHeight() const { return m_DataInt.get_height(); }
	
	inline int GetDataIntDepth() const { return m_DataInt.get_depth(); }
	
	inline const int* GetDataIntPtr() const { return m_DataInt.base_ptr(); }
	
	inline const array2d< int >& GetDataIntArray() const { return m_DataInt; }
	inline array2d< int >& GetDataIntArray() { return m_DataInt; }
	
	inline int GetDataInt(const CSubPath& SubPath) const { return m_DataInt.get_clamp(SubPath.GetId(), SubPath.GetId2()); }
	
	inline int GetPositionX() const { return m_PositionX; }
	
	inline int GetPositionY() const { return m_PositionY; }
	
	inline void SetParentPath(const CAssetPath& Value) { m_ParentPath = Value; }
	
	inline void SetZoneTypePath(const CAssetPath& Value) { m_ZoneTypePath = Value; }
	
	inline void SetTileWidth(int Value) { m_Tile.resize_width(max(Value, 1)); }
	
	inline void SetTileHeight(int Value) { m_Tile.resize_height(max(Value, 1)); }
	
	inline void SetTileDepth(int Value) { m_Tile.resize_depth(max(Value, 1)); }
	
	inline void SetTile(const CSubPath& SubPath, const CAsset_MapZoneTiles::CTile& Value) { m_Tile.set_clamp(SubPath.GetId(), SubPath.GetId2(), Value); }
	
	inline void SetTileIndex(const CSubPath& SubPath, uint8 Value) { m_Tile.get_clamp(SubPath.GetId(), SubPath.GetId2()).SetIndex(Value); }
	
	inline void SetTileFlags(const CSubPath& SubPath, uint32 Value) { m_Tile.get_clamp(SubPath.GetId(), SubPath.GetId2()).SetFlags(Value); }
	
	inline void SetVisibility(bool Value) { m_Visibility = Value; }
	
	inline void SetDataIntWidth(int Value) { m_DataInt.resize_width(max(Value, 1)); }
	
	inline void SetDataIntHeight(int Value) { m_DataInt.resize_height(max(Value, 1)); }
	
	inline void SetDataIntDepth(int Value) { m_DataInt.resize_depth(max(Value, 1)); }
	
	inline void SetDataInt(const CSubPath& SubPath, int Value) { m_DataInt.set_clamp(SubPath.GetId(), SubPath.GetId2(), Value); }
	
	inline void SetPositionX(int Value) { m_PositionX = Value; }
	
	inline void SetPositionY(int Value) { m_PositionY = Value; }
	
	void AssetPathOperation(const CAssetPath::COperation& Operation)
	{
		Operation.Apply(m_ParentPath);
		Operation.Apply(m_ZoneTypePath);
		for(int i=0; i<m_Tile.get_linear_size(); i++)
		{
			m_Tile.linear_get_clamp(i).AssetPathOperation(Operation);
		}
	}
	
};

template<> int CAsset_MapZoneTiles::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const;
template<> bool CAsset_MapZoneTiles::SetValue(int ValueType, const CSubPath& SubPath, int Value);
template<> uint32 CAsset_MapZoneTiles::GetValue(int ValueType, const CSubPath& SubPath, uint32 DefaultValue) const;
template<> bool CAsset_MapZoneTiles::SetValue(int ValueType, const CSubPath& SubPath, uint32 Value);
template<> bool CAsset_MapZoneTiles::GetValue(int ValueType, const CSubPath& SubPath, bool DefaultValue) const;
template<> bool CAsset_MapZoneTiles::SetValue(int ValueType, const CSubPath& SubPath, bool Value);
template<> CAssetPath CAsset_MapZoneTiles::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const;
template<> bool CAsset_MapZoneTiles::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value);

#endif
