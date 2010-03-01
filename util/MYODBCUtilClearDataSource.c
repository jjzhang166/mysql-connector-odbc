/* Copyright (c) 2004, 2010, Oracle and/or its affiliates. All rights reserved.

   The MySQL Connector/ODBC is licensed under the terms of the
   GPL, like most MySQL Connectors. There are special exceptions
   to the terms and conditions of the GPL as it is applied to
   this software, see the FLOSS License Exception available on
   mysql.com.

   This program is free software; you can redistribute it and/or modify
   it under the terms of version 2 of the GNU General Public License as
   published by the Free Software Foundation.

   There are special exceptions to the terms and conditions of the GPL as it
   is applied to this software. View the full text of the exception in file
   EXCEPTIONS in the directory of this software distribution.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

#include "MYODBCUtil.h"

/*!
  \brief    Reinitializes MYODBCUTIL_DATASOURCE.

  \note     Does NOT (read; MUST NOT) reinit pszDriverFileName, pszDRIVER, 
            nMode, nConnect, and nPrompt.
  
*/  

void MYODBCUtilClearDataSource( MYODBCUTIL_DATASOURCE *pDataSource )
{
    if ( !pDataSource )
        return;

    if ( pDataSource->pszDATABASE )
    {
		_global_free( pDataSource->pszDATABASE );
        pDataSource->pszDATABASE = NULL;
    }
    if ( pDataSource->pszDESCRIPTION )
    {
        _global_free( pDataSource->pszDESCRIPTION );
        pDataSource->pszDESCRIPTION = NULL;
    }
    if ( pDataSource->pszDSN )
    {
        _global_free( pDataSource->pszDSN );
        pDataSource->pszDSN = NULL;
    }
    if ( pDataSource->pszOPTION )
    {
        _global_free( pDataSource->pszOPTION );
        pDataSource->pszOPTION = NULL;
    }
    if ( pDataSource->pszPASSWORD )
    {
        _global_free( pDataSource->pszPASSWORD );
        pDataSource->pszPASSWORD = NULL;
    }
    if ( pDataSource->pszPORT )
    {
        _global_free( pDataSource->pszPORT );
        pDataSource->pszPORT = NULL;
    }
    if ( pDataSource->pszSERVER )
    {
        _global_free( pDataSource->pszSERVER );
        pDataSource->pszSERVER = NULL;
    }
    if ( pDataSource->pszSOCKET )
    {
        _global_free( pDataSource->pszSOCKET );
        pDataSource->pszSOCKET = NULL;
    }
    if ( pDataSource->pszSTMT )
    {
        _global_free( pDataSource->pszSTMT );
        pDataSource->pszSTMT = NULL;
    }
    if ( pDataSource->pszUSER )
    {
        _global_free( pDataSource->pszUSER );
        pDataSource->pszUSER = NULL;
    }
    if ( pDataSource->pszREADTIMEOUT )
    {
        _global_free( pDataSource->pszREADTIMEOUT );
        pDataSource->pszREADTIMEOUT = NULL;
    }
    if ( pDataSource->pszWRITETIMEOUT )
    {
        _global_free( pDataSource->pszWRITETIMEOUT );
        pDataSource->pszWRITETIMEOUT = NULL;
    }

	if( pDataSource->pszSSLCA)
	{
		_global_free (pDataSource->pszSSLCA);
		pDataSource->pszSSLCA = NULL;
	}
	if( pDataSource->pszSSLCAPATH)
	{
		_global_free (pDataSource->pszSSLCAPATH);
		pDataSource->pszSSLCAPATH = NULL;
	}
	if( pDataSource->pszSSLCERT)
	{
		_global_free (pDataSource->pszSSLCERT);
		pDataSource->pszSSLCERT = NULL;
	}
	if( pDataSource->pszSSLCIPHER)
	{
		_global_free (pDataSource->pszSSLCIPHER);
		pDataSource->pszSSLCIPHER = NULL;
	}
    if( pDataSource->pszSSLVERIFY)
    {
        _global_free (pDataSource->pszSSLVERIFY);
        pDataSource->pszSSLVERIFY = NULL;
    }
	if( pDataSource->pszSSLKEY)
	{
		_global_free (pDataSource->pszSSLKEY);
		pDataSource->pszSSLKEY = NULL;
	}
	if (pDataSource->pszCHARSET)
	{
          _global_free(pDataSource->pszCHARSET);
          pDataSource->pszCHARSET= NULL;
	}

  pDataSource->bINTERACTIVE= FALSE;
}
