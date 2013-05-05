/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.01.75 */
/* at Fri Sep 18 16:27:49 1998
 */
/* Compiler settings for activscp.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __activscp_h__
#define __activscp_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IActiveScriptSite_FWD_DEFINED__
#define __IActiveScriptSite_FWD_DEFINED__
typedef interface IActiveScriptSite IActiveScriptSite;
#endif 	/* __IActiveScriptSite_FWD_DEFINED__ */


#ifndef __IActiveScriptError_FWD_DEFINED__
#define __IActiveScriptError_FWD_DEFINED__
typedef interface IActiveScriptError IActiveScriptError;
#endif 	/* __IActiveScriptError_FWD_DEFINED__ */


#ifndef __IActiveScriptSiteWindow_FWD_DEFINED__
#define __IActiveScriptSiteWindow_FWD_DEFINED__
typedef interface IActiveScriptSiteWindow IActiveScriptSiteWindow;
#endif 	/* __IActiveScriptSiteWindow_FWD_DEFINED__ */


#ifndef __IActiveScriptSiteInterruptPoll_FWD_DEFINED__
#define __IActiveScriptSiteInterruptPoll_FWD_DEFINED__
typedef interface IActiveScriptSiteInterruptPoll IActiveScriptSiteInterruptPoll;
#endif 	/* __IActiveScriptSiteInterruptPoll_FWD_DEFINED__ */


#ifndef __IActiveScript_FWD_DEFINED__
#define __IActiveScript_FWD_DEFINED__
typedef interface IActiveScript IActiveScript;
#endif 	/* __IActiveScript_FWD_DEFINED__ */


#ifndef __IActiveScriptParse_FWD_DEFINED__
#define __IActiveScriptParse_FWD_DEFINED__
typedef interface IActiveScriptParse IActiveScriptParse;
#endif 	/* __IActiveScriptParse_FWD_DEFINED__ */


#ifndef __IActiveScriptParseProcedureOld_FWD_DEFINED__
#define __IActiveScriptParseProcedureOld_FWD_DEFINED__
typedef interface IActiveScriptParseProcedureOld IActiveScriptParseProcedureOld;
#endif 	/* __IActiveScriptParseProcedureOld_FWD_DEFINED__ */


#ifndef __IActiveScriptParseProcedure_FWD_DEFINED__
#define __IActiveScriptParseProcedure_FWD_DEFINED__
typedef interface IActiveScriptParseProcedure IActiveScriptParseProcedure;
#endif 	/* __IActiveScriptParseProcedure_FWD_DEFINED__ */


#ifndef __IBindEventHandler_FWD_DEFINED__
#define __IBindEventHandler_FWD_DEFINED__
typedef interface IBindEventHandler IBindEventHandler;
#endif 	/* __IBindEventHandler_FWD_DEFINED__ */


#ifndef __IActiveScriptStats_FWD_DEFINED__
#define __IActiveScriptStats_FWD_DEFINED__
typedef interface IActiveScriptStats IActiveScriptStats;
#endif 	/* __IActiveScriptStats_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/****************************************
 * Generated header for interface: __MIDL_itf_activscp_0000
 * at Fri Sep 18 16:27:49 1998
 * using MIDL 3.01.75
 ****************************************/
/* [local] */ 


//=--------------------------------------------------------------------------=
// ActivScp.h
//=--------------------------------------------------------------------------=
// (C) Copyright 1996 Microsoft Corporation.  All Rights Reserved.
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//=--------------------------------------------------------------------------=
//
#pragma comment(lib,"uuid.lib")
//
// Declarations for ActiveX Scripting host applications and script engines.
//

#ifndef __ActivScp_h
#define __ActivScp_h

/* GUIDs
 ********/

#ifndef _NO_SCRIPT_GUIDS
// {F0B7A1A1-9847-11cf-8F20-00805F2CD064}
DEFINE_GUID(CATID_ActiveScript, 0xf0b7a1a1, 0x9847, 0x11cf, 0x8f, 0x20, 0x0, 0x80, 0x5f, 0x2c, 0xd0, 0x64);

// {F0B7A1A2-9847-11cf-8F20-00805F2CD064}
DEFINE_GUID(CATID_ActiveScriptParse, 0xf0b7a1a2, 0x9847, 0x11cf, 0x8f, 0x20, 0x0, 0x80, 0x5f, 0x2c, 0xd0, 0x64);

// {BB1A2AE1-A4F9-11cf-8F20-00805F2CD064}
DEFINE_GUID(IID_IActiveScript, 0xbb1a2ae1, 0xa4f9, 0x11cf, 0x8f, 0x20, 0x0, 0x80, 0x5f, 0x2c, 0xd0, 0x64);

// {BB1A2AE2-A4F9-11cf-8F20-00805F2CD064}
DEFINE_GUID(IID_IActiveScriptParse, 0xbb1a2ae2, 0xa4f9, 0x11cf, 0x8f, 0x20, 0x0, 0x80, 0x5f, 0x2c, 0xd0, 0x64);

// {1CFF0050-6FDD-11d0-9328-00A0C90DCAA9}
DEFINE_GUID(IID_IActiveScriptParseProcedureOld, 0x1cff0050, 0x6fdd, 0x11d0, 0x93, 0x28, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);

// {AA5B6A80-B834-11d0-932F-00A0C90DCAA9}
DEFINE_GUID(IID_IActiveScriptParseProcedure, 0xaa5b6a80, 0xb834, 0x11d0, 0x93, 0x2f, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);

// {DB01A1E3-A42B-11cf-8F20-00805F2CD064}
DEFINE_GUID(IID_IActiveScriptSite, 0xdb01a1e3, 0xa42b, 0x11cf, 0x8f, 0x20, 0x0, 0x80, 0x5f, 0x2c, 0xd0, 0x64);

// {D10F6761-83E9-11cf-8F20-00805F2CD064}
DEFINE_GUID(IID_IActiveScriptSiteWindow, 0xd10f6761, 0x83e9, 0x11cf, 0x8f, 0x20, 0x0, 0x80, 0x5f, 0x2c, 0xd0, 0x64);

// {539698A0-CDCA-11CF-A5EB-00AA0047A063}
DEFINE_GUID(IID_IActiveScriptSiteInterruptPoll, 0x539698a0, 0xcdca, 0x11cf, 0xa5, 0xeb, 0x00, 0xaa, 0x00, 0x47, 0xa0, 0x63);

// {EAE1BA61-A4ED-11cf-8F20-00805F2CD064}
DEFINE_GUID(IID_IActiveScriptError, 0xeae1ba61, 0xa4ed, 0x11cf, 0x8f, 0x20, 0x0, 0x80, 0x5f, 0x2c, 0xd0, 0x64);

// {63CDBCB0-C1B1-11d0-9336-00A0C90DCAA9}
DEFINE_GUID(IID_IBindEventHandler, 0x63cdbcb0, 0xc1b1, 0x11d0, 0x93, 0x36, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);

// {B8DA6310-E19B-11d0-933C-00A0C90DCAA9}
DEFINE_GUID(IID_IActiveScriptStats, 0xb8da6310, 0xe19b, 0x11d0, 0x93, 0x3c, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);

#endif // _NO_SCRIPT_GUIDS

// Constants used by ActiveX Scripting:
//

/* IActiveScript::AddNamedItem() input flags */

#define SCRIPTITEM_ISVISIBLE            0x00000002
#define SCRIPTITEM_ISSOURCE             0x00000004
#define SCRIPTITEM_GLOBALMEMBERS        0x00000008
#define SCRIPTITEM_ISPERSISTENT         0x00000040
#define SCRIPTITEM_CODEONLY             0x00000200
#define SCRIPTITEM_NOCODE               0x00000400

#define SCRIPTITEM_ALL_FLAGS            (SCRIPTITEM_ISSOURCE | \
                                         SCRIPTITEM_ISVISIBLE | \
                                         SCRIPTITEM_ISPERSISTENT | \
                                         SCRIPTITEM_GLOBALMEMBERS | \
                                         SCRIPTITEM_NOCODE | \
                                         SCRIPTITEM_CODEONLY)

/* IActiveScript::AddTypeLib() input flags */

#define SCRIPTTYPELIB_ISCONTROL         0x00000010
#define SCRIPTTYPELIB_ISPERSISTENT      0x00000040
#define SCRIPTTYPELIB_ALL_FLAGS         (SCRIPTTEXT_ISCONTROL | SCRIPTTYPELIB_ISPERSISTENT)

/* IActiveScriptParse::AddScriptlet() and IActiveScriptParse::ParseScriptText() input flags */

#define SCRIPTTEXT_DELAYEXECUTION       0x00000001
#define SCRIPTTEXT_ISVISIBLE            0x00000002
#define SCRIPTTEXT_ISEXPRESSION         0x00000020
#define SCRIPTTEXT_ISPERSISTENT         0x00000040
#define SCRIPTTEXT_HOSTMANAGESSOURCE    0x00000080
#define SCRIPTTEXT_ALL_FLAGS            (SCRIPTTEXT_DELAYEXECUTION | \
                                         SCRIPTTEXT_ISVISIBLE | \
                                         SCRIPTTEXT_ISEXPRESSION | \
                                         SCRIPTTEXT_ISPERSISTENT | \
                                         SCRIPTTEXT_HOSTMANAGESSOURCE)

/* IActiveScriptParseProcedure::ParseProcedureText() input flags */

#define SCRIPTPROC_HOSTMANAGESSOURCE    0x00000080
#define SCRIPTPROC_IMPLICIT_THIS        0x00000100
#define SCRIPTPROC_IMPLICIT_PARENTS     0x00000200
#define SCRIPTPROC_ALL_FLAGS            (SCRIPTPROC_HOSTMANAGESSOURCE | \
                                         SCRIPTPROC_IMPLICIT_THIS | \
                                         SCRIPTPROC_IMPLICIT_PARENTS)

/* IActiveScriptSite::GetItemInfo() input flags */

#define SCRIPTINFO_IUNKNOWN             0x00000001
#define SCRIPTINFO_ITYPEINFO            0x00000002
#define SCRIPTINFO_ALL_FLAGS            (SCRIPTINFO_IUNKNOWN | \
                                         SCRIPTINFO_ITYPEINFO)

/* IActiveScript::Interrupt() Flags */

#define SCRIPTINTERRUPT_DEBUG           0x00000001
#define SCRIPTINTERRUPT_RAISEEXCEPTION  0x00000002
#define SCRIPTINTERRUPT_ALL_FLAGS       (SCRIPTINTERRUPT_DEBUG | \
                                         SCRIPTINTERRUPT_RAISEEXCEPTION)

/* IActiveScriptStats::GetStat() values */

#define SCRIPTSTAT_STATEMENT_COUNT       1
#define SCRIPTSTAT_INSTRUCTION_COUNT     2
#define SCRIPTSTAT_INTSTRUCTION_TIME     3
#define SCRIPTSTAT_TOTAL_TIME            4

/* script state values */

typedef 
enum tagSCRIPTSTATE
    {	SCRIPTSTATE_UNINITIALIZED	= 0,
	SCRIPTSTATE_INITIALIZED	= 5,
	SCRIPTSTATE_STARTED	= 1,
	SCRIPTSTATE_CONNECTED	= 2,
	SCRIPTSTATE_DISCONNECTED	= 3,
	SCRIPTSTATE_CLOSED	= 4
    }	SCRIPTSTATE;


/* script thread state values */

typedef 
enum tagSCRIPTTHREADSTATE
    {	SCRIPTTHREADSTATE_NOTINSCRIPT	= 0,
	SCRIPTTHREADSTATE_RUNNING	= 1
    }	SCRIPTTHREADSTATE;


/* Thread IDs */

typedef DWORD SCRIPTTHREADID;


#define SCRIPTTHREADID_CURRENT  ((SCRIPTTHREADID)-1)
#define SCRIPTTHREADID_BASE     ((SCRIPTTHREADID)-2)
#define SCRIPTTHREADID_ALL      ((SCRIPTTHREADID)-3)

/* Structures */

/* Interfaces
 *************/










extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0000_v0_0_s_ifspec;

#ifndef __IActiveScriptSite_INTERFACE_DEFINED__
#define __IActiveScriptSite_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IActiveScriptSite
 * at Fri Sep 18 16:27:49 1998
 * using MIDL 3.01.75
 ****************************************/
/* [unique][uuid][object] */ 



EXTERN_C const IID IID_IActiveScriptSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface DECLSPEC_UUID("DB01A1E3-A42B-11cf-8F20-00805F2CD064")
    IActiveScriptSite : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetLCID( 
            /* [out] */ LCID __RPC_FAR *plcid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemInfo( 
            /* [in] */ LPCOLESTR pstrName,
            /* [in] */ DWORD dwReturnMask,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppiunkItem,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppti) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDocVersionString( 
            /* [out] */ BSTR __RPC_FAR *pbstrVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnScriptTerminate( 
            /* [in] */ const VARIANT __RPC_FAR *pvarResult,
            /* [in] */ const EXCEPINFO __RPC_FAR *pexcepinfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnStateChange( 
            /* [in] */ SCRIPTSTATE ssScriptState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnScriptError( 
            /* [in] */ IActiveScriptError __RPC_FAR *pscripterror) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnEnterScript( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnLeaveScript( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IActiveScriptSiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IActiveScriptSite __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IActiveScriptSite __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IActiveScriptSite __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetLCID )( 
            IActiveScriptSite __RPC_FAR * This,
            /* [out] */ LCID __RPC_FAR *plcid);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetItemInfo )( 
            IActiveScriptSite __RPC_FAR * This,
            /* [in] */ LPCOLESTR pstrName,
            /* [in] */ DWORD dwReturnMask,
            /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppiunkItem,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppti);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetDocVersionString )( 
            IActiveScriptSite __RPC_FAR * This,
            /* [out] */ BSTR __RPC_FAR *pbstrVersion);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnScriptTerminate )( 
            IActiveScriptSite __RPC_FAR * This,
            /* [in] */ const VARIANT __RPC_FAR *pvarResult,
            /* [in] */ const EXCEPINFO __RPC_FAR *pexcepinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnStateChange )( 
            IActiveScriptSite __RPC_FAR * This,
            /* [in] */ SCRIPTSTATE ssScriptState);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnScriptError )( 
            IActiveScriptSite __RPC_FAR * This,
            /* [in] */ IActiveScriptError __RPC_FAR *pscripterror);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnEnterScript )( 
            IActiveScriptSite __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnLeaveScript )( 
            IActiveScriptSite __RPC_FAR * This);
        
        END_INTERFACE
    } IActiveScriptSiteVtbl;

    interface IActiveScriptSite
    {
        CONST_VTBL struct IActiveScriptSiteVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveScriptSite_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IActiveScriptSite_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IActiveScriptSite_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IActiveScriptSite_GetLCID(This,plcid)	\
    (This)->lpVtbl -> GetLCID(This,plcid)

#define IActiveScriptSite_GetItemInfo(This,pstrName,dwReturnMask,ppiunkItem,ppti)	\
    (This)->lpVtbl -> GetItemInfo(This,pstrName,dwReturnMask,ppiunkItem,ppti)

#define IActiveScriptSite_GetDocVersionString(This,pbstrVersion)	\
    (This)->lpVtbl -> GetDocVersionString(This,pbstrVersion)

#define IActiveScriptSite_OnScriptTerminate(This,pvarResult,pexcepinfo)	\
    (This)->lpVtbl -> OnScriptTerminate(This,pvarResult,pexcepinfo)

#define IActiveScriptSite_OnStateChange(This,ssScriptState)	\
    (This)->lpVtbl -> OnStateChange(This,ssScriptState)

#define IActiveScriptSite_OnScriptError(This,pscripterror)	\
    (This)->lpVtbl -> OnScriptError(This,pscripterror)

#define IActiveScriptSite_OnEnterScript(This)	\
    (This)->lpVtbl -> OnEnterScript(This)

#define IActiveScriptSite_OnLeaveScript(This)	\
    (This)->lpVtbl -> OnLeaveScript(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IActiveScriptSite_GetLCID_Proxy( 
    IActiveScriptSite __RPC_FAR * This,
    /* [out] */ LCID __RPC_FAR *plcid);


void __RPC_STUB IActiveScriptSite_GetLCID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScriptSite_GetItemInfo_Proxy( 
    IActiveScriptSite __RPC_FAR * This,
    /* [in] */ LPCOLESTR pstrName,
    /* [in] */ DWORD dwReturnMask,
    /* [out] */ IUnknown __RPC_FAR *__RPC_FAR *ppiunkItem,
    /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppti);


void __RPC_STUB IActiveScriptSite_GetItemInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScriptSite_GetDocVersionString_Proxy( 
    IActiveScriptSite __RPC_FAR * This,
    /* [out] */ BSTR __RPC_FAR *pbstrVersion);


void __RPC_STUB IActiveScriptSite_GetDocVersionString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScriptSite_OnScriptTerminate_Proxy( 
    IActiveScriptSite __RPC_FAR * This,
    /* [in] */ const VARIANT __RPC_FAR *pvarResult,
    /* [in] */ const EXCEPINFO __RPC_FAR *pexcepinfo);


void __RPC_STUB IActiveScriptSite_OnScriptTerminate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScriptSite_OnStateChange_Proxy( 
    IActiveScriptSite __RPC_FAR * This,
    /* [in] */ SCRIPTSTATE ssScriptState);


void __RPC_STUB IActiveScriptSite_OnStateChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScriptSite_OnScriptError_Proxy( 
    IActiveScriptSite __RPC_FAR * This,
    /* [in] */ IActiveScriptError __RPC_FAR *pscripterror);


void __RPC_STUB IActiveScriptSite_OnScriptError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScriptSite_OnEnterScript_Proxy( 
    IActiveScriptSite __RPC_FAR * This);


void __RPC_STUB IActiveScriptSite_OnEnterScript_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScriptSite_OnLeaveScript_Proxy( 
    IActiveScriptSite __RPC_FAR * This);


void __RPC_STUB IActiveScriptSite_OnLeaveScript_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IActiveScriptSite_INTERFACE_DEFINED__ */


#ifndef __IActiveScriptError_INTERFACE_DEFINED__
#define __IActiveScriptError_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IActiveScriptError
 * at Fri Sep 18 16:27:49 1998
 * using MIDL 3.01.75
 ****************************************/
/* [unique][uuid][object] */ 



EXTERN_C const IID IID_IActiveScriptError;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface DECLSPEC_UUID("EAE1BA61-A4ED-11cf-8F20-00805F2CD064")
    IActiveScriptError : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetExceptionInfo( 
            /* [out] */ EXCEPINFO __RPC_FAR *pexcepinfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSourcePosition( 
            /* [out] */ DWORD __RPC_FAR *pdwSourceContext,
            /* [out] */ ULONG __RPC_FAR *pulLineNumber,
            /* [out] */ LONG __RPC_FAR *plCharacterPosition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSourceLineText( 
            /* [out] */ BSTR __RPC_FAR *pbstrSourceLine) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IActiveScriptErrorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IActiveScriptError __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IActiveScriptError __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IActiveScriptError __RPC_FAR * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetExceptionInfo )( 
            IActiveScriptError __RPC_FAR * This,
            /* [out] */ EXCEPINFO __RPC_FAR *pexcepinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSourcePosition )( 
            IActiveScriptError __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwSourceContext,
            /* [out] */ ULONG __RPC_FAR *pulLineNumber,
            /* [out] */ LONG __RPC_FAR *plCharacterPosition);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSourceLineText )( 
            IActiveScriptError __RPC_FAR * This,
            /* [out] */ BSTR __RPC_FAR *pbstrSourceLine);
        
        END_INTERFACE
    } IActiveScriptErrorVtbl;

    interface IActiveScriptError
    {
        CONST_VTBL struct IActiveScriptErrorVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveScriptError_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IActiveScriptError_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IActiveScriptError_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IActiveScriptError_GetExceptionInfo(This,pexcepinfo)	\
    (This)->lpVtbl -> GetExceptionInfo(This,pexcepinfo)

#define IActiveScriptError_GetSourcePosition(This,pdwSourceContext,pulLineNumber,plCharacterPosition)	\
    (This)->lpVtbl -> GetSourcePosition(This,pdwSourceContext,pulLineNumber,plCharacterPosition)

#define IActiveScriptError_GetSourceLineText(This,pbstrSourceLine)	\
    (This)->lpVtbl -> GetSourceLineText(This,pbstrSourceLine)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IActiveScriptError_RemoteGetExceptionInfo_Proxy( 
    IActiveScriptError __RPC_FAR * This,
    /* [out] */ EXCEPINFO __RPC_FAR *pexcepinfo);


void __RPC_STUB IActiveScriptError_RemoteGetExceptionInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScriptError_GetSourcePosition_Proxy( 
    IActiveScriptError __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwSourceContext,
    /* [out] */ ULONG __RPC_FAR *pulLineNumber,
    /* [out] */ LONG __RPC_FAR *plCharacterPosition);


void __RPC_STUB IActiveScriptError_GetSourcePosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScriptError_GetSourceLineText_Proxy( 
    IActiveScriptError __RPC_FAR * This,
    /* [out] */ BSTR __RPC_FAR *pbstrSourceLine);


void __RPC_STUB IActiveScriptError_GetSourceLineText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IActiveScriptError_INTERFACE_DEFINED__ */


#ifndef __IActiveScriptSiteWindow_INTERFACE_DEFINED__
#define __IActiveScriptSiteWindow_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IActiveScriptSiteWindow
 * at Fri Sep 18 16:27:49 1998
 * using MIDL 3.01.75
 ****************************************/
/* [unique][uuid][object] */ 



EXTERN_C const IID IID_IActiveScriptSiteWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface DECLSPEC_UUID("D10F6761-83E9-11cf-8F20-00805F2CD064")
    IActiveScriptSiteWindow : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetWindow( 
            /* [out] */ HWND __RPC_FAR *phwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnableModeless( 
            /* [in] */ BOOL fEnable) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IActiveScriptSiteWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IActiveScriptSiteWindow __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IActiveScriptSiteWindow __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IActiveScriptSiteWindow __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetWindow )( 
            IActiveScriptSiteWindow __RPC_FAR * This,
            /* [out] */ HWND __RPC_FAR *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnableModeless )( 
            IActiveScriptSiteWindow __RPC_FAR * This,
            /* [in] */ BOOL fEnable);
        
        END_INTERFACE
    } IActiveScriptSiteWindowVtbl;

    interface IActiveScriptSiteWindow
    {
        CONST_VTBL struct IActiveScriptSiteWindowVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveScriptSiteWindow_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IActiveScriptSiteWindow_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IActiveScriptSiteWindow_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IActiveScriptSiteWindow_GetWindow(This,phwnd)	\
    (This)->lpVtbl -> GetWindow(This,phwnd)

#define IActiveScriptSiteWindow_EnableModeless(This,fEnable)	\
    (This)->lpVtbl -> EnableModeless(This,fEnable)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IActiveScriptSiteWindow_GetWindow_Proxy( 
    IActiveScriptSiteWindow __RPC_FAR * This,
    /* [out] */ HWND __RPC_FAR *phwnd);


void __RPC_STUB IActiveScriptSiteWindow_GetWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScriptSiteWindow_EnableModeless_Proxy( 
    IActiveScriptSiteWindow __RPC_FAR * This,
    /* [in] */ BOOL fEnable);


void __RPC_STUB IActiveScriptSiteWindow_EnableModeless_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IActiveScriptSiteWindow_INTERFACE_DEFINED__ */


#ifndef __IActiveScriptSiteInterruptPoll_INTERFACE_DEFINED__
#define __IActiveScriptSiteInterruptPoll_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IActiveScriptSiteInterruptPoll
 * at Fri Sep 18 16:27:49 1998
 * using MIDL 3.01.75
 ****************************************/
/* [unique][uuid][object] */ 



EXTERN_C const IID IID_IActiveScriptSiteInterruptPoll;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface DECLSPEC_UUID("539698A0-CDCA-11CF-A5EB-00AA0047A063")
    IActiveScriptSiteInterruptPoll : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryContinue( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IActiveScriptSiteInterruptPollVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IActiveScriptSiteInterruptPoll __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IActiveScriptSiteInterruptPoll __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IActiveScriptSiteInterruptPoll __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryContinue )( 
            IActiveScriptSiteInterruptPoll __RPC_FAR * This);
        
        END_INTERFACE
    } IActiveScriptSiteInterruptPollVtbl;

    interface IActiveScriptSiteInterruptPoll
    {
        CONST_VTBL struct IActiveScriptSiteInterruptPollVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveScriptSiteInterruptPoll_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IActiveScriptSiteInterruptPoll_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IActiveScriptSiteInterruptPoll_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IActiveScriptSiteInterruptPoll_QueryContinue(This)	\
    (This)->lpVtbl -> QueryContinue(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IActiveScriptSiteInterruptPoll_QueryContinue_Proxy( 
    IActiveScriptSiteInterruptPoll __RPC_FAR * This);


void __RPC_STUB IActiveScriptSiteInterruptPoll_QueryContinue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IActiveScriptSiteInterruptPoll_INTERFACE_DEFINED__ */


/****************************************
 * Generated header for interface: __MIDL_itf_activscp_0140
 * at Fri Sep 18 16:27:49 1998
 * using MIDL 3.01.75
 ****************************************/
/* [local] */ 


typedef IActiveScriptSite *PIActiveScriptSite;


extern RPC_IF_HANDLE __MIDL_itf_activscp_0140_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0140_v0_0_s_ifspec;

#ifndef __IActiveScript_INTERFACE_DEFINED__
#define __IActiveScript_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IActiveScript
 * at Fri Sep 18 16:27:49 1998
 * using MIDL 3.01.75
 ****************************************/
/* [unique][uuid][object] */ 



EXTERN_C const IID IID_IActiveScript;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface DECLSPEC_UUID("BB1A2AE1-A4F9-11cf-8F20-00805F2CD064")
    IActiveScript : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetScriptSite( 
            /* [in] */ IActiveScriptSite __RPC_FAR *pass) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetScriptSite( 
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetScriptState( 
            /* [in] */ SCRIPTSTATE ss) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetScriptState( 
            /* [out] */ SCRIPTSTATE __RPC_FAR *pssState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddNamedItem( 
            /* [in] */ LPCOLESTR pstrName,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddTypeLib( 
            /* [in] */ REFGUID rguidTypeLib,
            /* [in] */ DWORD dwMajor,
            /* [in] */ DWORD dwMinor,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetScriptDispatch( 
            /* [in] */ LPCOLESTR pstrItemName,
            /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentScriptThreadID( 
            /* [out] */ SCRIPTTHREADID __RPC_FAR *pstidThread) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetScriptThreadID( 
            /* [in] */ DWORD dwWin32ThreadId,
            /* [out] */ SCRIPTTHREADID __RPC_FAR *pstidThread) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetScriptThreadState( 
            /* [in] */ SCRIPTTHREADID stidThread,
            /* [out] */ SCRIPTTHREADSTATE __RPC_FAR *pstsState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InterruptScriptThread( 
            /* [in] */ SCRIPTTHREADID stidThread,
            /* [in] */ const EXCEPINFO __RPC_FAR *pexcepinfo,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IActiveScript __RPC_FAR *__RPC_FAR *ppscript) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IActiveScriptVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IActiveScript __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IActiveScript __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IActiveScript __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetScriptSite )( 
            IActiveScript __RPC_FAR * This,
            /* [in] */ IActiveScriptSite __RPC_FAR *pass);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetScriptSite )( 
            IActiveScript __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetScriptState )( 
            IActiveScript __RPC_FAR * This,
            /* [in] */ SCRIPTSTATE ss);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetScriptState )( 
            IActiveScript __RPC_FAR * This,
            /* [out] */ SCRIPTSTATE __RPC_FAR *pssState);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Close )( 
            IActiveScript __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddNamedItem )( 
            IActiveScript __RPC_FAR * This,
            /* [in] */ LPCOLESTR pstrName,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddTypeLib )( 
            IActiveScript __RPC_FAR * This,
            /* [in] */ REFGUID rguidTypeLib,
            /* [in] */ DWORD dwMajor,
            /* [in] */ DWORD dwMinor,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetScriptDispatch )( 
            IActiveScript __RPC_FAR * This,
            /* [in] */ LPCOLESTR pstrItemName,
            /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCurrentScriptThreadID )( 
            IActiveScript __RPC_FAR * This,
            /* [out] */ SCRIPTTHREADID __RPC_FAR *pstidThread);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetScriptThreadID )( 
            IActiveScript __RPC_FAR * This,
            /* [in] */ DWORD dwWin32ThreadId,
            /* [out] */ SCRIPTTHREADID __RPC_FAR *pstidThread);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetScriptThreadState )( 
            IActiveScript __RPC_FAR * This,
            /* [in] */ SCRIPTTHREADID stidThread,
            /* [out] */ SCRIPTTHREADSTATE __RPC_FAR *pstsState);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InterruptScriptThread )( 
            IActiveScript __RPC_FAR * This,
            /* [in] */ SCRIPTTHREADID stidThread,
            /* [in] */ const EXCEPINFO __RPC_FAR *pexcepinfo,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IActiveScript __RPC_FAR * This,
            /* [out] */ IActiveScript __RPC_FAR *__RPC_FAR *ppscript);
        
        END_INTERFACE
    } IActiveScriptVtbl;

    interface IActiveScript
    {
        CONST_VTBL struct IActiveScriptVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveScript_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IActiveScript_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IActiveScript_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IActiveScript_SetScriptSite(This,pass)	\
    (This)->lpVtbl -> SetScriptSite(This,pass)

#define IActiveScript_GetScriptSite(This,riid,ppvObject)	\
    (This)->lpVtbl -> GetScriptSite(This,riid,ppvObject)

#define IActiveScript_SetScriptState(This,ss)	\
    (This)->lpVtbl -> SetScriptState(This,ss)

#define IActiveScript_GetScriptState(This,pssState)	\
    (This)->lpVtbl -> GetScriptState(This,pssState)

#define IActiveScript_Close(This)	\
    (This)->lpVtbl -> Close(This)

#define IActiveScript_AddNamedItem(This,pstrName,dwFlags)	\
    (This)->lpVtbl -> AddNamedItem(This,pstrName,dwFlags)

#define IActiveScript_AddTypeLib(This,rguidTypeLib,dwMajor,dwMinor,dwFlags)	\
    (This)->lpVtbl -> AddTypeLib(This,rguidTypeLib,dwMajor,dwMinor,dwFlags)

#define IActiveScript_GetScriptDispatch(This,pstrItemName,ppdisp)	\
    (This)->lpVtbl -> GetScriptDispatch(This,pstrItemName,ppdisp)

#define IActiveScript_GetCurrentScriptThreadID(This,pstidThread)	\
    (This)->lpVtbl -> GetCurrentScriptThreadID(This,pstidThread)

#define IActiveScript_GetScriptThreadID(This,dwWin32ThreadId,pstidThread)	\
    (This)->lpVtbl -> GetScriptThreadID(This,dwWin32ThreadId,pstidThread)

#define IActiveScript_GetScriptThreadState(This,stidThread,pstsState)	\
    (This)->lpVtbl -> GetScriptThreadState(This,stidThread,pstsState)

#define IActiveScript_InterruptScriptThread(This,stidThread,pexcepinfo,dwFlags)	\
    (This)->lpVtbl -> InterruptScriptThread(This,stidThread,pexcepinfo,dwFlags)

#define IActiveScript_Clone(This,ppscript)	\
    (This)->lpVtbl -> Clone(This,ppscript)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IActiveScript_SetScriptSite_Proxy( 
    IActiveScript __RPC_FAR * This,
    /* [in] */ IActiveScriptSite __RPC_FAR *pass);


void __RPC_STUB IActiveScript_SetScriptSite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScript_GetScriptSite_Proxy( 
    IActiveScript __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);


void __RPC_STUB IActiveScript_GetScriptSite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScript_SetScriptState_Proxy( 
    IActiveScript __RPC_FAR * This,
    /* [in] */ SCRIPTSTATE ss);


void __RPC_STUB IActiveScript_SetScriptState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScript_GetScriptState_Proxy( 
    IActiveScript __RPC_FAR * This,
    /* [out] */ SCRIPTSTATE __RPC_FAR *pssState);


void __RPC_STUB IActiveScript_GetScriptState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScript_Close_Proxy( 
    IActiveScript __RPC_FAR * This);


void __RPC_STUB IActiveScript_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScript_AddNamedItem_Proxy( 
    IActiveScript __RPC_FAR * This,
    /* [in] */ LPCOLESTR pstrName,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IActiveScript_AddNamedItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScript_AddTypeLib_Proxy( 
    IActiveScript __RPC_FAR * This,
    /* [in] */ REFGUID rguidTypeLib,
    /* [in] */ DWORD dwMajor,
    /* [in] */ DWORD dwMinor,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IActiveScript_AddTypeLib_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScript_GetScriptDispatch_Proxy( 
    IActiveScript __RPC_FAR * This,
    /* [in] */ LPCOLESTR pstrItemName,
    /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB IActiveScript_GetScriptDispatch_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScript_GetCurrentScriptThreadID_Proxy( 
    IActiveScript __RPC_FAR * This,
    /* [out] */ SCRIPTTHREADID __RPC_FAR *pstidThread);


void __RPC_STUB IActiveScript_GetCurrentScriptThreadID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScript_GetScriptThreadID_Proxy( 
    IActiveScript __RPC_FAR * This,
    /* [in] */ DWORD dwWin32ThreadId,
    /* [out] */ SCRIPTTHREADID __RPC_FAR *pstidThread);


void __RPC_STUB IActiveScript_GetScriptThreadID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScript_GetScriptThreadState_Proxy( 
    IActiveScript __RPC_FAR * This,
    /* [in] */ SCRIPTTHREADID stidThread,
    /* [out] */ SCRIPTTHREADSTATE __RPC_FAR *pstsState);


void __RPC_STUB IActiveScript_GetScriptThreadState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScript_InterruptScriptThread_Proxy( 
    IActiveScript __RPC_FAR * This,
    /* [in] */ SCRIPTTHREADID stidThread,
    /* [in] */ const EXCEPINFO __RPC_FAR *pexcepinfo,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB IActiveScript_InterruptScriptThread_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScript_Clone_Proxy( 
    IActiveScript __RPC_FAR * This,
    /* [out] */ IActiveScript __RPC_FAR *__RPC_FAR *ppscript);


void __RPC_STUB IActiveScript_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IActiveScript_INTERFACE_DEFINED__ */


/****************************************
 * Generated header for interface: __MIDL_itf_activscp_0141
 * at Fri Sep 18 16:27:49 1998
 * using MIDL 3.01.75
 ****************************************/
/* [local] */ 


typedef IActiveScript *PIActiveScript;


extern RPC_IF_HANDLE __MIDL_itf_activscp_0141_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0141_v0_0_s_ifspec;

#ifndef __IActiveScriptParse_INTERFACE_DEFINED__
#define __IActiveScriptParse_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IActiveScriptParse
 * at Fri Sep 18 16:27:49 1998
 * using MIDL 3.01.75
 ****************************************/
/* [unique][uuid][object] */ 



EXTERN_C const IID IID_IActiveScriptParse;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface DECLSPEC_UUID("BB1A2AE2-A4F9-11cf-8F20-00805F2CD064")
    IActiveScriptParse : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitNew( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddScriptlet( 
            /* [in] */ LPCOLESTR pstrDefaultName,
            /* [in] */ LPCOLESTR pstrCode,
            /* [in] */ LPCOLESTR pstrItemName,
            /* [in] */ LPCOLESTR pstrSubItemName,
            /* [in] */ LPCOLESTR pstrEventName,
            /* [in] */ LPCOLESTR pstrDelimiter,
            /* [in] */ DWORD dwSourceContextCookie,
            /* [in] */ ULONG ulStartingLineNumber,
            /* [in] */ DWORD dwFlags,
            /* [out] */ BSTR __RPC_FAR *pbstrName,
            /* [out] */ EXCEPINFO __RPC_FAR *pexcepinfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ParseScriptText( 
            /* [in] */ LPCOLESTR pstrCode,
            /* [in] */ LPCOLESTR pstrItemName,
            /* [in] */ IUnknown __RPC_FAR *punkContext,
            /* [in] */ LPCOLESTR pstrDelimiter,
            /* [in] */ DWORD dwSourceContextCookie,
            /* [in] */ ULONG ulStartingLineNumber,
            /* [in] */ DWORD dwFlags,
            /* [out] */ VARIANT __RPC_FAR *pvarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pexcepinfo) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IActiveScriptParseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IActiveScriptParse __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IActiveScriptParse __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IActiveScriptParse __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *InitNew )( 
            IActiveScriptParse __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddScriptlet )( 
            IActiveScriptParse __RPC_FAR * This,
            /* [in] */ LPCOLESTR pstrDefaultName,
            /* [in] */ LPCOLESTR pstrCode,
            /* [in] */ LPCOLESTR pstrItemName,
            /* [in] */ LPCOLESTR pstrSubItemName,
            /* [in] */ LPCOLESTR pstrEventName,
            /* [in] */ LPCOLESTR pstrDelimiter,
            /* [in] */ DWORD dwSourceContextCookie,
            /* [in] */ ULONG ulStartingLineNumber,
            /* [in] */ DWORD dwFlags,
            /* [out] */ BSTR __RPC_FAR *pbstrName,
            /* [out] */ EXCEPINFO __RPC_FAR *pexcepinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ParseScriptText )( 
            IActiveScriptParse __RPC_FAR * This,
            /* [in] */ LPCOLESTR pstrCode,
            /* [in] */ LPCOLESTR pstrItemName,
            /* [in] */ IUnknown __RPC_FAR *punkContext,
            /* [in] */ LPCOLESTR pstrDelimiter,
            /* [in] */ DWORD dwSourceContextCookie,
            /* [in] */ ULONG ulStartingLineNumber,
            /* [in] */ DWORD dwFlags,
            /* [out] */ VARIANT __RPC_FAR *pvarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pexcepinfo);
        
        END_INTERFACE
    } IActiveScriptParseVtbl;

    interface IActiveScriptParse
    {
        CONST_VTBL struct IActiveScriptParseVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveScriptParse_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IActiveScriptParse_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IActiveScriptParse_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IActiveScriptParse_InitNew(This)	\
    (This)->lpVtbl -> InitNew(This)

#define IActiveScriptParse_AddScriptlet(This,pstrDefaultName,pstrCode,pstrItemName,pstrSubItemName,pstrEventName,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pbstrName,pexcepinfo)	\
    (This)->lpVtbl -> AddScriptlet(This,pstrDefaultName,pstrCode,pstrItemName,pstrSubItemName,pstrEventName,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pbstrName,pexcepinfo)

#define IActiveScriptParse_ParseScriptText(This,pstrCode,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pvarResult,pexcepinfo)	\
    (This)->lpVtbl -> ParseScriptText(This,pstrCode,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,pvarResult,pexcepinfo)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IActiveScriptParse_InitNew_Proxy( 
    IActiveScriptParse __RPC_FAR * This);


void __RPC_STUB IActiveScriptParse_InitNew_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScriptParse_AddScriptlet_Proxy( 
    IActiveScriptParse __RPC_FAR * This,
    /* [in] */ LPCOLESTR pstrDefaultName,
    /* [in] */ LPCOLESTR pstrCode,
    /* [in] */ LPCOLESTR pstrItemName,
    /* [in] */ LPCOLESTR pstrSubItemName,
    /* [in] */ LPCOLESTR pstrEventName,
    /* [in] */ LPCOLESTR pstrDelimiter,
    /* [in] */ DWORD dwSourceContextCookie,
    /* [in] */ ULONG ulStartingLineNumber,
    /* [in] */ DWORD dwFlags,
    /* [out] */ BSTR __RPC_FAR *pbstrName,
    /* [out] */ EXCEPINFO __RPC_FAR *pexcepinfo);


void __RPC_STUB IActiveScriptParse_AddScriptlet_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScriptParse_ParseScriptText_Proxy( 
    IActiveScriptParse __RPC_FAR * This,
    /* [in] */ LPCOLESTR pstrCode,
    /* [in] */ LPCOLESTR pstrItemName,
    /* [in] */ IUnknown __RPC_FAR *punkContext,
    /* [in] */ LPCOLESTR pstrDelimiter,
    /* [in] */ DWORD dwSourceContextCookie,
    /* [in] */ ULONG ulStartingLineNumber,
    /* [in] */ DWORD dwFlags,
    /* [out] */ VARIANT __RPC_FAR *pvarResult,
    /* [out] */ EXCEPINFO __RPC_FAR *pexcepinfo);


void __RPC_STUB IActiveScriptParse_ParseScriptText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IActiveScriptParse_INTERFACE_DEFINED__ */


/****************************************
 * Generated header for interface: __MIDL_itf_activscp_0142
 * at Fri Sep 18 16:27:49 1998
 * using MIDL 3.01.75
 ****************************************/
/* [local] */ 



typedef IActiveScriptParse *PIActiveScriptParse;



extern RPC_IF_HANDLE __MIDL_itf_activscp_0142_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0142_v0_0_s_ifspec;

#ifndef __IActiveScriptParseProcedureOld_INTERFACE_DEFINED__
#define __IActiveScriptParseProcedureOld_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IActiveScriptParseProcedureOld
 * at Fri Sep 18 16:27:49 1998
 * using MIDL 3.01.75
 ****************************************/
/* [unique][uuid][object] */ 



EXTERN_C const IID IID_IActiveScriptParseProcedureOld;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface DECLSPEC_UUID("1CFF0050-6FDD-11d0-9328-00A0C90DCAA9")
    IActiveScriptParseProcedureOld : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ParseProcedureText( 
            /* [in] */ LPCOLESTR pstrCode,
            /* [in] */ LPCOLESTR pstrFormalParams,
            /* [in] */ LPCOLESTR pstrItemName,
            /* [in] */ IUnknown __RPC_FAR *punkContext,
            /* [in] */ LPCOLESTR pstrDelimiter,
            /* [in] */ DWORD dwSourceContextCookie,
            /* [in] */ ULONG ulStartingLineNumber,
            /* [in] */ DWORD dwFlags,
            /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IActiveScriptParseProcedureOldVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IActiveScriptParseProcedureOld __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IActiveScriptParseProcedureOld __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IActiveScriptParseProcedureOld __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ParseProcedureText )( 
            IActiveScriptParseProcedureOld __RPC_FAR * This,
            /* [in] */ LPCOLESTR pstrCode,
            /* [in] */ LPCOLESTR pstrFormalParams,
            /* [in] */ LPCOLESTR pstrItemName,
            /* [in] */ IUnknown __RPC_FAR *punkContext,
            /* [in] */ LPCOLESTR pstrDelimiter,
            /* [in] */ DWORD dwSourceContextCookie,
            /* [in] */ ULONG ulStartingLineNumber,
            /* [in] */ DWORD dwFlags,
            /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        END_INTERFACE
    } IActiveScriptParseProcedureOldVtbl;

    interface IActiveScriptParseProcedureOld
    {
        CONST_VTBL struct IActiveScriptParseProcedureOldVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveScriptParseProcedureOld_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IActiveScriptParseProcedureOld_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IActiveScriptParseProcedureOld_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IActiveScriptParseProcedureOld_ParseProcedureText(This,pstrCode,pstrFormalParams,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp)	\
    (This)->lpVtbl -> ParseProcedureText(This,pstrCode,pstrFormalParams,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IActiveScriptParseProcedureOld_ParseProcedureText_Proxy( 
    IActiveScriptParseProcedureOld __RPC_FAR * This,
    /* [in] */ LPCOLESTR pstrCode,
    /* [in] */ LPCOLESTR pstrFormalParams,
    /* [in] */ LPCOLESTR pstrItemName,
    /* [in] */ IUnknown __RPC_FAR *punkContext,
    /* [in] */ LPCOLESTR pstrDelimiter,
    /* [in] */ DWORD dwSourceContextCookie,
    /* [in] */ ULONG ulStartingLineNumber,
    /* [in] */ DWORD dwFlags,
    /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB IActiveScriptParseProcedureOld_ParseProcedureText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IActiveScriptParseProcedureOld_INTERFACE_DEFINED__ */


#ifndef __IActiveScriptParseProcedure_INTERFACE_DEFINED__
#define __IActiveScriptParseProcedure_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IActiveScriptParseProcedure
 * at Fri Sep 18 16:27:49 1998
 * using MIDL 3.01.75
 ****************************************/
/* [unique][uuid][object] */ 



EXTERN_C const IID IID_IActiveScriptParseProcedure;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface DECLSPEC_UUID("AA5B6A80-B834-11d0-932F-00A0C90DCAA9")
    IActiveScriptParseProcedure : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ParseProcedureText( 
            /* [in] */ LPCOLESTR pstrCode,
            /* [in] */ LPCOLESTR pstrFormalParams,
            /* [in] */ LPCOLESTR pstrProcedureName,
            /* [in] */ LPCOLESTR pstrItemName,
            /* [in] */ IUnknown __RPC_FAR *punkContext,
            /* [in] */ LPCOLESTR pstrDelimiter,
            /* [in] */ DWORD dwSourceContextCookie,
            /* [in] */ ULONG ulStartingLineNumber,
            /* [in] */ DWORD dwFlags,
            /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IActiveScriptParseProcedureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IActiveScriptParseProcedure __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IActiveScriptParseProcedure __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IActiveScriptParseProcedure __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ParseProcedureText )( 
            IActiveScriptParseProcedure __RPC_FAR * This,
            /* [in] */ LPCOLESTR pstrCode,
            /* [in] */ LPCOLESTR pstrFormalParams,
            /* [in] */ LPCOLESTR pstrProcedureName,
            /* [in] */ LPCOLESTR pstrItemName,
            /* [in] */ IUnknown __RPC_FAR *punkContext,
            /* [in] */ LPCOLESTR pstrDelimiter,
            /* [in] */ DWORD dwSourceContextCookie,
            /* [in] */ ULONG ulStartingLineNumber,
            /* [in] */ DWORD dwFlags,
            /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);
        
        END_INTERFACE
    } IActiveScriptParseProcedureVtbl;

    interface IActiveScriptParseProcedure
    {
        CONST_VTBL struct IActiveScriptParseProcedureVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveScriptParseProcedure_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IActiveScriptParseProcedure_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IActiveScriptParseProcedure_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IActiveScriptParseProcedure_ParseProcedureText(This,pstrCode,pstrFormalParams,pstrProcedureName,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp)	\
    (This)->lpVtbl -> ParseProcedureText(This,pstrCode,pstrFormalParams,pstrProcedureName,pstrItemName,punkContext,pstrDelimiter,dwSourceContextCookie,ulStartingLineNumber,dwFlags,ppdisp)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IActiveScriptParseProcedure_ParseProcedureText_Proxy( 
    IActiveScriptParseProcedure __RPC_FAR * This,
    /* [in] */ LPCOLESTR pstrCode,
    /* [in] */ LPCOLESTR pstrFormalParams,
    /* [in] */ LPCOLESTR pstrProcedureName,
    /* [in] */ LPCOLESTR pstrItemName,
    /* [in] */ IUnknown __RPC_FAR *punkContext,
    /* [in] */ LPCOLESTR pstrDelimiter,
    /* [in] */ DWORD dwSourceContextCookie,
    /* [in] */ ULONG ulStartingLineNumber,
    /* [in] */ DWORD dwFlags,
    /* [out] */ IDispatch __RPC_FAR *__RPC_FAR *ppdisp);


void __RPC_STUB IActiveScriptParseProcedure_ParseProcedureText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IActiveScriptParseProcedure_INTERFACE_DEFINED__ */


#ifndef __IBindEventHandler_INTERFACE_DEFINED__
#define __IBindEventHandler_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IBindEventHandler
 * at Fri Sep 18 16:27:49 1998
 * using MIDL 3.01.75
 ****************************************/
/* [unique][uuid][object] */ 



EXTERN_C const IID IID_IBindEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface DECLSPEC_UUID("63CDBCB0-C1B1-11d0-9336-00A0C90DCAA9")
    IBindEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BindHandler( 
            /* [in] */ LPCOLESTR pstrEvent,
            /* [in] */ IDispatch __RPC_FAR *pdisp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBindEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IBindEventHandler __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IBindEventHandler __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IBindEventHandler __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *BindHandler )( 
            IBindEventHandler __RPC_FAR * This,
            /* [in] */ LPCOLESTR pstrEvent,
            /* [in] */ IDispatch __RPC_FAR *pdisp);
        
        END_INTERFACE
    } IBindEventHandlerVtbl;

    interface IBindEventHandler
    {
        CONST_VTBL struct IBindEventHandlerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBindEventHandler_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IBindEventHandler_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IBindEventHandler_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IBindEventHandler_BindHandler(This,pstrEvent,pdisp)	\
    (This)->lpVtbl -> BindHandler(This,pstrEvent,pdisp)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IBindEventHandler_BindHandler_Proxy( 
    IBindEventHandler __RPC_FAR * This,
    /* [in] */ LPCOLESTR pstrEvent,
    /* [in] */ IDispatch __RPC_FAR *pdisp);


void __RPC_STUB IBindEventHandler_BindHandler_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IBindEventHandler_INTERFACE_DEFINED__ */


#ifndef __IActiveScriptStats_INTERFACE_DEFINED__
#define __IActiveScriptStats_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IActiveScriptStats
 * at Fri Sep 18 16:27:49 1998
 * using MIDL 3.01.75
 ****************************************/
/* [unique][uuid][object] */ 



EXTERN_C const IID IID_IActiveScriptStats;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface DECLSPEC_UUID("B8DA6310-E19B-11d0-933C-00A0C90DCAA9")
    IActiveScriptStats : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStat( 
            /* [in] */ DWORD stid,
            /* [out] */ ULONG __RPC_FAR *pluHi,
            /* [out] */ ULONG __RPC_FAR *pluLo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatEx( 
            /* [in] */ REFGUID guid,
            /* [out] */ ULONG __RPC_FAR *pluHi,
            /* [out] */ ULONG __RPC_FAR *pluLo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetStats( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IActiveScriptStatsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IActiveScriptStats __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IActiveScriptStats __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IActiveScriptStats __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetStat )( 
            IActiveScriptStats __RPC_FAR * This,
            /* [in] */ DWORD stid,
            /* [out] */ ULONG __RPC_FAR *pluHi,
            /* [out] */ ULONG __RPC_FAR *pluLo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetStatEx )( 
            IActiveScriptStats __RPC_FAR * This,
            /* [in] */ REFGUID guid,
            /* [out] */ ULONG __RPC_FAR *pluHi,
            /* [out] */ ULONG __RPC_FAR *pluLo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ResetStats )( 
            IActiveScriptStats __RPC_FAR * This);
        
        END_INTERFACE
    } IActiveScriptStatsVtbl;

    interface IActiveScriptStats
    {
        CONST_VTBL struct IActiveScriptStatsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActiveScriptStats_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IActiveScriptStats_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IActiveScriptStats_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IActiveScriptStats_GetStat(This,stid,pluHi,pluLo)	\
    (This)->lpVtbl -> GetStat(This,stid,pluHi,pluLo)

#define IActiveScriptStats_GetStatEx(This,guid,pluHi,pluLo)	\
    (This)->lpVtbl -> GetStatEx(This,guid,pluHi,pluLo)

#define IActiveScriptStats_ResetStats(This)	\
    (This)->lpVtbl -> ResetStats(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IActiveScriptStats_GetStat_Proxy( 
    IActiveScriptStats __RPC_FAR * This,
    /* [in] */ DWORD stid,
    /* [out] */ ULONG __RPC_FAR *pluHi,
    /* [out] */ ULONG __RPC_FAR *pluLo);


void __RPC_STUB IActiveScriptStats_GetStat_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScriptStats_GetStatEx_Proxy( 
    IActiveScriptStats __RPC_FAR * This,
    /* [in] */ REFGUID guid,
    /* [out] */ ULONG __RPC_FAR *pluHi,
    /* [out] */ ULONG __RPC_FAR *pluLo);


void __RPC_STUB IActiveScriptStats_GetStatEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IActiveScriptStats_ResetStats_Proxy( 
    IActiveScriptStats __RPC_FAR * This);


void __RPC_STUB IActiveScriptStats_ResetStats_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IActiveScriptStats_INTERFACE_DEFINED__ */


/****************************************
 * Generated header for interface: __MIDL_itf_activscp_0146
 * at Fri Sep 18 16:27:49 1998
 * using MIDL 3.01.75
 ****************************************/
/* [local] */ 



#endif  // __ActivScp_h



extern RPC_IF_HANDLE __MIDL_itf_activscp_0146_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activscp_0146_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long __RPC_FAR *, unsigned long            , HWND __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HWND_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HWND __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  HWND_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, HWND __RPC_FAR * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long __RPC_FAR *, HWND __RPC_FAR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* [local] */ HRESULT STDMETHODCALLTYPE IActiveScriptError_GetExceptionInfo_Proxy( 
    IActiveScriptError __RPC_FAR * This,
    /* [out] */ EXCEPINFO __RPC_FAR *pexcepinfo);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IActiveScriptError_GetExceptionInfo_Stub( 
    IActiveScriptError __RPC_FAR * This,
    /* [out] */ EXCEPINFO __RPC_FAR *pexcepinfo);



/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
