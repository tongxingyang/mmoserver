#ifndef MAPEX_H
#define MAPEX_H

// -------------------------------------------------------------------------
//    @FileName         :    MapEx.h
//    @Author           :    
//    @Date             :    2012-03-01
//    @Module           :    这个是智能指针专用,切记，不能在循环中自己删除自己
//
// -------------------------------------------------------------------------


#include <map>
#include <list>
#include <string>
#include <iostream>
#include <typeinfo>
#include <memory>
#include "Platform.h"

template <typename T, typename TD>
class MapEx
{
public:
	typedef std::map<T, NF_SHARE_PTR<TD> > NFMapOBJECT;

	MapEx() {};
	virtual ~MapEx()
	{
	};

	virtual bool AddElement(const T& name, const NF_SHARE_PTR<TD> data)
	{
		typename NFMapOBJECT::iterator itr = mObjectList.find(name);
		if (itr == mObjectList.end())
		{
			mObjectList.insert(typename NFMapOBJECT::value_type(name, data));
			return true;
		}

		return false;
	}

	virtual bool SetElement(const T& name, const NF_SHARE_PTR<TD> data)
	{
		mObjectList[name] = data;

		return true;
	}

	virtual bool RemoveElement(const T& name)
	{
		NF_SHARE_PTR<TD> pData;
		typename NFMapOBJECT::iterator itr = mObjectList.find(name);
		if (itr != mObjectList.end())
		{
			pData = itr->second;
			mObjectList.erase(itr);

			return true;
		}

		return false;
	}

	virtual TD* GetElementNude(const T& name)
	{
		typename NFMapOBJECT::iterator itr = mObjectList.find(name);
		if (itr != mObjectList.end())
		{
			return itr->second.get();
		}
		else
		{
			return NULL;
		}
	}

	virtual NF_SHARE_PTR<TD> GetElement(const T& name)
	{
		typename NFMapOBJECT::iterator itr = mObjectList.find(name);
		if (itr != mObjectList.end())
		{
			return itr->second;
		}
		else
		{
			return NF_SHARE_PTR<TD>();
		}
	}
	virtual TD* FirstNude(T& name)
	{
		if (mObjectList.size() <= 0)
		{
			return NULL;
		}

		mObjectCurIter = mObjectList.begin();
		if (mObjectCurIter != mObjectList.end())
		{
			name = mObjectCurIter->first;
			return mObjectCurIter->second.get();
		}
		else
		{
			return NULL;
		}
	}

	virtual TD* NextNude(T& name)
	{
		if (mObjectCurIter == mObjectList.end())
		{
			return NULL;
		}

		mObjectCurIter++;
		if (mObjectCurIter != mObjectList.end())
		{
			name = mObjectCurIter->first;
			return mObjectCurIter->second.get();
		}
		else
		{
			return NULL;
		}
	}
	virtual TD* FirstNude()
	{
		if (mObjectList.size() <= 0)
		{
			return NULL;
		}

		mObjectCurIter = mObjectList.begin();
		if (mObjectCurIter != mObjectList.end())
		{
			return mObjectCurIter->second.get();
		}
		else
		{
			return NULL;
		}
	}
	virtual TD* NextNude()
	{
		if (mObjectCurIter == mObjectList.end())
		{
			return NULL;
		}

		mObjectCurIter++;
		if (mObjectCurIter != mObjectList.end())
		{
			return mObjectCurIter->second.get();
		}
		else
		{
			return NULL;
		}
	}

	virtual NF_SHARE_PTR<TD> First()
	{
		if (mObjectList.size() <= 0)
		{
			return NF_SHARE_PTR<TD>();
		}

		mObjectCurIter = mObjectList.begin();
		if (mObjectCurIter != mObjectList.end())
		{
			return mObjectCurIter->second;
		}
		else
		{
			return NF_SHARE_PTR<TD>();
		}
	}

	virtual NF_SHARE_PTR<TD> Next()
	{
		if (mObjectCurIter == mObjectList.end())
		{
			return NF_SHARE_PTR<TD>();
		}

		++mObjectCurIter;
		if (mObjectCurIter != mObjectList.end())
		{
			return mObjectCurIter->second;
		}
		else
		{
			return NF_SHARE_PTR<TD>();
		}
	}

	virtual NF_SHARE_PTR<TD> First(T& name)
	{
		if (mObjectList.size() <= 0)
		{
			return NF_SHARE_PTR<TD>();
		}

		mObjectCurIter = mObjectList.begin();
		if (mObjectCurIter != mObjectList.end())
		{
			name = mObjectCurIter->first;
			return mObjectCurIter->second;
		}
		else
		{
			return NF_SHARE_PTR<TD>();
		}
	}

	virtual NF_SHARE_PTR<TD> Next(T& name)
	{
		if (mObjectCurIter == mObjectList.end())
		{
			return NF_SHARE_PTR<TD>();
		}

		mObjectCurIter++;
		if (mObjectCurIter != mObjectList.end())
		{
			name = mObjectCurIter->first;
			return mObjectCurIter->second;
		}
		else
		{
			return NF_SHARE_PTR<TD>();
		}
	}

	int Count()
	{
		return (int)mObjectList.size();
	}

	bool ClearAll()
	{
		mObjectList.clear();
		return true;
	}
private:
	NFMapOBJECT     mObjectList;
	typename NFMapOBJECT::iterator mObjectCurIter;
};

template <typename T, typename TD>
class NFConcurrentMap : public MapEx<T, TD>
{
public:
protected:
private:
};
#endif

