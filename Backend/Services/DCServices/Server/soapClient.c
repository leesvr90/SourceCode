/* soapClient.c
   Generated by gSOAP 2.8.16 from rcx.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"
#ifdef __cplusplus
extern "C" {
#endif

SOAP_SOURCE_STAMP("@(#) soapClient.c ver 2.8.16 2014-02-21 09:10:56 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns2__newServer(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *infoServer, char **return_)
{	struct ns2__newServer soap_tmp_ns2__newServer;
	struct ns2__newServerResponse *soap_tmp_ns2__newServerResponse;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://dcim.vng.com.vn:443/APIServer/server.php";
	if (soap_action == NULL)
		soap_action = "https://dcim.vng.com.vn/APIServer/server.php/newServer";
	soap_begin(soap);
	soap->encodingStyle = "http://schemas.xmlsoap.org/soap/encoding/";
	soap_tmp_ns2__newServer.infoServer = infoServer;
	soap_set_version(soap, 1); /* SOAP1.1 */
	soap_serializeheader(soap);
	soap_serialize_ns2__newServer(soap, &soap_tmp_ns2__newServer);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns2__newServer(soap, &soap_tmp_ns2__newServer, "ns2:newServer", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns2__newServer(soap, &soap_tmp_ns2__newServer, "ns2:newServer", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!return_)
		return soap_closesock(soap);
	*return_ = NULL;
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	soap_tmp_ns2__newServerResponse = soap_get_ns2__newServerResponse(soap, NULL, "", "");
	if (!soap_tmp_ns2__newServerResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (return_ && soap_tmp_ns2__newServerResponse->return_)
		*return_ = *soap_tmp_ns2__newServerResponse->return_;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns2__updateServer(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *infoServer, char **return_)
{	struct ns2__updateServer soap_tmp_ns2__updateServer;
	struct ns2__updateServerResponse *soap_tmp_ns2__updateServerResponse;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://dcim.vng.com.vn:443/APIServer/server.php";
	if (soap_action == NULL)
		soap_action = "https://dcim.vng.com.vn/APIServer/server.php/updateServer";
	soap_begin(soap);
	soap->encodingStyle = "http://schemas.xmlsoap.org/soap/encoding/";
	soap_tmp_ns2__updateServer.infoServer = infoServer;
	soap_set_version(soap, 1); /* SOAP1.1 */
	soap_serializeheader(soap);
	soap_serialize_ns2__updateServer(soap, &soap_tmp_ns2__updateServer);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns2__updateServer(soap, &soap_tmp_ns2__updateServer, "ns2:updateServer", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns2__updateServer(soap, &soap_tmp_ns2__updateServer, "ns2:updateServer", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!return_)
		return soap_closesock(soap);
	*return_ = NULL;
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	soap_tmp_ns2__updateServerResponse = soap_get_ns2__updateServerResponse(soap, NULL, "", "");
	if (!soap_tmp_ns2__updateServerResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (return_ && soap_tmp_ns2__updateServerResponse->return_)
		*return_ = *soap_tmp_ns2__updateServerResponse->return_;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns2__removeServer(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *serialNumber, char **return_)
{	struct ns2__removeServer soap_tmp_ns2__removeServer;
	struct ns2__removeServerResponse *soap_tmp_ns2__removeServerResponse;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://dcim.vng.com.vn:443/APIServer/server.php";
	if (soap_action == NULL)
		soap_action = "https://dcim.vng.com.vn/APIServer/server.php/removeServer";
	soap_begin(soap);
	soap->encodingStyle = "http://schemas.xmlsoap.org/soap/encoding/";
	soap_tmp_ns2__removeServer.serialNumber = serialNumber;
	soap_set_version(soap, 1); /* SOAP1.1 */
	soap_serializeheader(soap);
	soap_serialize_ns2__removeServer(soap, &soap_tmp_ns2__removeServer);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_ns2__removeServer(soap, &soap_tmp_ns2__removeServer, "ns2:removeServer", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_ns2__removeServer(soap, &soap_tmp_ns2__removeServer, "ns2:removeServer", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!return_)
		return soap_closesock(soap);
	*return_ = NULL;
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	if (soap_recv_fault(soap, 1))
		return soap->error;
	soap_tmp_ns2__removeServerResponse = soap_get_ns2__removeServerResponse(soap, NULL, "", "");
	if (!soap_tmp_ns2__removeServerResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (return_ && soap_tmp_ns2__removeServerResponse->return_)
		*return_ = *soap_tmp_ns2__removeServerResponse->return_;
	return soap_closesock(soap);
}

#ifdef __cplusplus
}
#endif

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.c */
