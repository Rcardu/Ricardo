#line 1 "httpclient_parser.rl"
/**
*
* Copyright (c) 2010, Zed A. Shaw and Mongrel2 Project Contributors.
* All rights reserved.
* 
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are
* met:
* 
*     * Redistributions of source code must retain the above copyright
*       notice, this list of conditions and the following disclaimer.
* 
*     * Redistributions in binary form must reproduce the above copyright
*       notice, this list of conditions and the following disclaimer in the
*       documentation and/or other materials provided with the distribution.
* 
*     * Neither the name of the Mongrel2 Project, Zed A. Shaw, nor the names
*       of its contributors may be used to endorse or promote products
*       derived from this software without specific prior written
*       permission.
* 
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
* IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
* THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
* PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
* CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
* EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
* PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
* PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "http/httpclient_parser.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "dbg.h"

#define LEN(AT, FPC) (FPC - buffer - parser->AT)
#define MARK(M,FPC) (parser->M = (FPC) - buffer)
#define PTR_TO(F) (buffer + parser->F)


/** machine **/

#line 155 "httpclient_parser.rl"


/** Data **/

#line 54 "httpclient_parser.cc"
static const int httpclient_parser_start = 1;
static const int httpclient_parser_first_final = 120;
static const int httpclient_parser_error = 0;

static const int httpclient_parser_en_main = 1;


#line 158 "httpclient_parser.rl"


int httpclient_parser_init(httpclient_parser *parser)  {
	int cs = 0;
	

#line 66 "httpclient_parser.cc"
	{
		cs = (int)httpclient_parser_start;
	}
	
#line 163 "httpclient_parser.rl"

	
	parser->cs = cs;
	parser->body_start = 0;
	parser->content_len = -1;
	parser->chunked = 0;
	parser->chunks_done = 0;
	parser->mark = 0;
	parser->nread = 0;
	parser->field_len = 0;
	parser->field_start = 0;    
	parser->close = 0;
	
	return(1);
}


/** exec **/
int httpclient_parser_execute(httpclient_parser *parser, const char *buffer, size_t len, size_t off)  
{
	const char *p, *pe;
	int cs = parser->cs;
	
	assert(off <= len && "offset past end of buffer");
	
	p = buffer+off;
	pe = buffer+len;
	
	assert(*pe == '\0' && "pointer does not end on NUL");
	assert(pe - p == (int)len - (int)off && "pointers aren't same distance");
	
	

#line 102 "httpclient_parser.cc"
{
		switch ( cs ) {
			case 1:
			goto st_case_1;
			case 0:
			goto st_case_0;
			case 2:
			goto st_case_2;
			case 120:
			goto st_case_120;
			case 3:
			goto st_case_3;
			case 4:
			goto st_case_4;
			case 5:
			goto st_case_5;
			case 6:
			goto st_case_6;
			case 7:
			goto st_case_7;
			case 8:
			goto st_case_8;
			case 9:
			goto st_case_9;
			case 10:
			goto st_case_10;
			case 11:
			goto st_case_11;
			case 12:
			goto st_case_12;
			case 13:
			goto st_case_13;
			case 14:
			goto st_case_14;
			case 15:
			goto st_case_15;
			case 16:
			goto st_case_16;
			case 17:
			goto st_case_17;
			case 18:
			goto st_case_18;
			case 19:
			goto st_case_19;
			case 20:
			goto st_case_20;
			case 21:
			goto st_case_21;
			case 22:
			goto st_case_22;
			case 23:
			goto st_case_23;
			case 24:
			goto st_case_24;
			case 25:
			goto st_case_25;
			case 26:
			goto st_case_26;
			case 27:
			goto st_case_27;
			case 28:
			goto st_case_28;
			case 29:
			goto st_case_29;
			case 30:
			goto st_case_30;
			case 31:
			goto st_case_31;
			case 32:
			goto st_case_32;
			case 33:
			goto st_case_33;
			case 34:
			goto st_case_34;
			case 35:
			goto st_case_35;
			case 36:
			goto st_case_36;
			case 37:
			goto st_case_37;
			case 38:
			goto st_case_38;
			case 39:
			goto st_case_39;
			case 40:
			goto st_case_40;
			case 41:
			goto st_case_41;
			case 42:
			goto st_case_42;
			case 43:
			goto st_case_43;
			case 44:
			goto st_case_44;
			case 45:
			goto st_case_45;
			case 46:
			goto st_case_46;
			case 47:
			goto st_case_47;
			case 48:
			goto st_case_48;
			case 49:
			goto st_case_49;
			case 50:
			goto st_case_50;
			case 51:
			goto st_case_51;
			case 52:
			goto st_case_52;
			case 53:
			goto st_case_53;
			case 54:
			goto st_case_54;
			case 55:
			goto st_case_55;
			case 56:
			goto st_case_56;
			case 57:
			goto st_case_57;
			case 58:
			goto st_case_58;
			case 59:
			goto st_case_59;
			case 60:
			goto st_case_60;
			case 61:
			goto st_case_61;
			case 62:
			goto st_case_62;
			case 63:
			goto st_case_63;
			case 64:
			goto st_case_64;
			case 65:
			goto st_case_65;
			case 66:
			goto st_case_66;
			case 67:
			goto st_case_67;
			case 68:
			goto st_case_68;
			case 69:
			goto st_case_69;
			case 70:
			goto st_case_70;
			case 71:
			goto st_case_71;
			case 121:
			goto st_case_121;
			case 72:
			goto st_case_72;
			case 73:
			goto st_case_73;
			case 74:
			goto st_case_74;
			case 75:
			goto st_case_75;
			case 76:
			goto st_case_76;
			case 77:
			goto st_case_77;
			case 78:
			goto st_case_78;
			case 79:
			goto st_case_79;
			case 80:
			goto st_case_80;
			case 81:
			goto st_case_81;
			case 82:
			goto st_case_82;
			case 83:
			goto st_case_83;
			case 84:
			goto st_case_84;
			case 85:
			goto st_case_85;
			case 86:
			goto st_case_86;
			case 87:
			goto st_case_87;
			case 88:
			goto st_case_88;
			case 122:
			goto st_case_122;
			case 89:
			goto st_case_89;
			case 90:
			goto st_case_90;
			case 91:
			goto st_case_91;
			case 92:
			goto st_case_92;
			case 93:
			goto st_case_93;
			case 94:
			goto st_case_94;
			case 95:
			goto st_case_95;
			case 96:
			goto st_case_96;
			case 97:
			goto st_case_97;
			case 98:
			goto st_case_98;
			case 99:
			goto st_case_99;
			case 100:
			goto st_case_100;
			case 101:
			goto st_case_101;
			case 102:
			goto st_case_102;
			case 103:
			goto st_case_103;
			case 104:
			goto st_case_104;
			case 105:
			goto st_case_105;
			case 106:
			goto st_case_106;
			case 107:
			goto st_case_107;
			case 108:
			goto st_case_108;
			case 109:
			goto st_case_109;
			case 110:
			goto st_case_110;
			case 111:
			goto st_case_111;
			case 112:
			goto st_case_112;
			case 113:
			goto st_case_113;
			case 114:
			goto st_case_114;
			case 115:
			goto st_case_115;
			case 123:
			goto st_case_123;
			case 116:
			goto st_case_116;
			case 117:
			goto st_case_117;
			case 118:
			goto st_case_118;
			case 119:
			goto st_case_119;
		}
		p+= 1;
		st_case_1:
		if ( p == pe )
			goto _out1;
		if ( ( (*( p))) == 72 ) {
			goto _ctr3;
		}
		if ( ( (*( p))) < 65 ) {
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto _ctr2;
			}
		} else if ( ( (*( p))) > 70 ) {
			if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
				goto _ctr2;
			}
		} else {
			goto _ctr2;
		}
		goto _st0;
		_st0:
		st_case_0:
		goto _out0;
		_ctr2:
			{
#line 52 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 380 "httpclient_parser.cc"

		goto _st2;
		_st2:
		p+= 1;
		st_case_2:
		if ( p == pe )
			goto _out2;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr5;
			}
			case 13: {
				goto _ctr6;
			}
			case 59: {
				goto _ctr7;
			}
		}
		if ( ( (*( p))) < 65 ) {
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto _st2;
			}
		} else if ( ( (*( p))) > 70 ) {
			if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
				goto _st2;
			}
		} else {
			goto _st2;
		}
		goto _st0;
		_ctr5:
			{
#line 93 "httpclient_parser.rl"
			
			parser->chunked = 1;
			parser->content_len = strtol(PTR_TO(mark), NULL, 16);
			parser->chunks_done = parser->content_len <= 0;
			
			if(parser->chunks_done && parser->last_chunk) {
				parser->last_chunk(parser->data, PTR_TO(mark), LEN(mark, p));
			} else if(parser->chunk_size != NULL) {
				parser->chunk_size(parser->data, PTR_TO(mark), LEN(mark, p));
			} // else skip it
		}
		
#line 425 "httpclient_parser.cc"

			{
#line 109 "httpclient_parser.rl"
			
			parser->body_start = p - buffer + 1; 
			if(parser->header_done != NULL)
			parser->header_done(parser->data, p + 1, pe - p - 1);
			{p+= 1; cs = 120; goto _out;}
		}
		
#line 435 "httpclient_parser.cc"

		goto _st120;
		_ctr9:
			{
#line 109 "httpclient_parser.rl"
			
			parser->body_start = p - buffer + 1; 
			if(parser->header_done != NULL)
			parser->header_done(parser->data, p + 1, pe - p - 1);
			{p+= 1; cs = 120; goto _out;}
		}
		
#line 447 "httpclient_parser.cc"

		goto _st120;
		_ctr13:
			{
#line 56 "httpclient_parser.rl"
			
			parser->field_len = LEN(field_start, p);
		}
		
#line 456 "httpclient_parser.cc"

			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 461 "httpclient_parser.cc"

			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 470 "httpclient_parser.cc"

			{
#line 109 "httpclient_parser.rl"
			
			parser->body_start = p - buffer + 1; 
			if(parser->header_done != NULL)
			parser->header_done(parser->data, p + 1, pe - p - 1);
			{p+= 1; cs = 120; goto _out;}
		}
		
#line 480 "httpclient_parser.cc"

		goto _st120;
		_ctr20:
			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 491 "httpclient_parser.cc"

			{
#line 109 "httpclient_parser.rl"
			
			parser->body_start = p - buffer + 1; 
			if(parser->header_done != NULL)
			parser->header_done(parser->data, p + 1, pe - p - 1);
			{p+= 1; cs = 120; goto _out;}
		}
		
#line 501 "httpclient_parser.cc"

		goto _st120;
		_ctr85:
			{
#line 66 "httpclient_parser.rl"
			
			parser->close = 1;
		}
		
#line 510 "httpclient_parser.cc"

			{
#line 109 "httpclient_parser.rl"
			
			parser->body_start = p - buffer + 1; 
			if(parser->header_done != NULL)
			parser->header_done(parser->data, p + 1, pe - p - 1);
			{p+= 1; cs = 120; goto _out;}
		}
		
#line 520 "httpclient_parser.cc"

		goto _st120;
		_st120:
		p+= 1;
		st_case_120:
		if ( p == pe )
			goto _out120;
		goto _st0;
		_ctr6:
			{
#line 93 "httpclient_parser.rl"
			
			parser->chunked = 1;
			parser->content_len = strtol(PTR_TO(mark), NULL, 16);
			parser->chunks_done = parser->content_len <= 0;
			
			if(parser->chunks_done && parser->last_chunk) {
				parser->last_chunk(parser->data, PTR_TO(mark), LEN(mark, p));
			} else if(parser->chunk_size != NULL) {
				parser->chunk_size(parser->data, PTR_TO(mark), LEN(mark, p));
			} // else skip it
		}
		
#line 543 "httpclient_parser.cc"

		goto _st3;
		_ctr14:
			{
#line 56 "httpclient_parser.rl"
			
			parser->field_len = LEN(field_start, p);
		}
		
#line 552 "httpclient_parser.cc"

			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 557 "httpclient_parser.cc"

			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 566 "httpclient_parser.cc"

		goto _st3;
		_ctr21:
			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 577 "httpclient_parser.cc"

		goto _st3;
		_ctr86:
			{
#line 66 "httpclient_parser.rl"
			
			parser->close = 1;
		}
		
#line 586 "httpclient_parser.cc"

		goto _st3;
		_st3:
		p+= 1;
		st_case_3:
		if ( p == pe )
			goto _out3;
		if ( ( (*( p))) == 10 ) {
			goto _ctr9;
		}
		goto _st0;
		_ctr7:
			{
#line 93 "httpclient_parser.rl"
			
			parser->chunked = 1;
			parser->content_len = strtol(PTR_TO(mark), NULL, 16);
			parser->chunks_done = parser->content_len <= 0;
			
			if(parser->chunks_done && parser->last_chunk) {
				parser->last_chunk(parser->data, PTR_TO(mark), LEN(mark, p));
			} else if(parser->chunk_size != NULL) {
				parser->chunk_size(parser->data, PTR_TO(mark), LEN(mark, p));
			} // else skip it
		}
		
#line 612 "httpclient_parser.cc"

		goto _st4;
		_ctr15:
			{
#line 56 "httpclient_parser.rl"
			
			parser->field_len = LEN(field_start, p);
		}
		
#line 621 "httpclient_parser.cc"

			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 626 "httpclient_parser.cc"

			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 635 "httpclient_parser.cc"

		goto _st4;
		_ctr22:
			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 646 "httpclient_parser.cc"

		goto _st4;
		_st4:
		p+= 1;
		st_case_4:
		if ( p == pe )
			goto _out4;
		switch( ( (*( p))) ) {
			case 33: {
				goto _ctr11;
			}
			case 124: {
				goto _ctr11;
			}
			case 126: {
				goto _ctr11;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _ctr11;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _ctr11;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _ctr11;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _ctr11;
				}
			} else {
				goto _ctr11;
			}
		} else {
			goto _ctr11;
		}
		goto _st0;
		_ctr11:
			{
#line 54 "httpclient_parser.rl"
			MARK(field_start, p); }
		
#line 693 "httpclient_parser.cc"

		goto _st5;
		_st5:
		p+= 1;
		st_case_5:
		if ( p == pe )
			goto _out5;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr13;
			}
			case 13: {
				goto _ctr14;
			}
			case 33: {
				goto _st5;
			}
			case 59: {
				goto _ctr15;
			}
			case 61: {
				goto _ctr16;
			}
			case 124: {
				goto _st5;
			}
			case 126: {
				goto _st5;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st5;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st5;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st5;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st5;
				}
			} else {
				goto _st5;
			}
		} else {
			goto _st5;
		}
		goto _st0;
		_ctr16:
			{
#line 56 "httpclient_parser.rl"
			
			parser->field_len = LEN(field_start, p);
		}
		
#line 754 "httpclient_parser.cc"

			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 759 "httpclient_parser.cc"

		goto _st6;
		_st6:
		p+= 1;
		st_case_6:
		if ( p == pe )
			goto _out6;
		switch( ( (*( p))) ) {
			case 33: {
				goto _ctr18;
			}
			case 124: {
				goto _ctr18;
			}
			case 126: {
				goto _ctr18;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _ctr18;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _ctr18;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _ctr18;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _ctr18;
				}
			} else {
				goto _ctr18;
			}
		} else {
			goto _ctr18;
		}
		goto _st0;
		_ctr18:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 806 "httpclient_parser.cc"

		goto _st7;
		_st7:
		p+= 1;
		st_case_7:
		if ( p == pe )
			goto _out7;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr20;
			}
			case 13: {
				goto _ctr21;
			}
			case 33: {
				goto _st7;
			}
			case 59: {
				goto _ctr22;
			}
			case 124: {
				goto _st7;
			}
			case 126: {
				goto _st7;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st7;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st7;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st7;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st7;
				}
			} else {
				goto _st7;
			}
		} else {
			goto _st7;
		}
		goto _st0;
		_ctr3:
			{
#line 52 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 862 "httpclient_parser.cc"

		goto _st8;
		_st8:
		p+= 1;
		st_case_8:
		if ( p == pe )
			goto _out8;
		if ( ( (*( p))) == 84 ) {
			goto _st9;
		}
		goto _st0;
		_st9:
		p+= 1;
		st_case_9:
		if ( p == pe )
			goto _out9;
		if ( ( (*( p))) == 84 ) {
			goto _st10;
		}
		goto _st0;
		_st10:
		p+= 1;
		st_case_10:
		if ( p == pe )
			goto _out10;
		if ( ( (*( p))) == 80 ) {
			goto _st11;
		}
		goto _st0;
		_st11:
		p+= 1;
		st_case_11:
		if ( p == pe )
			goto _out11;
		if ( ( (*( p))) == 47 ) {
			goto _st12;
		}
		goto _st0;
		_st12:
		p+= 1;
		st_case_12:
		if ( p == pe )
			goto _out12;
		if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
			goto _st13;
		}
		goto _st0;
		_st13:
		p+= 1;
		st_case_13:
		if ( p == pe )
			goto _out13;
		if ( ( (*( p))) == 46 ) {
			goto _st14;
		}
		if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
			goto _st13;
		}
		goto _st0;
		_st14:
		p+= 1;
		st_case_14:
		if ( p == pe )
			goto _out14;
		if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
			goto _st15;
		}
		goto _st0;
		_st15:
		p+= 1;
		st_case_15:
		if ( p == pe )
			goto _out15;
		if ( ( (*( p))) == 32 ) {
			goto _ctr31;
		}
		if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
			goto _st15;
		}
		goto _st0;
		_ctr31:
			{
#line 88 "httpclient_parser.rl"
			
			if(parser->http_version != NULL)
			parser->http_version(parser->data, PTR_TO(mark), LEN(mark, p));
		}
		
#line 950 "httpclient_parser.cc"

		goto _st16;
		_st16:
		p+= 1;
		st_case_16:
		if ( p == pe )
			goto _out16;
		if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
			goto _ctr33;
		}
		goto _st0;
		_ctr33:
			{
#line 52 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 966 "httpclient_parser.cc"

		goto _st17;
		_st17:
		p+= 1;
		st_case_17:
		if ( p == pe )
			goto _out17;
		if ( ( (*( p))) == 32 ) {
			goto _ctr35;
		}
		if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
			goto _st17;
		}
		goto _st0;
		_ctr35:
			{
#line 81 "httpclient_parser.rl"
			
			parser->status = strtol(PTR_TO(mark), NULL, 10);
			
			if(parser->status_code != NULL)
			parser->status_code(parser->data, PTR_TO(mark), LEN(mark, p));
		}
		
#line 990 "httpclient_parser.cc"

		goto _st18;
		_st18:
		p+= 1;
		st_case_18:
		if ( p == pe )
			goto _out18;
		if ( ( (*( p))) == 10 ) {
			goto _st0;
		}
		goto _ctr37;
		_ctr37:
			{
#line 52 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 1006 "httpclient_parser.cc"

		goto _st19;
		_st19:
		p+= 1;
		st_case_19:
		if ( p == pe )
			goto _out19;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr39;
			}
			case 13: {
				goto _ctr40;
			}
		}
		goto _st19;
		_ctr53:
			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 1031 "httpclient_parser.cc"

		goto _st20;
		_ctr39:
			{
#line 76 "httpclient_parser.rl"
			
			if(parser->reason_phrase != NULL)
			parser->reason_phrase(parser->data, PTR_TO(mark), LEN(mark, p));
		}
		
#line 1041 "httpclient_parser.cc"

		goto _st20;
		_ctr50:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 1048 "httpclient_parser.cc"

			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 1057 "httpclient_parser.cc"

		goto _st20;
		_ctr126:
			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 1068 "httpclient_parser.cc"

			{
#line 105 "httpclient_parser.rl"
			
			parser->chunked = 1;
		}
		
#line 1075 "httpclient_parser.cc"

		goto _st20;
		_ctr129:
			{
#line 105 "httpclient_parser.rl"
			
			parser->chunked = 1;
		}
		
#line 1084 "httpclient_parser.cc"

		goto _st20;
		_ctr181:
			{
#line 62 "httpclient_parser.rl"
			
			parser->content_len = strtol(PTR_TO(mark), NULL, 10);
		}
		
#line 1093 "httpclient_parser.cc"

			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 1102 "httpclient_parser.cc"

		goto _st20;
		_st20:
		p+= 1;
		st_case_20:
		if ( p == pe )
			goto _out20;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr9;
			}
			case 13: {
				goto _st3;
			}
			case 33: {
				goto _ctr42;
			}
			case 67: {
				goto _ctr43;
			}
			case 84: {
				goto _ctr44;
			}
			case 99: {
				goto _ctr43;
			}
			case 116: {
				goto _ctr44;
			}
			case 124: {
				goto _ctr42;
			}
			case 126: {
				goto _ctr42;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _ctr42;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _ctr42;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _ctr42;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _ctr42;
				}
			} else {
				goto _ctr42;
			}
		} else {
			goto _ctr42;
		}
		goto _st0;
		_ctr42:
			{
#line 54 "httpclient_parser.rl"
			MARK(field_start, p); }
		
#line 1167 "httpclient_parser.cc"

		goto _st21;
		_ctr87:
			{
#line 66 "httpclient_parser.rl"
			
			parser->close = 1;
		}
		
#line 1176 "httpclient_parser.cc"

			{
#line 54 "httpclient_parser.rl"
			MARK(field_start, p); }
		
#line 1181 "httpclient_parser.cc"

		goto _st21;
		_st21:
		p+= 1;
		st_case_21:
		if ( p == pe )
			goto _out21;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_ctr49:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 1231 "httpclient_parser.cc"

		goto _st22;
		_ctr46:
			{
#line 56 "httpclient_parser.rl"
			
			parser->field_len = LEN(field_start, p);
		}
		
#line 1240 "httpclient_parser.cc"

		goto _st22;
		_st22:
		p+= 1;
		st_case_22:
		if ( p == pe )
			goto _out22;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr50;
			}
			case 13: {
				goto _ctr51;
			}
			case 32: {
				goto _ctr49;
			}
		}
		if ( 9 <= ( (*( p))) && ( (*( p))) <= 12 ) {
			goto _ctr49;
		}
		goto _ctr48;
		_ctr48:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 1267 "httpclient_parser.cc"

		goto _st23;
		_st23:
		p+= 1;
		st_case_23:
		if ( p == pe )
			goto _out23;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr53;
			}
			case 13: {
				goto _ctr54;
			}
		}
		goto _st23;
		_ctr54:
			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 1292 "httpclient_parser.cc"

		goto _st24;
		_ctr40:
			{
#line 76 "httpclient_parser.rl"
			
			if(parser->reason_phrase != NULL)
			parser->reason_phrase(parser->data, PTR_TO(mark), LEN(mark, p));
		}
		
#line 1302 "httpclient_parser.cc"

		goto _st24;
		_ctr51:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 1309 "httpclient_parser.cc"

			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 1318 "httpclient_parser.cc"

		goto _st24;
		_ctr182:
			{
#line 62 "httpclient_parser.rl"
			
			parser->content_len = strtol(PTR_TO(mark), NULL, 10);
		}
		
#line 1327 "httpclient_parser.cc"

			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 1336 "httpclient_parser.cc"

		goto _st24;
		_st24:
		p+= 1;
		st_case_24:
		if ( p == pe )
			goto _out24;
		if ( ( (*( p))) == 10 ) {
			goto _st20;
		}
		goto _st0;
		_ctr43:
			{
#line 54 "httpclient_parser.rl"
			MARK(field_start, p); }
		
#line 1352 "httpclient_parser.cc"

		goto _st25;
		_ctr88:
			{
#line 66 "httpclient_parser.rl"
			
			parser->close = 1;
		}
		
#line 1361 "httpclient_parser.cc"

			{
#line 54 "httpclient_parser.rl"
			MARK(field_start, p); }
		
#line 1366 "httpclient_parser.cc"

		goto _st25;
		_st25:
		p+= 1;
		st_case_25:
		if ( p == pe )
			goto _out25;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 79: {
				goto _st26;
			}
			case 111: {
				goto _st26;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st26:
		p+= 1;
		st_case_26:
		if ( p == pe )
			goto _out26;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 78: {
				goto _st27;
			}
			case 110: {
				goto _st27;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st27:
		p+= 1;
		st_case_27:
		if ( p == pe )
			goto _out27;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 78: {
				goto _st28;
			}
			case 84: {
				goto _st101;
			}
			case 110: {
				goto _st28;
			}
			case 116: {
				goto _st101;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st28:
		p+= 1;
		st_case_28:
		if ( p == pe )
			goto _out28;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 69: {
				goto _st29;
			}
			case 101: {
				goto _st29;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st29:
		p+= 1;
		st_case_29:
		if ( p == pe )
			goto _out29;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 67: {
				goto _st30;
			}
			case 99: {
				goto _st30;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st30:
		p+= 1;
		st_case_30:
		if ( p == pe )
			goto _out30;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 84: {
				goto _st31;
			}
			case 116: {
				goto _st31;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st31:
		p+= 1;
		st_case_31:
		if ( p == pe )
			goto _out31;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 73: {
				goto _st32;
			}
			case 105: {
				goto _st32;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st32:
		p+= 1;
		st_case_32:
		if ( p == pe )
			goto _out32;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 79: {
				goto _st33;
			}
			case 111: {
				goto _st33;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st33:
		p+= 1;
		st_case_33:
		if ( p == pe )
			goto _out33;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 78: {
				goto _st34;
			}
			case 110: {
				goto _st34;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st34:
		p+= 1;
		st_case_34:
		if ( p == pe )
			goto _out34;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr67;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_ctr69:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 1863 "httpclient_parser.cc"

		goto _st35;
		_ctr67:
			{
#line 56 "httpclient_parser.rl"
			
			parser->field_len = LEN(field_start, p);
		}
		
#line 1872 "httpclient_parser.cc"

		goto _st35;
		_st35:
		p+= 1;
		st_case_35:
		if ( p == pe )
			goto _out35;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr70;
			}
			case 13: {
				goto _ctr71;
			}
			case 32: {
				goto _ctr69;
			}
			case 67: {
				goto _ctr72;
			}
			case 99: {
				goto _ctr72;
			}
		}
		if ( 9 <= ( (*( p))) && ( (*( p))) <= 12 ) {
			goto _ctr69;
		}
		goto _ctr48;
		_ctr70:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 1905 "httpclient_parser.cc"

			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 1914 "httpclient_parser.cc"

		goto _st36;
		_st36:
		p+= 1;
		st_case_36:
		if ( p == pe )
			goto _out36;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr75;
			}
			case 13: {
				goto _st89;
			}
			case 32: {
				goto _st37;
			}
			case 33: {
				goto _ctr42;
			}
			case 67: {
				goto _ctr77;
			}
			case 84: {
				goto _ctr44;
			}
			case 99: {
				goto _ctr77;
			}
			case 116: {
				goto _ctr44;
			}
			case 124: {
				goto _ctr42;
			}
			case 126: {
				goto _ctr42;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) < 35 ) {
				if ( 9 <= ( (*( p))) && ( (*( p))) <= 12 ) {
					goto _st37;
				}
			} else if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _ctr42;
				}
			} else {
				goto _ctr42;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _ctr42;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _ctr42;
				}
			} else {
				goto _ctr42;
			}
		} else {
			goto _ctr42;
		}
		goto _st0;
		_st37:
		p+= 1;
		st_case_37:
		if ( p == pe )
			goto _out37;
		switch( ( (*( p))) ) {
			case 32: {
				goto _st37;
			}
			case 67: {
				goto _st38;
			}
			case 99: {
				goto _st38;
			}
		}
		if ( 9 <= ( (*( p))) && ( (*( p))) <= 13 ) {
			goto _st37;
		}
		goto _st0;
		_st38:
		p+= 1;
		st_case_38:
		if ( p == pe )
			goto _out38;
		switch( ( (*( p))) ) {
			case 76: {
				goto _st39;
			}
			case 108: {
				goto _st39;
			}
		}
		goto _st0;
		_st39:
		p+= 1;
		st_case_39:
		if ( p == pe )
			goto _out39;
		switch( ( (*( p))) ) {
			case 79: {
				goto _st40;
			}
			case 111: {
				goto _st40;
			}
		}
		goto _st0;
		_st40:
		p+= 1;
		st_case_40:
		if ( p == pe )
			goto _out40;
		switch( ( (*( p))) ) {
			case 83: {
				goto _st41;
			}
			case 115: {
				goto _st41;
			}
		}
		goto _st0;
		_st41:
		p+= 1;
		st_case_41:
		if ( p == pe )
			goto _out41;
		switch( ( (*( p))) ) {
			case 69: {
				goto _st42;
			}
			case 101: {
				goto _st42;
			}
		}
		goto _st0;
		_st42:
		p+= 1;
		st_case_42:
		if ( p == pe )
			goto _out42;
		switch( ( (*( p))) ) {
			case 10: {
				goto _st43;
			}
			case 13: {
				goto _st88;
			}
		}
		goto _st0;
		_ctr156:
			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 2080 "httpclient_parser.cc"

		goto _st43;
		_st43:
		p+= 1;
		st_case_43:
		if ( p == pe )
			goto _out43;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr85;
			}
			case 13: {
				goto _ctr86;
			}
			case 33: {
				goto _ctr87;
			}
			case 67: {
				goto _ctr88;
			}
			case 84: {
				goto _ctr89;
			}
			case 99: {
				goto _ctr88;
			}
			case 116: {
				goto _ctr89;
			}
			case 124: {
				goto _ctr87;
			}
			case 126: {
				goto _ctr87;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _ctr87;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _ctr87;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _ctr87;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _ctr87;
				}
			} else {
				goto _ctr87;
			}
		} else {
			goto _ctr87;
		}
		goto _st0;
		_ctr44:
			{
#line 54 "httpclient_parser.rl"
			MARK(field_start, p); }
		
#line 2145 "httpclient_parser.cc"

		goto _st44;
		_ctr89:
			{
#line 66 "httpclient_parser.rl"
			
			parser->close = 1;
		}
		
#line 2154 "httpclient_parser.cc"

			{
#line 54 "httpclient_parser.rl"
			MARK(field_start, p); }
		
#line 2159 "httpclient_parser.cc"

		goto _st44;
		_st44:
		p+= 1;
		st_case_44:
		if ( p == pe )
			goto _out44;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 82: {
				goto _st45;
			}
			case 114: {
				goto _st45;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st45:
		p+= 1;
		st_case_45:
		if ( p == pe )
			goto _out45;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 65: {
				goto _st46;
			}
			case 97: {
				goto _st46;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 66 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st46:
		p+= 1;
		st_case_46:
		if ( p == pe )
			goto _out46;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 78: {
				goto _st47;
			}
			case 110: {
				goto _st47;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st47:
		p+= 1;
		st_case_47:
		if ( p == pe )
			goto _out47;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 83: {
				goto _st48;
			}
			case 115: {
				goto _st48;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st48:
		p+= 1;
		st_case_48:
		if ( p == pe )
			goto _out48;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 70: {
				goto _st49;
			}
			case 102: {
				goto _st49;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st49:
		p+= 1;
		st_case_49:
		if ( p == pe )
			goto _out49;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 69: {
				goto _st50;
			}
			case 101: {
				goto _st50;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st50:
		p+= 1;
		st_case_50:
		if ( p == pe )
			goto _out50;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 82: {
				goto _st51;
			}
			case 114: {
				goto _st51;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st51:
		p+= 1;
		st_case_51:
		if ( p == pe )
			goto _out51;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 45: {
				goto _st52;
			}
			case 46: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 48 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 57 ) {
			if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 65 ) {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st52:
		p+= 1;
		st_case_52:
		if ( p == pe )
			goto _out52;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 69: {
				goto _st53;
			}
			case 101: {
				goto _st53;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st53:
		p+= 1;
		st_case_53:
		if ( p == pe )
			goto _out53;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 78: {
				goto _st54;
			}
			case 110: {
				goto _st54;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st54:
		p+= 1;
		st_case_54:
		if ( p == pe )
			goto _out54;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 67: {
				goto _st55;
			}
			case 99: {
				goto _st55;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st55:
		p+= 1;
		st_case_55:
		if ( p == pe )
			goto _out55;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 79: {
				goto _st56;
			}
			case 111: {
				goto _st56;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st56:
		p+= 1;
		st_case_56:
		if ( p == pe )
			goto _out56;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 68: {
				goto _st57;
			}
			case 100: {
				goto _st57;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st57:
		p+= 1;
		st_case_57:
		if ( p == pe )
			goto _out57;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 73: {
				goto _st58;
			}
			case 105: {
				goto _st58;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st58:
		p+= 1;
		st_case_58:
		if ( p == pe )
			goto _out58;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 78: {
				goto _st59;
			}
			case 110: {
				goto _st59;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st59:
		p+= 1;
		st_case_59:
		if ( p == pe )
			goto _out59;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 71: {
				goto _st60;
			}
			case 103: {
				goto _st60;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st60:
		p+= 1;
		st_case_60:
		if ( p == pe )
			goto _out60;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr107;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_ctr109:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 2989 "httpclient_parser.cc"

		goto _st61;
		_ctr107:
			{
#line 56 "httpclient_parser.rl"
			
			parser->field_len = LEN(field_start, p);
		}
		
#line 2998 "httpclient_parser.cc"

		goto _st61;
		_st61:
		p+= 1;
		st_case_61:
		if ( p == pe )
			goto _out61;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr110;
			}
			case 13: {
				goto _ctr111;
			}
			case 32: {
				goto _ctr109;
			}
			case 67: {
				goto _ctr112;
			}
			case 99: {
				goto _ctr112;
			}
		}
		if ( 9 <= ( (*( p))) && ( (*( p))) <= 12 ) {
			goto _ctr109;
		}
		goto _ctr48;
		_ctr110:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 3031 "httpclient_parser.cc"

			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 3040 "httpclient_parser.cc"

		goto _st62;
		_st62:
		p+= 1;
		st_case_62:
		if ( p == pe )
			goto _out62;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr115;
			}
			case 13: {
				goto _st72;
			}
			case 32: {
				goto _st63;
			}
			case 33: {
				goto _ctr42;
			}
			case 67: {
				goto _ctr117;
			}
			case 84: {
				goto _ctr44;
			}
			case 99: {
				goto _ctr117;
			}
			case 116: {
				goto _ctr44;
			}
			case 124: {
				goto _ctr42;
			}
			case 126: {
				goto _ctr42;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) < 35 ) {
				if ( 9 <= ( (*( p))) && ( (*( p))) <= 12 ) {
					goto _st63;
				}
			} else if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _ctr42;
				}
			} else {
				goto _ctr42;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _ctr42;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _ctr42;
				}
			} else {
				goto _ctr42;
			}
		} else {
			goto _ctr42;
		}
		goto _st0;
		_st63:
		p+= 1;
		st_case_63:
		if ( p == pe )
			goto _out63;
		switch( ( (*( p))) ) {
			case 32: {
				goto _st63;
			}
			case 67: {
				goto _ctr118;
			}
			case 99: {
				goto _ctr118;
			}
		}
		if ( 9 <= ( (*( p))) && ( (*( p))) <= 13 ) {
			goto _st63;
		}
		goto _st0;
		_ctr118:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 3132 "httpclient_parser.cc"

		goto _st64;
		_st64:
		p+= 1;
		st_case_64:
		if ( p == pe )
			goto _out64;
		switch( ( (*( p))) ) {
			case 72: {
				goto _st65;
			}
			case 104: {
				goto _st65;
			}
		}
		goto _st0;
		_st65:
		p+= 1;
		st_case_65:
		if ( p == pe )
			goto _out65;
		switch( ( (*( p))) ) {
			case 85: {
				goto _st66;
			}
			case 117: {
				goto _st66;
			}
		}
		goto _st0;
		_st66:
		p+= 1;
		st_case_66:
		if ( p == pe )
			goto _out66;
		switch( ( (*( p))) ) {
			case 78: {
				goto _st67;
			}
			case 110: {
				goto _st67;
			}
		}
		goto _st0;
		_st67:
		p+= 1;
		st_case_67:
		if ( p == pe )
			goto _out67;
		switch( ( (*( p))) ) {
			case 75: {
				goto _st68;
			}
			case 107: {
				goto _st68;
			}
		}
		goto _st0;
		_st68:
		p+= 1;
		st_case_68:
		if ( p == pe )
			goto _out68;
		switch( ( (*( p))) ) {
			case 69: {
				goto _st69;
			}
			case 101: {
				goto _st69;
			}
		}
		goto _st0;
		_st69:
		p+= 1;
		st_case_69:
		if ( p == pe )
			goto _out69;
		switch( ( (*( p))) ) {
			case 68: {
				goto _st70;
			}
			case 100: {
				goto _st70;
			}
		}
		goto _st0;
		_st70:
		p+= 1;
		st_case_70:
		if ( p == pe )
			goto _out70;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr126;
			}
			case 13: {
				goto _ctr127;
			}
		}
		goto _st0;
		_ctr127:
			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 3241 "httpclient_parser.cc"

		goto _st71;
		_st71:
		p+= 1;
		st_case_71:
		if ( p == pe )
			goto _out71;
		if ( ( (*( p))) == 10 ) {
			goto _ctr129;
		}
		goto _st0;
		_ctr115:
			{
#line 109 "httpclient_parser.rl"
			
			parser->body_start = p - buffer + 1; 
			if(parser->header_done != NULL)
			parser->header_done(parser->data, p + 1, pe - p - 1);
			{p+= 1; cs = 121; goto _out;}
		}
		
#line 3262 "httpclient_parser.cc"

		goto _st121;
		_st121:
		p+= 1;
		st_case_121:
		if ( p == pe )
			goto _out121;
		switch( ( (*( p))) ) {
			case 32: {
				goto _st63;
			}
			case 67: {
				goto _ctr118;
			}
			case 99: {
				goto _ctr118;
			}
		}
		if ( 9 <= ( (*( p))) && ( (*( p))) <= 13 ) {
			goto _st63;
		}
		goto _st0;
		_st72:
		p+= 1;
		st_case_72:
		if ( p == pe )
			goto _out72;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr115;
			}
			case 32: {
				goto _st63;
			}
			case 67: {
				goto _ctr118;
			}
			case 99: {
				goto _ctr118;
			}
		}
		if ( 9 <= ( (*( p))) && ( (*( p))) <= 13 ) {
			goto _st63;
		}
		goto _st0;
		_ctr117:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 3312 "httpclient_parser.cc"

			{
#line 54 "httpclient_parser.rl"
			MARK(field_start, p); }
		
#line 3317 "httpclient_parser.cc"

		goto _st73;
		_st73:
		p+= 1;
		st_case_73:
		if ( p == pe )
			goto _out73;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 72: {
				goto _st74;
			}
			case 79: {
				goto _st26;
			}
			case 104: {
				goto _st74;
			}
			case 111: {
				goto _st26;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st74:
		p+= 1;
		st_case_74:
		if ( p == pe )
			goto _out74;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 85: {
				goto _st75;
			}
			case 117: {
				goto _st75;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st75:
		p+= 1;
		st_case_75:
		if ( p == pe )
			goto _out75;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 78: {
				goto _st76;
			}
			case 110: {
				goto _st76;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st76:
		p+= 1;
		st_case_76:
		if ( p == pe )
			goto _out76;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 75: {
				goto _st77;
			}
			case 107: {
				goto _st77;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st77:
		p+= 1;
		st_case_77:
		if ( p == pe )
			goto _out77;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 69: {
				goto _st78;
			}
			case 101: {
				goto _st78;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st78:
		p+= 1;
		st_case_78:
		if ( p == pe )
			goto _out78;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 68: {
				goto _st79;
			}
			case 100: {
				goto _st79;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st79:
		p+= 1;
		st_case_79:
		if ( p == pe )
			goto _out79;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr126;
			}
			case 13: {
				goto _ctr127;
			}
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_ctr111:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 3673 "httpclient_parser.cc"

			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 3682 "httpclient_parser.cc"

		goto _st80;
		_st80:
		p+= 1;
		st_case_80:
		if ( p == pe )
			goto _out80;
		switch( ( (*( p))) ) {
			case 10: {
				goto _st62;
			}
			case 32: {
				goto _st63;
			}
			case 67: {
				goto _ctr118;
			}
			case 99: {
				goto _ctr118;
			}
		}
		if ( 9 <= ( (*( p))) && ( (*( p))) <= 13 ) {
			goto _st63;
		}
		goto _st0;
		_ctr112:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 3712 "httpclient_parser.cc"

		goto _st81;
		_st81:
		p+= 1;
		st_case_81:
		if ( p == pe )
			goto _out81;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr53;
			}
			case 13: {
				goto _ctr54;
			}
			case 72: {
				goto _st82;
			}
			case 104: {
				goto _st82;
			}
		}
		goto _st23;
		_st82:
		p+= 1;
		st_case_82:
		if ( p == pe )
			goto _out82;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr53;
			}
			case 13: {
				goto _ctr54;
			}
			case 85: {
				goto _st83;
			}
			case 117: {
				goto _st83;
			}
		}
		goto _st23;
		_st83:
		p+= 1;
		st_case_83:
		if ( p == pe )
			goto _out83;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr53;
			}
			case 13: {
				goto _ctr54;
			}
			case 78: {
				goto _st84;
			}
			case 110: {
				goto _st84;
			}
		}
		goto _st23;
		_st84:
		p+= 1;
		st_case_84:
		if ( p == pe )
			goto _out84;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr53;
			}
			case 13: {
				goto _ctr54;
			}
			case 75: {
				goto _st85;
			}
			case 107: {
				goto _st85;
			}
		}
		goto _st23;
		_st85:
		p+= 1;
		st_case_85:
		if ( p == pe )
			goto _out85;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr53;
			}
			case 13: {
				goto _ctr54;
			}
			case 69: {
				goto _st86;
			}
			case 101: {
				goto _st86;
			}
		}
		goto _st23;
		_st86:
		p+= 1;
		st_case_86:
		if ( p == pe )
			goto _out86;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr53;
			}
			case 13: {
				goto _ctr54;
			}
			case 68: {
				goto _st87;
			}
			case 100: {
				goto _st87;
			}
		}
		goto _st23;
		_st87:
		p+= 1;
		st_case_87:
		if ( p == pe )
			goto _out87;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr126;
			}
			case 13: {
				goto _ctr127;
			}
		}
		goto _st23;
		_ctr157:
			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 3857 "httpclient_parser.cc"

		goto _st88;
		_st88:
		p+= 1;
		st_case_88:
		if ( p == pe )
			goto _out88;
		if ( ( (*( p))) == 10 ) {
			goto _st43;
		}
		goto _st0;
		_ctr75:
			{
#line 109 "httpclient_parser.rl"
			
			parser->body_start = p - buffer + 1; 
			if(parser->header_done != NULL)
			parser->header_done(parser->data, p + 1, pe - p - 1);
			{p+= 1; cs = 122; goto _out;}
		}
		
#line 3878 "httpclient_parser.cc"

		goto _st122;
		_st122:
		p+= 1;
		st_case_122:
		if ( p == pe )
			goto _out122;
		switch( ( (*( p))) ) {
			case 32: {
				goto _st37;
			}
			case 67: {
				goto _st38;
			}
			case 99: {
				goto _st38;
			}
		}
		if ( 9 <= ( (*( p))) && ( (*( p))) <= 13 ) {
			goto _st37;
		}
		goto _st0;
		_st89:
		p+= 1;
		st_case_89:
		if ( p == pe )
			goto _out89;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr75;
			}
			case 32: {
				goto _st37;
			}
			case 67: {
				goto _st38;
			}
			case 99: {
				goto _st38;
			}
		}
		if ( 9 <= ( (*( p))) && ( (*( p))) <= 13 ) {
			goto _st37;
		}
		goto _st0;
		_ctr77:
			{
#line 54 "httpclient_parser.rl"
			MARK(field_start, p); }
		
#line 3928 "httpclient_parser.cc"

		goto _st90;
		_st90:
		p+= 1;
		st_case_90:
		if ( p == pe )
			goto _out90;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 76: {
				goto _st91;
			}
			case 79: {
				goto _st26;
			}
			case 108: {
				goto _st91;
			}
			case 111: {
				goto _st26;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st91:
		p+= 1;
		st_case_91:
		if ( p == pe )
			goto _out91;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 79: {
				goto _st92;
			}
			case 111: {
				goto _st92;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st92:
		p+= 1;
		st_case_92:
		if ( p == pe )
			goto _out92;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 83: {
				goto _st93;
			}
			case 115: {
				goto _st93;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st93:
		p+= 1;
		st_case_93:
		if ( p == pe )
			goto _out93;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 69: {
				goto _st94;
			}
			case 101: {
				goto _st94;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st94:
		p+= 1;
		st_case_94:
		if ( p == pe )
			goto _out94;
		switch( ( (*( p))) ) {
			case 10: {
				goto _st43;
			}
			case 13: {
				goto _st88;
			}
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_ctr71:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 4186 "httpclient_parser.cc"

			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 4195 "httpclient_parser.cc"

		goto _st95;
		_st95:
		p+= 1;
		st_case_95:
		if ( p == pe )
			goto _out95;
		switch( ( (*( p))) ) {
			case 10: {
				goto _st36;
			}
			case 32: {
				goto _st37;
			}
			case 67: {
				goto _st38;
			}
			case 99: {
				goto _st38;
			}
		}
		if ( 9 <= ( (*( p))) && ( (*( p))) <= 13 ) {
			goto _st37;
		}
		goto _st0;
		_ctr72:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 4225 "httpclient_parser.cc"

		goto _st96;
		_st96:
		p+= 1;
		st_case_96:
		if ( p == pe )
			goto _out96;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr53;
			}
			case 13: {
				goto _ctr54;
			}
			case 76: {
				goto _st97;
			}
			case 108: {
				goto _st97;
			}
		}
		goto _st23;
		_st97:
		p+= 1;
		st_case_97:
		if ( p == pe )
			goto _out97;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr53;
			}
			case 13: {
				goto _ctr54;
			}
			case 79: {
				goto _st98;
			}
			case 111: {
				goto _st98;
			}
		}
		goto _st23;
		_st98:
		p+= 1;
		st_case_98:
		if ( p == pe )
			goto _out98;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr53;
			}
			case 13: {
				goto _ctr54;
			}
			case 83: {
				goto _st99;
			}
			case 115: {
				goto _st99;
			}
		}
		goto _st23;
		_st99:
		p+= 1;
		st_case_99:
		if ( p == pe )
			goto _out99;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr53;
			}
			case 13: {
				goto _ctr54;
			}
			case 69: {
				goto _st100;
			}
			case 101: {
				goto _st100;
			}
		}
		goto _st23;
		_st100:
		p+= 1;
		st_case_100:
		if ( p == pe )
			goto _out100;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr156;
			}
			case 13: {
				goto _ctr157;
			}
		}
		goto _st23;
		_st101:
		p+= 1;
		st_case_101:
		if ( p == pe )
			goto _out101;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 69: {
				goto _st102;
			}
			case 101: {
				goto _st102;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st102:
		p+= 1;
		st_case_102:
		if ( p == pe )
			goto _out102;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 78: {
				goto _st103;
			}
			case 110: {
				goto _st103;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st103:
		p+= 1;
		st_case_103:
		if ( p == pe )
			goto _out103;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 84: {
				goto _st104;
			}
			case 116: {
				goto _st104;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st104:
		p+= 1;
		st_case_104:
		if ( p == pe )
			goto _out104;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 45: {
				goto _st105;
			}
			case 46: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 48 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 57 ) {
			if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 65 ) {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st105:
		p+= 1;
		st_case_105:
		if ( p == pe )
			goto _out105;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 76: {
				goto _st106;
			}
			case 108: {
				goto _st106;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st106:
		p+= 1;
		st_case_106:
		if ( p == pe )
			goto _out106;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 69: {
				goto _st107;
			}
			case 101: {
				goto _st107;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st107:
		p+= 1;
		st_case_107:
		if ( p == pe )
			goto _out107;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 78: {
				goto _st108;
			}
			case 110: {
				goto _st108;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st108:
		p+= 1;
		st_case_108:
		if ( p == pe )
			goto _out108;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 71: {
				goto _st109;
			}
			case 103: {
				goto _st109;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st109:
		p+= 1;
		st_case_109:
		if ( p == pe )
			goto _out109;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 84: {
				goto _st110;
			}
			case 116: {
				goto _st110;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st110:
		p+= 1;
		st_case_110:
		if ( p == pe )
			goto _out110;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 72: {
				goto _st111;
			}
			case 104: {
				goto _st111;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_st111:
		p+= 1;
		st_case_111:
		if ( p == pe )
			goto _out111;
		switch( ( (*( p))) ) {
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr168;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_ctr170:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 4855 "httpclient_parser.cc"

		goto _st112;
		_ctr168:
			{
#line 56 "httpclient_parser.rl"
			
			parser->field_len = LEN(field_start, p);
		}
		
#line 4864 "httpclient_parser.cc"

		goto _st112;
		_st112:
		p+= 1;
		st_case_112:
		if ( p == pe )
			goto _out112;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr171;
			}
			case 13: {
				goto _ctr172;
			}
			case 32: {
				goto _ctr170;
			}
		}
		if ( ( (*( p))) > 12 ) {
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto _ctr173;
			}
		} else if ( ( (*( p))) >= 9 ) {
			goto _ctr170;
		}
		goto _ctr48;
		_ctr171:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 4895 "httpclient_parser.cc"

			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 4904 "httpclient_parser.cc"

		goto _st113;
		_st113:
		p+= 1;
		st_case_113:
		if ( p == pe )
			goto _out113;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr176;
			}
			case 13: {
				goto _st116;
			}
			case 32: {
				goto _st114;
			}
			case 33: {
				goto _ctr42;
			}
			case 67: {
				goto _ctr43;
			}
			case 84: {
				goto _ctr44;
			}
			case 99: {
				goto _ctr43;
			}
			case 116: {
				goto _ctr44;
			}
			case 124: {
				goto _ctr42;
			}
			case 126: {
				goto _ctr42;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) < 35 ) {
				if ( 9 <= ( (*( p))) && ( (*( p))) <= 12 ) {
					goto _st114;
				}
			} else if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _ctr42;
				}
			} else {
				goto _ctr42;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _ctr178;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _ctr42;
				}
			} else {
				goto _ctr42;
			}
		} else {
			goto _ctr42;
		}
		goto _st0;
		_st114:
		p+= 1;
		st_case_114:
		if ( p == pe )
			goto _out114;
		if ( ( (*( p))) == 32 ) {
			goto _st114;
		}
		if ( ( (*( p))) > 13 ) {
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto _ctr179;
			}
		} else if ( ( (*( p))) >= 9 ) {
			goto _st114;
		}
		goto _st0;
		_ctr179:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 4992 "httpclient_parser.cc"

		goto _st115;
		_st115:
		p+= 1;
		st_case_115:
		if ( p == pe )
			goto _out115;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr181;
			}
			case 13: {
				goto _ctr182;
			}
		}
		if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
			goto _st115;
		}
		goto _st0;
		_ctr176:
			{
#line 109 "httpclient_parser.rl"
			
			parser->body_start = p - buffer + 1; 
			if(parser->header_done != NULL)
			parser->header_done(parser->data, p + 1, pe - p - 1);
			{p+= 1; cs = 123; goto _out;}
		}
		
#line 5021 "httpclient_parser.cc"

		goto _st123;
		_st123:
		p+= 1;
		st_case_123:
		if ( p == pe )
			goto _out123;
		if ( ( (*( p))) == 32 ) {
			goto _st114;
		}
		if ( ( (*( p))) > 13 ) {
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto _ctr179;
			}
		} else if ( ( (*( p))) >= 9 ) {
			goto _st114;
		}
		goto _st0;
		_st116:
		p+= 1;
		st_case_116:
		if ( p == pe )
			goto _out116;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr176;
			}
			case 32: {
				goto _st114;
			}
		}
		if ( ( (*( p))) > 13 ) {
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto _ctr179;
			}
		} else if ( ( (*( p))) >= 9 ) {
			goto _st114;
		}
		goto _st0;
		_ctr178:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 5065 "httpclient_parser.cc"

			{
#line 54 "httpclient_parser.rl"
			MARK(field_start, p); }
		
#line 5070 "httpclient_parser.cc"

		goto _st117;
		_st117:
		p+= 1;
		st_case_117:
		if ( p == pe )
			goto _out117;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr181;
			}
			case 13: {
				goto _ctr182;
			}
			case 33: {
				goto _st21;
			}
			case 58: {
				goto _ctr46;
			}
			case 124: {
				goto _st21;
			}
			case 126: {
				goto _st21;
			}
		}
		if ( ( (*( p))) < 45 ) {
			if ( ( (*( p))) > 39 ) {
				if ( 42 <= ( (*( p))) && ( (*( p))) <= 43 ) {
					goto _st21;
				}
			} else if ( ( (*( p))) >= 35 ) {
				goto _st21;
			}
		} else if ( ( (*( p))) > 46 ) {
			if ( ( (*( p))) < 65 ) {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st117;
				}
			} else if ( ( (*( p))) > 90 ) {
				if ( 94 <= ( (*( p))) && ( (*( p))) <= 122 ) {
					goto _st21;
				}
			} else {
				goto _st21;
			}
		} else {
			goto _st21;
		}
		goto _st0;
		_ctr172:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 5126 "httpclient_parser.cc"

			{
#line 70 "httpclient_parser.rl"
			
			if(parser->http_field != NULL) {
				parser->http_field(parser->data, PTR_TO(field_start), parser->field_len, PTR_TO(mark), LEN(mark, p));
			}
		}
		
#line 5135 "httpclient_parser.cc"

		goto _st118;
		_st118:
		p+= 1;
		st_case_118:
		if ( p == pe )
			goto _out118;
		switch( ( (*( p))) ) {
			case 10: {
				goto _st113;
			}
			case 32: {
				goto _st114;
			}
		}
		if ( ( (*( p))) > 13 ) {
			if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
				goto _ctr179;
			}
		} else if ( ( (*( p))) >= 9 ) {
			goto _st114;
		}
		goto _st0;
		_ctr173:
			{
#line 60 "httpclient_parser.rl"
			MARK(mark, p); }
		
#line 5163 "httpclient_parser.cc"

		goto _st119;
		_st119:
		p+= 1;
		st_case_119:
		if ( p == pe )
			goto _out119;
		switch( ( (*( p))) ) {
			case 10: {
				goto _ctr181;
			}
			case 13: {
				goto _ctr182;
			}
		}
		if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
			goto _st119;
		}
		goto _st23;
		_out1: cs = 1; goto _out; 
		_out0: cs = 0; goto _out; 
		_out2: cs = 2; goto _out; 
		_out120: cs = 120; goto _out; 
		_out3: cs = 3; goto _out; 
		_out4: cs = 4; goto _out; 
		_out5: cs = 5; goto _out; 
		_out6: cs = 6; goto _out; 
		_out7: cs = 7; goto _out; 
		_out8: cs = 8; goto _out; 
		_out9: cs = 9; goto _out; 
		_out10: cs = 10; goto _out; 
		_out11: cs = 11; goto _out; 
		_out12: cs = 12; goto _out; 
		_out13: cs = 13; goto _out; 
		_out14: cs = 14; goto _out; 
		_out15: cs = 15; goto _out; 
		_out16: cs = 16; goto _out; 
		_out17: cs = 17; goto _out; 
		_out18: cs = 18; goto _out; 
		_out19: cs = 19; goto _out; 
		_out20: cs = 20; goto _out; 
		_out21: cs = 21; goto _out; 
		_out22: cs = 22; goto _out; 
		_out23: cs = 23; goto _out; 
		_out24: cs = 24; goto _out; 
		_out25: cs = 25; goto _out; 
		_out26: cs = 26; goto _out; 
		_out27: cs = 27; goto _out; 
		_out28: cs = 28; goto _out; 
		_out29: cs = 29; goto _out; 
		_out30: cs = 30; goto _out; 
		_out31: cs = 31; goto _out; 
		_out32: cs = 32; goto _out; 
		_out33: cs = 33; goto _out; 
		_out34: cs = 34; goto _out; 
		_out35: cs = 35; goto _out; 
		_out36: cs = 36; goto _out; 
		_out37: cs = 37; goto _out; 
		_out38: cs = 38; goto _out; 
		_out39: cs = 39; goto _out; 
		_out40: cs = 40; goto _out; 
		_out41: cs = 41; goto _out; 
		_out42: cs = 42; goto _out; 
		_out43: cs = 43; goto _out; 
		_out44: cs = 44; goto _out; 
		_out45: cs = 45; goto _out; 
		_out46: cs = 46; goto _out; 
		_out47: cs = 47; goto _out; 
		_out48: cs = 48; goto _out; 
		_out49: cs = 49; goto _out; 
		_out50: cs = 50; goto _out; 
		_out51: cs = 51; goto _out; 
		_out52: cs = 52; goto _out; 
		_out53: cs = 53; goto _out; 
		_out54: cs = 54; goto _out; 
		_out55: cs = 55; goto _out; 
		_out56: cs = 56; goto _out; 
		_out57: cs = 57; goto _out; 
		_out58: cs = 58; goto _out; 
		_out59: cs = 59; goto _out; 
		_out60: cs = 60; goto _out; 
		_out61: cs = 61; goto _out; 
		_out62: cs = 62; goto _out; 
		_out63: cs = 63; goto _out; 
		_out64: cs = 64; goto _out; 
		_out65: cs = 65; goto _out; 
		_out66: cs = 66; goto _out; 
		_out67: cs = 67; goto _out; 
		_out68: cs = 68; goto _out; 
		_out69: cs = 69; goto _out; 
		_out70: cs = 70; goto _out; 
		_out71: cs = 71; goto _out; 
		_out121: cs = 121; goto _out; 
		_out72: cs = 72; goto _out; 
		_out73: cs = 73; goto _out; 
		_out74: cs = 74; goto _out; 
		_out75: cs = 75; goto _out; 
		_out76: cs = 76; goto _out; 
		_out77: cs = 77; goto _out; 
		_out78: cs = 78; goto _out; 
		_out79: cs = 79; goto _out; 
		_out80: cs = 80; goto _out; 
		_out81: cs = 81; goto _out; 
		_out82: cs = 82; goto _out; 
		_out83: cs = 83; goto _out; 
		_out84: cs = 84; goto _out; 
		_out85: cs = 85; goto _out; 
		_out86: cs = 86; goto _out; 
		_out87: cs = 87; goto _out; 
		_out88: cs = 88; goto _out; 
		_out122: cs = 122; goto _out; 
		_out89: cs = 89; goto _out; 
		_out90: cs = 90; goto _out; 
		_out91: cs = 91; goto _out; 
		_out92: cs = 92; goto _out; 
		_out93: cs = 93; goto _out; 
		_out94: cs = 94; goto _out; 
		_out95: cs = 95; goto _out; 
		_out96: cs = 96; goto _out; 
		_out97: cs = 97; goto _out; 
		_out98: cs = 98; goto _out; 
		_out99: cs = 99; goto _out; 
		_out100: cs = 100; goto _out; 
		_out101: cs = 101; goto _out; 
		_out102: cs = 102; goto _out; 
		_out103: cs = 103; goto _out; 
		_out104: cs = 104; goto _out; 
		_out105: cs = 105; goto _out; 
		_out106: cs = 106; goto _out; 
		_out107: cs = 107; goto _out; 
		_out108: cs = 108; goto _out; 
		_out109: cs = 109; goto _out; 
		_out110: cs = 110; goto _out; 
		_out111: cs = 111; goto _out; 
		_out112: cs = 112; goto _out; 
		_out113: cs = 113; goto _out; 
		_out114: cs = 114; goto _out; 
		_out115: cs = 115; goto _out; 
		_out123: cs = 123; goto _out; 
		_out116: cs = 116; goto _out; 
		_out117: cs = 117; goto _out; 
		_out118: cs = 118; goto _out; 
		_out119: cs = 119; goto _out; 
		_out: {}
	}
	
#line 195 "httpclient_parser.rl"

	
	parser->cs = cs;
	parser->nread += p - (buffer + off);
	
	assert(p <= pe && "buffer overflow after parsing execute");
	assert(parser->nread <= len && "nread longer than length");
	assert(parser->body_start <= len && "body starts after buffer end");
	check(parser->mark < len, "mark is after buffer end");
	check(parser->field_len <= len, "field has length longer than whole buffer");
	check(parser->field_start < len, "field starts after buffer end");
	
	if(parser->body_start) {
		/* final \r\n combo encountered so stop right here */
		parser->nread++;
	}
	
	return(parser->nread);
	
	error:
	return -1;
}

int httpclient_parser_finish(httpclient_parser *parser)
{
	int cs = parser->cs;
	
	parser->cs = cs;
	
	if (httpclient_parser_has_error(parser) ) {
		return -1;
	} else if (httpclient_parser_is_finished(parser) ) {
		return 1;
	} else {
		return 0;
	}
}

int httpclient_parser_has_error(httpclient_parser *parser) {
	return parser->cs == httpclient_parser_error;
}

int httpclient_parser_is_finished(httpclient_parser *parser) {
	return parser->cs == httpclient_parser_first_final;
}
