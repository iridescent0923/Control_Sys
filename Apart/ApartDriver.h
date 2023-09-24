///////////////////////////////////////////////////////////////////////////////
// ApartDriver.h

#ifndef __APARTDRIVER_H__
#define __APARTDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define APARTDRV_NAME        "APART"
#define APARTDRV_Major       1
#define APARTDRV_Minor       0

#define DEVICE_CLASS CApartDriver

#include "ObjDriver.h"

class CApartDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl APARTDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(APARTDRV)
	VxD_Service( APARTDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __APARTDRIVER_H__