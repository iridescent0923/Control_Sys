///////////////////////////////////////////////////////////////////////////////
// ApartDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "ApartDriver.h"
#include "ApartClassFactory.h"

DECLARE_GENERIC_DEVICE(APARTDRV)

IOSTATUS CApartDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CApartClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CApartDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CApartDriver::APARTDRV_GetVersion( )
{
	return( (APARTDRV_Major << 8) | APARTDRV_Minor );
}

