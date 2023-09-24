///////////////////////////////////////////////////////////////////////////////
// ApartCtrl.h

#ifndef __APARTCTRL_H__
#define __APARTCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "ApartW32.h"
#include "TcBase.h"
#include "ApartClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CApartCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CApartCtrl, &CLSID_ApartCtrl>
	, public IApartCtrl
	, public ITcOCFCtrlImpl<CApartCtrl, CApartClassFactory>
{
public:
	CApartCtrl();
	virtual ~CApartCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_APARTCTRL)
DECLARE_NOT_AGGREGATABLE(CApartCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CApartCtrl)
	COM_INTERFACE_ENTRY(IApartCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __APARTCTRL_H__
