// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef _REQUEST_CTOCPP_H
#define _REQUEST_CTOCPP_H

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else // USING_CEF_SHARED

#include "include/cef.h"
#include "include/cef_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefRequestCToCpp
    : public CefCToCpp<CefRequestCToCpp, CefRequest, cef_request_t>
{
public:
  CefRequestCToCpp(cef_request_t* str)
      : CefCToCpp<CefRequestCToCpp, CefRequest, cef_request_t>(str) {}
  virtual ~CefRequestCToCpp() {}

  // CefRequest methods
  virtual CefString GetURL() OVERRIDE;
  virtual void SetURL(const CefString& url) OVERRIDE;
  virtual CefString GetMethod() OVERRIDE;
  virtual void SetMethod(const CefString& method) OVERRIDE;
  virtual CefRefPtr<CefPostData> GetPostData() OVERRIDE;
  virtual void SetPostData(CefRefPtr<CefPostData> postData) OVERRIDE;
  virtual void GetHeaderMap(HeaderMap& headerMap) OVERRIDE;
  virtual void SetHeaderMap(const HeaderMap& headerMap) OVERRIDE;
  virtual void Set(const CefString& url, const CefString& method,
      CefRefPtr<CefPostData> postData, const HeaderMap& headerMap) OVERRIDE;
  virtual RequestFlags GetFlags() OVERRIDE;
  virtual void SetFlags(RequestFlags flags) OVERRIDE;
  virtual CefString GetFirstPartyForCookies() OVERRIDE;
  virtual void SetFirstPartyForCookies(const CefString& url) OVERRIDE;
};

#endif // USING_CEF_SHARED
#endif // _REQUEST_CTOCPP_H
