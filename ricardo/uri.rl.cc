#line 1 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
#include "uri.h"
#include <sstream>

namespace Ricardo {

#line 6 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"
static const int uri_parser_start = 451;
	static const int uri_parser_first_final = 451;
	static const int uri_parser_error = 0;
	
	static const int uri_parser_en_main = 451;
	
	
#line 132 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"

	
	Uri::ptr Uri::Create(const std::string& uristr) {
		Uri::ptr uri(new Uri);
		int cs = 0;
		const char* mark = 0;

#line 19 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"
	{
			cs = (int)uri_parser_start;
		}
		
#line 138 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"

		const char *p = uristr.c_str();
		const char *pe = p + uristr.size();
		const char* eof = pe;

#line 27 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"
{
			switch ( cs ) {
				case 451:
				goto st_case_451;
				case 452:
				goto st_case_452;
				case 0:
				goto st_case_0;
				case 453:
				goto st_case_453;
				case 454:
				goto st_case_454;
				case 1:
				goto st_case_1;
				case 2:
				goto st_case_2;
				case 3:
				goto st_case_3;
				case 4:
				goto st_case_4;
				case 455:
				goto st_case_455;
				case 5:
				goto st_case_5;
				case 6:
				goto st_case_6;
				case 456:
				goto st_case_456;
				case 457:
				goto st_case_457;
				case 7:
				goto st_case_7;
				case 8:
				goto st_case_8;
				case 458:
				goto st_case_458;
				case 459:
				goto st_case_459;
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
				case 460:
				goto st_case_460;
				case 461:
				goto st_case_461;
				case 462:
				goto st_case_462;
				case 463:
				goto st_case_463;
				case 464:
				goto st_case_464;
				case 465:
				goto st_case_465;
				case 466:
				goto st_case_466;
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
				case 467:
				goto st_case_467;
				case 31:
				goto st_case_31;
				case 32:
				goto st_case_32;
				case 468:
				goto st_case_468;
				case 33:
				goto st_case_33;
				case 34:
				goto st_case_34;
				case 35:
				goto st_case_35;
				case 469:
				goto st_case_469;
				case 470:
				goto st_case_470;
				case 36:
				goto st_case_36;
				case 37:
				goto st_case_37;
				case 471:
				goto st_case_471;
				case 472:
				goto st_case_472;
				case 473:
				goto st_case_473;
				case 474:
				goto st_case_474;
				case 475:
				goto st_case_475;
				case 476:
				goto st_case_476;
				case 477:
				goto st_case_477;
				case 478:
				goto st_case_478;
				case 479:
				goto st_case_479;
				case 480:
				goto st_case_480;
				case 481:
				goto st_case_481;
				case 482:
				goto st_case_482;
				case 483:
				goto st_case_483;
				case 484:
				goto st_case_484;
				case 485:
				goto st_case_485;
				case 486:
				goto st_case_486;
				case 487:
				goto st_case_487;
				case 488:
				goto st_case_488;
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
				case 116:
				goto st_case_116;
				case 117:
				goto st_case_117;
				case 118:
				goto st_case_118;
				case 119:
				goto st_case_119;
				case 120:
				goto st_case_120;
				case 121:
				goto st_case_121;
				case 122:
				goto st_case_122;
				case 123:
				goto st_case_123;
				case 124:
				goto st_case_124;
				case 125:
				goto st_case_125;
				case 126:
				goto st_case_126;
				case 127:
				goto st_case_127;
				case 128:
				goto st_case_128;
				case 129:
				goto st_case_129;
				case 130:
				goto st_case_130;
				case 131:
				goto st_case_131;
				case 132:
				goto st_case_132;
				case 133:
				goto st_case_133;
				case 134:
				goto st_case_134;
				case 135:
				goto st_case_135;
				case 136:
				goto st_case_136;
				case 137:
				goto st_case_137;
				case 138:
				goto st_case_138;
				case 139:
				goto st_case_139;
				case 140:
				goto st_case_140;
				case 141:
				goto st_case_141;
				case 142:
				goto st_case_142;
				case 143:
				goto st_case_143;
				case 144:
				goto st_case_144;
				case 145:
				goto st_case_145;
				case 146:
				goto st_case_146;
				case 147:
				goto st_case_147;
				case 148:
				goto st_case_148;
				case 149:
				goto st_case_149;
				case 150:
				goto st_case_150;
				case 151:
				goto st_case_151;
				case 152:
				goto st_case_152;
				case 153:
				goto st_case_153;
				case 154:
				goto st_case_154;
				case 155:
				goto st_case_155;
				case 156:
				goto st_case_156;
				case 157:
				goto st_case_157;
				case 158:
				goto st_case_158;
				case 159:
				goto st_case_159;
				case 160:
				goto st_case_160;
				case 161:
				goto st_case_161;
				case 162:
				goto st_case_162;
				case 163:
				goto st_case_163;
				case 164:
				goto st_case_164;
				case 165:
				goto st_case_165;
				case 166:
				goto st_case_166;
				case 167:
				goto st_case_167;
				case 168:
				goto st_case_168;
				case 169:
				goto st_case_169;
				case 170:
				goto st_case_170;
				case 171:
				goto st_case_171;
				case 172:
				goto st_case_172;
				case 173:
				goto st_case_173;
				case 174:
				goto st_case_174;
				case 175:
				goto st_case_175;
				case 176:
				goto st_case_176;
				case 177:
				goto st_case_177;
				case 178:
				goto st_case_178;
				case 179:
				goto st_case_179;
				case 180:
				goto st_case_180;
				case 181:
				goto st_case_181;
				case 182:
				goto st_case_182;
				case 183:
				goto st_case_183;
				case 184:
				goto st_case_184;
				case 185:
				goto st_case_185;
				case 186:
				goto st_case_186;
				case 187:
				goto st_case_187;
				case 188:
				goto st_case_188;
				case 189:
				goto st_case_189;
				case 190:
				goto st_case_190;
				case 191:
				goto st_case_191;
				case 192:
				goto st_case_192;
				case 193:
				goto st_case_193;
				case 194:
				goto st_case_194;
				case 195:
				goto st_case_195;
				case 196:
				goto st_case_196;
				case 197:
				goto st_case_197;
				case 198:
				goto st_case_198;
				case 199:
				goto st_case_199;
				case 200:
				goto st_case_200;
				case 201:
				goto st_case_201;
				case 202:
				goto st_case_202;
				case 203:
				goto st_case_203;
				case 204:
				goto st_case_204;
				case 205:
				goto st_case_205;
				case 206:
				goto st_case_206;
				case 207:
				goto st_case_207;
				case 208:
				goto st_case_208;
				case 209:
				goto st_case_209;
				case 210:
				goto st_case_210;
				case 211:
				goto st_case_211;
				case 212:
				goto st_case_212;
				case 213:
				goto st_case_213;
				case 214:
				goto st_case_214;
				case 215:
				goto st_case_215;
				case 216:
				goto st_case_216;
				case 217:
				goto st_case_217;
				case 218:
				goto st_case_218;
				case 219:
				goto st_case_219;
				case 220:
				goto st_case_220;
				case 221:
				goto st_case_221;
				case 222:
				goto st_case_222;
				case 223:
				goto st_case_223;
				case 224:
				goto st_case_224;
				case 225:
				goto st_case_225;
				case 226:
				goto st_case_226;
				case 227:
				goto st_case_227;
				case 228:
				goto st_case_228;
				case 489:
				goto st_case_489;
				case 490:
				goto st_case_490;
				case 491:
				goto st_case_491;
				case 492:
				goto st_case_492;
				case 493:
				goto st_case_493;
				case 494:
				goto st_case_494;
				case 495:
				goto st_case_495;
				case 496:
				goto st_case_496;
				case 497:
				goto st_case_497;
				case 498:
				goto st_case_498;
				case 499:
				goto st_case_499;
				case 500:
				goto st_case_500;
				case 501:
				goto st_case_501;
				case 502:
				goto st_case_502;
				case 503:
				goto st_case_503;
				case 504:
				goto st_case_504;
				case 505:
				goto st_case_505;
				case 506:
				goto st_case_506;
				case 507:
				goto st_case_507;
				case 508:
				goto st_case_508;
				case 509:
				goto st_case_509;
				case 510:
				goto st_case_510;
				case 511:
				goto st_case_511;
				case 229:
				goto st_case_229;
				case 230:
				goto st_case_230;
				case 231:
				goto st_case_231;
				case 232:
				goto st_case_232;
				case 233:
				goto st_case_233;
				case 234:
				goto st_case_234;
				case 235:
				goto st_case_235;
				case 236:
				goto st_case_236;
				case 237:
				goto st_case_237;
				case 238:
				goto st_case_238;
				case 239:
				goto st_case_239;
				case 240:
				goto st_case_240;
				case 241:
				goto st_case_241;
				case 242:
				goto st_case_242;
				case 512:
				goto st_case_512;
				case 513:
				goto st_case_513;
				case 243:
				goto st_case_243;
				case 244:
				goto st_case_244;
				case 514:
				goto st_case_514;
				case 515:
				goto st_case_515;
				case 516:
				goto st_case_516;
				case 517:
				goto st_case_517;
				case 518:
				goto st_case_518;
				case 519:
				goto st_case_519;
				case 245:
				goto st_case_245;
				case 246:
				goto st_case_246;
				case 247:
				goto st_case_247;
				case 248:
				goto st_case_248;
				case 249:
				goto st_case_249;
				case 250:
				goto st_case_250;
				case 251:
				goto st_case_251;
				case 252:
				goto st_case_252;
				case 520:
				goto st_case_520;
				case 253:
				goto st_case_253;
				case 254:
				goto st_case_254;
				case 521:
				goto st_case_521;
				case 255:
				goto st_case_255;
				case 256:
				goto st_case_256;
				case 257:
				goto st_case_257;
				case 522:
				goto st_case_522;
				case 523:
				goto st_case_523;
				case 258:
				goto st_case_258;
				case 259:
				goto st_case_259;
				case 524:
				goto st_case_524;
				case 525:
				goto st_case_525;
				case 526:
				goto st_case_526;
				case 527:
				goto st_case_527;
				case 528:
				goto st_case_528;
				case 529:
				goto st_case_529;
				case 530:
				goto st_case_530;
				case 531:
				goto st_case_531;
				case 532:
				goto st_case_532;
				case 533:
				goto st_case_533;
				case 534:
				goto st_case_534;
				case 535:
				goto st_case_535;
				case 536:
				goto st_case_536;
				case 537:
				goto st_case_537;
				case 538:
				goto st_case_538;
				case 539:
				goto st_case_539;
				case 540:
				goto st_case_540;
				case 541:
				goto st_case_541;
				case 260:
				goto st_case_260;
				case 261:
				goto st_case_261;
				case 262:
				goto st_case_262;
				case 263:
				goto st_case_263;
				case 264:
				goto st_case_264;
				case 265:
				goto st_case_265;
				case 266:
				goto st_case_266;
				case 267:
				goto st_case_267;
				case 268:
				goto st_case_268;
				case 269:
				goto st_case_269;
				case 270:
				goto st_case_270;
				case 271:
				goto st_case_271;
				case 272:
				goto st_case_272;
				case 273:
				goto st_case_273;
				case 274:
				goto st_case_274;
				case 275:
				goto st_case_275;
				case 276:
				goto st_case_276;
				case 277:
				goto st_case_277;
				case 278:
				goto st_case_278;
				case 279:
				goto st_case_279;
				case 280:
				goto st_case_280;
				case 281:
				goto st_case_281;
				case 282:
				goto st_case_282;
				case 283:
				goto st_case_283;
				case 284:
				goto st_case_284;
				case 285:
				goto st_case_285;
				case 286:
				goto st_case_286;
				case 287:
				goto st_case_287;
				case 288:
				goto st_case_288;
				case 289:
				goto st_case_289;
				case 290:
				goto st_case_290;
				case 291:
				goto st_case_291;
				case 292:
				goto st_case_292;
				case 293:
				goto st_case_293;
				case 294:
				goto st_case_294;
				case 295:
				goto st_case_295;
				case 296:
				goto st_case_296;
				case 297:
				goto st_case_297;
				case 298:
				goto st_case_298;
				case 299:
				goto st_case_299;
				case 300:
				goto st_case_300;
				case 301:
				goto st_case_301;
				case 302:
				goto st_case_302;
				case 303:
				goto st_case_303;
				case 304:
				goto st_case_304;
				case 305:
				goto st_case_305;
				case 306:
				goto st_case_306;
				case 307:
				goto st_case_307;
				case 308:
				goto st_case_308;
				case 309:
				goto st_case_309;
				case 310:
				goto st_case_310;
				case 311:
				goto st_case_311;
				case 312:
				goto st_case_312;
				case 313:
				goto st_case_313;
				case 314:
				goto st_case_314;
				case 315:
				goto st_case_315;
				case 316:
				goto st_case_316;
				case 317:
				goto st_case_317;
				case 318:
				goto st_case_318;
				case 319:
				goto st_case_319;
				case 320:
				goto st_case_320;
				case 321:
				goto st_case_321;
				case 322:
				goto st_case_322;
				case 323:
				goto st_case_323;
				case 324:
				goto st_case_324;
				case 325:
				goto st_case_325;
				case 326:
				goto st_case_326;
				case 327:
				goto st_case_327;
				case 328:
				goto st_case_328;
				case 329:
				goto st_case_329;
				case 330:
				goto st_case_330;
				case 331:
				goto st_case_331;
				case 332:
				goto st_case_332;
				case 333:
				goto st_case_333;
				case 334:
				goto st_case_334;
				case 335:
				goto st_case_335;
				case 336:
				goto st_case_336;
				case 337:
				goto st_case_337;
				case 338:
				goto st_case_338;
				case 339:
				goto st_case_339;
				case 340:
				goto st_case_340;
				case 341:
				goto st_case_341;
				case 342:
				goto st_case_342;
				case 343:
				goto st_case_343;
				case 344:
				goto st_case_344;
				case 345:
				goto st_case_345;
				case 346:
				goto st_case_346;
				case 347:
				goto st_case_347;
				case 348:
				goto st_case_348;
				case 349:
				goto st_case_349;
				case 350:
				goto st_case_350;
				case 351:
				goto st_case_351;
				case 352:
				goto st_case_352;
				case 353:
				goto st_case_353;
				case 354:
				goto st_case_354;
				case 355:
				goto st_case_355;
				case 356:
				goto st_case_356;
				case 357:
				goto st_case_357;
				case 358:
				goto st_case_358;
				case 359:
				goto st_case_359;
				case 360:
				goto st_case_360;
				case 361:
				goto st_case_361;
				case 362:
				goto st_case_362;
				case 363:
				goto st_case_363;
				case 364:
				goto st_case_364;
				case 365:
				goto st_case_365;
				case 366:
				goto st_case_366;
				case 367:
				goto st_case_367;
				case 368:
				goto st_case_368;
				case 369:
				goto st_case_369;
				case 370:
				goto st_case_370;
				case 371:
				goto st_case_371;
				case 372:
				goto st_case_372;
				case 373:
				goto st_case_373;
				case 374:
				goto st_case_374;
				case 375:
				goto st_case_375;
				case 376:
				goto st_case_376;
				case 377:
				goto st_case_377;
				case 378:
				goto st_case_378;
				case 379:
				goto st_case_379;
				case 380:
				goto st_case_380;
				case 381:
				goto st_case_381;
				case 382:
				goto st_case_382;
				case 383:
				goto st_case_383;
				case 384:
				goto st_case_384;
				case 385:
				goto st_case_385;
				case 386:
				goto st_case_386;
				case 387:
				goto st_case_387;
				case 388:
				goto st_case_388;
				case 389:
				goto st_case_389;
				case 390:
				goto st_case_390;
				case 391:
				goto st_case_391;
				case 392:
				goto st_case_392;
				case 393:
				goto st_case_393;
				case 394:
				goto st_case_394;
				case 395:
				goto st_case_395;
				case 396:
				goto st_case_396;
				case 397:
				goto st_case_397;
				case 398:
				goto st_case_398;
				case 399:
				goto st_case_399;
				case 400:
				goto st_case_400;
				case 401:
				goto st_case_401;
				case 402:
				goto st_case_402;
				case 403:
				goto st_case_403;
				case 404:
				goto st_case_404;
				case 405:
				goto st_case_405;
				case 406:
				goto st_case_406;
				case 407:
				goto st_case_407;
				case 408:
				goto st_case_408;
				case 409:
				goto st_case_409;
				case 410:
				goto st_case_410;
				case 411:
				goto st_case_411;
				case 412:
				goto st_case_412;
				case 413:
				goto st_case_413;
				case 414:
				goto st_case_414;
				case 415:
				goto st_case_415;
				case 416:
				goto st_case_416;
				case 417:
				goto st_case_417;
				case 418:
				goto st_case_418;
				case 419:
				goto st_case_419;
				case 420:
				goto st_case_420;
				case 421:
				goto st_case_421;
				case 422:
				goto st_case_422;
				case 423:
				goto st_case_423;
				case 424:
				goto st_case_424;
				case 425:
				goto st_case_425;
				case 426:
				goto st_case_426;
				case 427:
				goto st_case_427;
				case 428:
				goto st_case_428;
				case 429:
				goto st_case_429;
				case 430:
				goto st_case_430;
				case 431:
				goto st_case_431;
				case 432:
				goto st_case_432;
				case 433:
				goto st_case_433;
				case 434:
				goto st_case_434;
				case 435:
				goto st_case_435;
				case 436:
				goto st_case_436;
				case 437:
				goto st_case_437;
				case 438:
				goto st_case_438;
				case 439:
				goto st_case_439;
				case 440:
				goto st_case_440;
				case 441:
				goto st_case_441;
				case 442:
				goto st_case_442;
				case 443:
				goto st_case_443;
				case 444:
				goto st_case_444;
				case 445:
				goto st_case_445;
				case 446:
				goto st_case_446;
				case 447:
				goto st_case_447;
				case 448:
				goto st_case_448;
				case 449:
				goto st_case_449;
				case 450:
				goto st_case_450;
				case 542:
				goto st_case_542;
				case 543:
				goto st_case_543;
				case 544:
				goto st_case_544;
				case 545:
				goto st_case_545;
				case 546:
				goto st_case_546;
				case 547:
				goto st_case_547;
				case 548:
				goto st_case_548;
				case 549:
				goto st_case_549;
				case 550:
				goto st_case_550;
				case 551:
				goto st_case_551;
				case 552:
				goto st_case_552;
				case 553:
				goto st_case_553;
				case 554:
				goto st_case_554;
				case 555:
				goto st_case_555;
				case 556:
				goto st_case_556;
				case 557:
				goto st_case_557;
				case 558:
				goto st_case_558;
				case 559:
				goto st_case_559;
				case 560:
				goto st_case_560;
			}
			_st451:
			if ( p == eof )
				goto _out451;
			p+= 1;
			st_case_451:
			if ( p == pe && p != eof )
				goto _out451;
			if ( p == eof ) {
				goto _st451;}
			else {
				switch( ( (*( p))) ) {
					case 34: {
						goto _st0;
					}
					case 35: {
						goto _st453;
					}
					case 37: {
						goto _st3;
					}
					case 47: {
						goto _st458;
					}
					case 58: {
						goto _st0;
					}
					case 60: {
						goto _st0;
					}
					case 62: {
						goto _st0;
					}
					case 63: {
						goto _st456;
					}
					case 96: {
						goto _st0;
					}
					case 127: {
						goto _st0;
					}
				}
				if ( ( (*( p))) < 91 ) {
					if ( ( (*( p))) > 32 ) {
						if ( 65 <= ( (*( p))) ) {
							goto _ctr474;
						}
					} else if ( ( (*( p))) >= 0 ) {
						goto _st0;
					}
				} else if ( ( (*( p))) > 94 ) {
					if ( ( (*( p))) > 122 ) {
						if ( ( (*( p))) <= 125 ) {
							goto _st0;
						}
					} else if ( ( (*( p))) >= 97 ) {
						goto _ctr474;
					}
				} else {
					goto _st0;
				}
				goto _st452;
			}
			_st452:
			if ( p == eof )
				goto _out452;
			p+= 1;
			st_case_452:
			if ( p == pe && p != eof )
				goto _out452;
			if ( p == eof ) {
				goto _st452;}
			else {
				switch( ( (*( p))) ) {
					case 34: {
						goto _st0;
					}
					case 35: {
						goto _st453;
					}
					case 37: {
						goto _st3;
					}
					case 47: {
						goto _st455;
					}
					case 58: {
						goto _st0;
					}
					case 60: {
						goto _st0;
					}
					case 62: {
						goto _st0;
					}
					case 63: {
						goto _st456;
					}
					case 96: {
						goto _st0;
					}
					case 127: {
						goto _st0;
					}
				}
				if ( ( (*( p))) < 91 ) {
					if ( 0 <= ( (*( p))) && ( (*( p))) <= 32 ) {
						goto _st0;
					}
				} else if ( ( (*( p))) > 94 ) {
					if ( 123 <= ( (*( p))) && ( (*( p))) <= 125 ) {
						goto _st0;
					}
				} else {
					goto _st0;
				}
				goto _st452;
			}
			_st0:
			if ( p == eof )
				goto _out0;
			st_case_0:
			goto _out0;
			_ctr475:
				{
#line 16 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1280 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 110 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setFragment(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 1289 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st453;
			_ctr481:
				{
#line 16 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1296 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 104 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setQuery(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 1305 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st453;
			_ctr484:
				{
#line 104 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setQuery(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 1316 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st453;
			_ctr489:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1323 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 1333 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st453;
			_ctr501:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 1345 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st453;
			_ctr506:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1352 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 1362 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st453;
			_ctr511:
				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 1374 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st453;
			_ctr611:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1381 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 1391 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 1400 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st453;
			_ctr623:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 1412 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1417 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 1426 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st453;
			_ctr628:
				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 1437 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st453;
			_ctr631:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1444 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 1454 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 1463 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st453;
			_ctr636:
				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 1475 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1480 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 1489 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st453;
			_st453:
			if ( p == eof )
				goto _out453;
			p+= 1;
			st_case_453:
			if ( p == pe && p != eof )
				goto _out453;
			if ( p == eof ) {
				goto _ctr475;}
			else {
				switch( ( (*( p))) ) {
					case 37: {
						goto _ctr477;
					}
					case 60: {
						goto _st0;
					}
					case 62: {
						goto _st0;
					}
					case 96: {
						goto _st0;
					}
					case 127: {
						goto _st0;
					}
				}
				if ( ( (*( p))) < 34 ) {
					if ( 0 <= ( (*( p))) && ( (*( p))) <= 32 ) {
						goto _st0;
					}
				} else if ( ( (*( p))) > 35 ) {
					if ( ( (*( p))) > 94 ) {
						if ( 123 <= ( (*( p))) && ( (*( p))) <= 125 ) {
							goto _st0;
						}
					} else if ( ( (*( p))) >= 91 ) {
						goto _st0;
					}
				} else {
					goto _st0;
				}
				goto _ctr476;
			}
			_ctr476:
				{
#line 16 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1540 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st454;
			_ctr478:
				{
#line 110 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setFragment(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 1551 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st454;
			_st454:
			if ( p == eof )
				goto _out454;
			p+= 1;
			st_case_454:
			if ( p == pe && p != eof )
				goto _out454;
			if ( p == eof ) {
				goto _ctr478;}
			else {
				switch( ( (*( p))) ) {
					case 37: {
						goto _st1;
					}
					case 60: {
						goto _st0;
					}
					case 62: {
						goto _st0;
					}
					case 96: {
						goto _st0;
					}
					case 127: {
						goto _st0;
					}
				}
				if ( ( (*( p))) < 34 ) {
					if ( 0 <= ( (*( p))) && ( (*( p))) <= 32 ) {
						goto _st0;
					}
				} else if ( ( (*( p))) > 35 ) {
					if ( ( (*( p))) > 94 ) {
						if ( 123 <= ( (*( p))) && ( (*( p))) <= 125 ) {
							goto _st0;
						}
					} else if ( ( (*( p))) >= 91 ) {
						goto _st0;
					}
				} else {
					goto _st0;
				}
				goto _st454;
			}
			_ctr477:
				{
#line 16 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1602 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st1;
			_st1:
			if ( p == eof )
				goto _out1;
			p+= 1;
			st_case_1:
			if ( p == pe && p != eof )
				goto _out1;
			if ( p == eof ) {
				goto _st1;}
			else {
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
			}
			_st2:
			if ( p == eof )
				goto _out2;
			p+= 1;
			st_case_2:
			if ( p == pe && p != eof )
				goto _out2;
			if ( p == eof ) {
				goto _st2;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st454;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st454;
					}
				} else {
					goto _st454;
				}
				goto _st0;
			}
			_st3:
			if ( p == eof )
				goto _out3;
			p+= 1;
			st_case_3:
			if ( p == pe && p != eof )
				goto _out3;
			if ( p == eof ) {
				goto _st3;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st4;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st4;
					}
				} else {
					goto _st4;
				}
				goto _st0;
			}
			_st4:
			if ( p == eof )
				goto _out4;
			p+= 1;
			st_case_4:
			if ( p == pe && p != eof )
				goto _out4;
			if ( p == eof ) {
				goto _st4;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st452;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st452;
					}
				} else {
					goto _st452;
				}
				goto _st0;
			}
			_ctr491:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1701 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 1711 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st455;
			_ctr502:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 1723 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st455;
			_ctr507:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1730 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 1740 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st455;
			_ctr512:
				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 1752 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st455;
			_st455:
			if ( p == eof )
				goto _out455;
			p+= 1;
			st_case_455:
			if ( p == pe && p != eof )
				goto _out455;
			if ( p == eof ) {
				goto _st455;}
			else {
				switch( ( (*( p))) ) {
					case 34: {
						goto _st0;
					}
					case 35: {
						goto _st453;
					}
					case 37: {
						goto _st5;
					}
					case 60: {
						goto _st0;
					}
					case 62: {
						goto _st0;
					}
					case 63: {
						goto _st456;
					}
					case 96: {
						goto _st0;
					}
					case 127: {
						goto _st0;
					}
				}
				if ( ( (*( p))) < 91 ) {
					if ( 0 <= ( (*( p))) && ( (*( p))) <= 32 ) {
						goto _st0;
					}
				} else if ( ( (*( p))) > 94 ) {
					if ( 123 <= ( (*( p))) && ( (*( p))) <= 125 ) {
						goto _st0;
					}
				} else {
					goto _st0;
				}
				goto _st455;
			}
			_st5:
			if ( p == eof )
				goto _out5;
			p+= 1;
			st_case_5:
			if ( p == pe && p != eof )
				goto _out5;
			if ( p == eof ) {
				goto _st5;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st6;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st6;
					}
				} else {
					goto _st6;
				}
				goto _st0;
			}
			_st6:
			if ( p == eof )
				goto _out6;
			p+= 1;
			st_case_6:
			if ( p == pe && p != eof )
				goto _out6;
			if ( p == eof ) {
				goto _st6;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st455;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st455;
					}
				} else {
					goto _st455;
				}
				goto _st0;
			}
			_ctr479:
				{
#line 16 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1854 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 104 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setQuery(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 1863 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st456;
			_ctr497:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1870 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 1880 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st456;
			_ctr504:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 1892 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st456;
			_ctr509:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1899 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 1909 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st456;
			_ctr514:
				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 1921 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st456;
			_ctr619:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1928 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 1938 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 1947 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st456;
			_ctr626:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 1959 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1964 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 1973 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st456;
			_ctr629:
				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 1984 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st456;
			_ctr634:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 1991 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 2001 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 2010 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st456;
			_ctr639:
				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 2022 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 2027 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 2036 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st456;
			_st456:
			if ( p == eof )
				goto _out456;
			p+= 1;
			st_case_456:
			if ( p == pe && p != eof )
				goto _out456;
			if ( p == eof ) {
				goto _ctr479;}
			else {
				switch( ( (*( p))) ) {
					case 34: {
						goto _st0;
					}
					case 35: {
						goto _ctr481;
					}
					case 37: {
						goto _ctr482;
					}
					case 60: {
						goto _st0;
					}
					case 62: {
						goto _st0;
					}
					case 96: {
						goto _st0;
					}
					case 127: {
						goto _st0;
					}
				}
				if ( ( (*( p))) < 91 ) {
					if ( 0 <= ( (*( p))) && ( (*( p))) <= 32 ) {
						goto _st0;
					}
				} else if ( ( (*( p))) > 94 ) {
					if ( 123 <= ( (*( p))) && ( (*( p))) <= 125 ) {
						goto _st0;
					}
				} else {
					goto _st0;
				}
				goto _ctr480;
			}
			_ctr480:
				{
#line 16 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 2089 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st457;
			_ctr483:
				{
#line 104 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setQuery(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 2100 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st457;
			_st457:
			if ( p == eof )
				goto _out457;
			p+= 1;
			st_case_457:
			if ( p == pe && p != eof )
				goto _out457;
			if ( p == eof ) {
				goto _ctr483;}
			else {
				switch( ( (*( p))) ) {
					case 34: {
						goto _st0;
					}
					case 35: {
						goto _ctr484;
					}
					case 37: {
						goto _st7;
					}
					case 60: {
						goto _st0;
					}
					case 62: {
						goto _st0;
					}
					case 96: {
						goto _st0;
					}
					case 127: {
						goto _st0;
					}
				}
				if ( ( (*( p))) < 91 ) {
					if ( 0 <= ( (*( p))) && ( (*( p))) <= 32 ) {
						goto _st0;
					}
				} else if ( ( (*( p))) > 94 ) {
					if ( 123 <= ( (*( p))) && ( (*( p))) <= 125 ) {
						goto _st0;
					}
				} else {
					goto _st0;
				}
				goto _st457;
			}
			_ctr482:
				{
#line 16 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 2153 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st7;
			_st7:
			if ( p == eof )
				goto _out7;
			p+= 1;
			st_case_7:
			if ( p == pe && p != eof )
				goto _out7;
			if ( p == eof ) {
				goto _st7;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st8;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st8;
					}
				} else {
					goto _st8;
				}
				goto _st0;
			}
			_st8:
			if ( p == eof )
				goto _out8;
			p+= 1;
			st_case_8:
			if ( p == pe && p != eof )
				goto _out8;
			if ( p == eof ) {
				goto _st8;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st457;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st457;
					}
				} else {
					goto _st457;
				}
				goto _st0;
			}
			_st458:
			if ( p == eof )
				goto _out458;
			p+= 1;
			st_case_458:
			if ( p == pe && p != eof )
				goto _out458;
			if ( p == eof ) {
				goto _st458;}
			else {
				switch( ( (*( p))) ) {
					case 34: {
						goto _st0;
					}
					case 35: {
						goto _st453;
					}
					case 37: {
						goto _st5;
					}
					case 47: {
						goto _st459;
					}
					case 60: {
						goto _st0;
					}
					case 62: {
						goto _st0;
					}
					case 63: {
						goto _st456;
					}
					case 96: {
						goto _st0;
					}
					case 127: {
						goto _st0;
					}
				}
				if ( ( (*( p))) < 91 ) {
					if ( 0 <= ( (*( p))) && ( (*( p))) <= 32 ) {
						goto _st0;
					}
				} else if ( ( (*( p))) > 94 ) {
					if ( 123 <= ( (*( p))) && ( (*( p))) <= 125 ) {
						goto _st0;
					}
				} else {
					goto _st0;
				}
				goto _st455;
			}
			_ctr486:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 2258 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 2268 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st459;
			_st459:
			if ( p == eof )
				goto _out459;
			p+= 1;
			st_case_459:
			if ( p == pe && p != eof )
				goto _out459;
			if ( p == eof ) {
				goto _ctr486;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _ctr487;
					}
					case 33: {
						goto _ctr488;
					}
					case 35: {
						goto _ctr489;
					}
					case 37: {
						goto _ctr490;
					}
					case 47: {
						goto _ctr491;
					}
					case 48: {
						goto _ctr492;
					}
					case 49: {
						goto _ctr493;
					}
					case 50: {
						goto _ctr494;
					}
					case 58: {
						goto _ctr496;
					}
					case 59: {
						goto _ctr488;
					}
					case 61: {
						goto _ctr488;
					}
					case 63: {
						goto _ctr497;
					}
					case 64: {
						goto _ctr498;
					}
					case 91: {
						goto _ctr499;
					}
					case 95: {
						goto _ctr488;
					}
					case 126: {
						goto _ctr488;
					}
				}
				if ( ( (*( p))) < 51 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _ctr488;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _ctr488;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _ctr488;
					}
				} else {
					goto _ctr495;
				}
				goto _st0;
			}
			_ctr487:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 2352 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st9;
			_st9:
			if ( p == eof )
				goto _out9;
			p+= 1;
			st_case_9:
			if ( p == pe && p != eof )
				goto _out9;
			if ( p == eof ) {
				goto _st9;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st10;
				}
				goto _st0;
			}
			_st10:
			if ( p == eof )
				goto _out10;
			p+= 1;
			st_case_10:
			if ( p == pe && p != eof )
				goto _out10;
			if ( p == eof ) {
				goto _st10;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st11;
				}
				goto _st0;
			}
			_st11:
			if ( p == eof )
				goto _out11;
			p+= 1;
			st_case_11:
			if ( p == pe && p != eof )
				goto _out11;
			if ( p == eof ) {
				goto _st11;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st12;
				}
				goto _st0;
			}
			_st12:
			if ( p == eof )
				goto _out12;
			p+= 1;
			st_case_12:
			if ( p == pe && p != eof )
				goto _out12;
			if ( p == eof ) {
				goto _st12;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st13;
					}
					case 48: {
						goto _st15;
					}
					case 49: {
						goto _st27;
					}
					case 50: {
						goto _st29;
					}
				}
				if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st28;
				}
				goto _st0;
			}
			_st13:
			if ( p == eof )
				goto _out13;
			p+= 1;
			st_case_13:
			if ( p == pe && p != eof )
				goto _out13;
			if ( p == eof ) {
				goto _st13;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st14;
				}
				goto _st0;
			}
			_st14:
			if ( p == eof )
				goto _out14;
			p+= 1;
			st_case_14:
			if ( p == pe && p != eof )
				goto _out14;
			if ( p == eof ) {
				goto _st14;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st15;
				}
				goto _st0;
			}
			_st15:
			if ( p == eof )
				goto _out15;
			p+= 1;
			st_case_15:
			if ( p == pe && p != eof )
				goto _out15;
			if ( p == eof ) {
				goto _st15;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st16;
				}
				goto _st0;
			}
			_st16:
			if ( p == eof )
				goto _out16;
			p+= 1;
			st_case_16:
			if ( p == pe && p != eof )
				goto _out16;
			if ( p == eof ) {
				goto _st16;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st17;
					}
					case 48: {
						goto _st19;
					}
					case 49: {
						goto _st23;
					}
					case 50: {
						goto _st25;
					}
				}
				if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st24;
				}
				goto _st0;
			}
			_st17:
			if ( p == eof )
				goto _out17;
			p+= 1;
			st_case_17:
			if ( p == pe && p != eof )
				goto _out17;
			if ( p == eof ) {
				goto _st17;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st18;
				}
				goto _st0;
			}
			_st18:
			if ( p == eof )
				goto _out18;
			p+= 1;
			st_case_18:
			if ( p == pe && p != eof )
				goto _out18;
			if ( p == eof ) {
				goto _st18;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st19;
				}
				goto _st0;
			}
			_st19:
			if ( p == eof )
				goto _out19;
			p+= 1;
			st_case_19:
			if ( p == pe && p != eof )
				goto _out19;
			if ( p == eof ) {
				goto _st19;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st20;
				}
				goto _st0;
			}
			_st20:
			if ( p == eof )
				goto _out20;
			p+= 1;
			st_case_20:
			if ( p == pe && p != eof )
				goto _out20;
			if ( p == eof ) {
				goto _st20;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st21;
					}
					case 48: {
						goto _st460;
					}
					case 49: {
						goto _st463;
					}
					case 50: {
						goto _st465;
					}
				}
				if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st464;
				}
				goto _st0;
			}
			_st21:
			if ( p == eof )
				goto _out21;
			p+= 1;
			st_case_21:
			if ( p == pe && p != eof )
				goto _out21;
			if ( p == eof ) {
				goto _st21;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st22;
				}
				goto _st0;
			}
			_st22:
			if ( p == eof )
				goto _out22;
			p+= 1;
			st_case_22:
			if ( p == pe && p != eof )
				goto _out22;
			if ( p == eof ) {
				goto _st22;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st460;
				}
				goto _st0;
			}
			_ctr500:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 2616 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st460;
			_st460:
			if ( p == eof )
				goto _out460;
			p+= 1;
			st_case_460:
			if ( p == pe && p != eof )
				goto _out460;
			if ( p == eof ) {
				goto _ctr500;}
			else {
				switch( ( (*( p))) ) {
					case 35: {
						goto _ctr501;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 63: {
						goto _ctr504;
					}
				}
				goto _st0;
			}
			_ctr531:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 2649 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 2659 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st461;
			_ctr503:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 2671 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st461;
			_ctr505:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 2678 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 2688 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st461;
			_st461:
			if ( p == eof )
				goto _out461;
			p+= 1;
			st_case_461:
			if ( p == pe && p != eof )
				goto _out461;
			if ( p == eof ) {
				goto _ctr505;}
			else {
				switch( ( (*( p))) ) {
					case 35: {
						goto _ctr506;
					}
					case 47: {
						goto _ctr507;
					}
					case 63: {
						goto _ctr509;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _ctr508;
				}
				goto _st0;
			}
			_ctr508:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 2721 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st462;
			_ctr510:
				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 2733 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st462;
			_st462:
			if ( p == eof )
				goto _out462;
			p+= 1;
			st_case_462:
			if ( p == pe && p != eof )
				goto _out462;
			if ( p == eof ) {
				goto _ctr510;}
			else {
				switch( ( (*( p))) ) {
					case 35: {
						goto _ctr511;
					}
					case 47: {
						goto _ctr512;
					}
					case 63: {
						goto _ctr514;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st462;
				}
				goto _st0;
			}
			_ctr515:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 2771 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st463;
			_st463:
			if ( p == eof )
				goto _out463;
			p+= 1;
			st_case_463:
			if ( p == pe && p != eof )
				goto _out463;
			if ( p == eof ) {
				goto _ctr515;}
			else {
				switch( ( (*( p))) ) {
					case 35: {
						goto _ctr501;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 63: {
						goto _ctr504;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st464;
				}
				goto _st0;
			}
			_ctr516:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 2812 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st464;
			_st464:
			if ( p == eof )
				goto _out464;
			p+= 1;
			st_case_464:
			if ( p == pe && p != eof )
				goto _out464;
			if ( p == eof ) {
				goto _ctr516;}
			else {
				switch( ( (*( p))) ) {
					case 35: {
						goto _ctr501;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 63: {
						goto _ctr504;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st460;
				}
				goto _st0;
			}
			_ctr517:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 2853 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st465;
			_st465:
			if ( p == eof )
				goto _out465;
			p+= 1;
			st_case_465:
			if ( p == pe && p != eof )
				goto _out465;
			if ( p == eof ) {
				goto _ctr517;}
			else {
				switch( ( (*( p))) ) {
					case 35: {
						goto _ctr501;
					}
					case 47: {
						goto _ctr502;
					}
					case 53: {
						goto _st466;
					}
					case 58: {
						goto _ctr503;
					}
					case 63: {
						goto _ctr504;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st460;
				}
				goto _st0;
			}
			_ctr519:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 2897 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st466;
			_st466:
			if ( p == eof )
				goto _out466;
			p+= 1;
			st_case_466:
			if ( p == pe && p != eof )
				goto _out466;
			if ( p == eof ) {
				goto _ctr519;}
			else {
				switch( ( (*( p))) ) {
					case 35: {
						goto _ctr501;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 63: {
						goto _ctr504;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 53 ) {
					goto _st460;
				}
				goto _st0;
			}
			_st23:
			if ( p == eof )
				goto _out23;
			p+= 1;
			st_case_23:
			if ( p == pe && p != eof )
				goto _out23;
			if ( p == eof ) {
				goto _st23;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st20;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st24;
				}
				goto _st0;
			}
			_st24:
			if ( p == eof )
				goto _out24;
			p+= 1;
			st_case_24:
			if ( p == pe && p != eof )
				goto _out24;
			if ( p == eof ) {
				goto _st24;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st20;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st19;
				}
				goto _st0;
			}
			_st25:
			if ( p == eof )
				goto _out25;
			p+= 1;
			st_case_25:
			if ( p == pe && p != eof )
				goto _out25;
			if ( p == eof ) {
				goto _st25;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st20;
					}
					case 53: {
						goto _st26;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st19;
				}
				goto _st0;
			}
			_st26:
			if ( p == eof )
				goto _out26;
			p+= 1;
			st_case_26:
			if ( p == pe && p != eof )
				goto _out26;
			if ( p == eof ) {
				goto _st26;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st20;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 53 ) {
					goto _st19;
				}
				goto _st0;
			}
			_st27:
			if ( p == eof )
				goto _out27;
			p+= 1;
			st_case_27:
			if ( p == pe && p != eof )
				goto _out27;
			if ( p == eof ) {
				goto _st27;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st16;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st28;
				}
				goto _st0;
			}
			_st28:
			if ( p == eof )
				goto _out28;
			p+= 1;
			st_case_28:
			if ( p == pe && p != eof )
				goto _out28;
			if ( p == eof ) {
				goto _st28;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st16;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st15;
				}
				goto _st0;
			}
			_st29:
			if ( p == eof )
				goto _out29;
			p+= 1;
			st_case_29:
			if ( p == pe && p != eof )
				goto _out29;
			if ( p == eof ) {
				goto _st29;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st16;
					}
					case 53: {
						goto _st30;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st15;
				}
				goto _st0;
			}
			_st30:
			if ( p == eof )
				goto _out30;
			p+= 1;
			st_case_30:
			if ( p == pe && p != eof )
				goto _out30;
			if ( p == eof ) {
				goto _st30;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st16;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 53 ) {
					goto _st15;
				}
				goto _st0;
			}
			_ctr488:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 3087 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st467;
			_ctr520:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 3099 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st467;
			_st467:
			if ( p == eof )
				goto _out467;
			p+= 1;
			st_case_467:
			if ( p == pe && p != eof )
				goto _out467;
			if ( p == eof ) {
				goto _ctr520;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr521;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st467;
					}
				} else {
					goto _st467;
				}
				goto _st0;
			}
			_ctr490:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 3161 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st31;
			_st31:
			if ( p == eof )
				goto _out31;
			p+= 1;
			st_case_31:
			if ( p == pe && p != eof )
				goto _out31;
			if ( p == eof ) {
				goto _st31;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st32;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st32;
					}
				} else {
					goto _st32;
				}
				goto _st0;
			}
			_st32:
			if ( p == eof )
				goto _out32;
			p+= 1;
			st_case_32:
			if ( p == pe && p != eof )
				goto _out32;
			if ( p == eof ) {
				goto _st32;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st467;
					}
				} else {
					goto _st467;
				}
				goto _st0;
			}
			_ctr496:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 3214 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 3224 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st468;
			_ctr521:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 3236 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st468;
			_ctr522:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 3243 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 3253 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st468;
			_st468:
			if ( p == eof )
				goto _out468;
			p+= 1;
			st_case_468:
			if ( p == pe && p != eof )
				goto _out468;
			if ( p == eof ) {
				goto _ctr522;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st33;
					}
					case 35: {
						goto _ctr506;
					}
					case 37: {
						goto _st34;
					}
					case 47: {
						goto _ctr507;
					}
					case 61: {
						goto _st33;
					}
					case 63: {
						goto _ctr509;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st33;
					}
					case 126: {
						goto _st33;
					}
				}
				if ( ( (*( p))) < 58 ) {
					if ( ( (*( p))) > 46 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _ctr523;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st33;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st33;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st33;
					}
				} else {
					goto _st33;
				}
				goto _st0;
			}
			_st33:
			if ( p == eof )
				goto _out33;
			p+= 1;
			st_case_33:
			if ( p == pe && p != eof )
				goto _out33;
			if ( p == eof ) {
				goto _st33;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st33;
					}
					case 37: {
						goto _st34;
					}
					case 61: {
						goto _st33;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st33;
					}
					case 126: {
						goto _st33;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _st33;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st33;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st33;
					}
				} else {
					goto _st33;
				}
				goto _st0;
			}
			_st34:
			if ( p == eof )
				goto _out34;
			p+= 1;
			st_case_34:
			if ( p == pe && p != eof )
				goto _out34;
			if ( p == eof ) {
				goto _st34;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st35;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st35;
					}
				} else {
					goto _st35;
				}
				goto _st0;
			}
			_st35:
			if ( p == eof )
				goto _out35;
			p+= 1;
			st_case_35:
			if ( p == pe && p != eof )
				goto _out35;
			if ( p == eof ) {
				goto _st35;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st33;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st33;
					}
				} else {
					goto _st33;
				}
				goto _st0;
			}
			_ctr44:
				{
#line 35 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if(mark) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setUserinfo(std::string(mark, p - mark));
				}
				mark = NULL;
			}
			
#line 3419 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st469;
			_ctr524:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 3426 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 3436 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st469;
			_ctr498:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 3443 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 35 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if(mark) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setUserinfo(std::string(mark, p - mark));
				}
				mark = NULL;
			}
			
#line 3454 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st469;
			_st469:
			if ( p == eof )
				goto _out469;
			p+= 1;
			st_case_469:
			if ( p == pe && p != eof )
				goto _out469;
			if ( p == eof ) {
				goto _ctr524;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _ctr487;
					}
					case 33: {
						goto _ctr525;
					}
					case 35: {
						goto _ctr489;
					}
					case 37: {
						goto _ctr526;
					}
					case 47: {
						goto _ctr491;
					}
					case 48: {
						goto _ctr527;
					}
					case 49: {
						goto _ctr528;
					}
					case 50: {
						goto _ctr529;
					}
					case 58: {
						goto _ctr531;
					}
					case 59: {
						goto _ctr525;
					}
					case 61: {
						goto _ctr525;
					}
					case 63: {
						goto _ctr497;
					}
					case 91: {
						goto _ctr499;
					}
					case 95: {
						goto _ctr525;
					}
					case 126: {
						goto _ctr525;
					}
				}
				if ( ( (*( p))) < 51 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _ctr525;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _ctr525;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _ctr525;
					}
				} else {
					goto _ctr530;
				}
				goto _st0;
			}
			_ctr525:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 3535 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st470;
			_ctr532:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 3547 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st470;
			_st470:
			if ( p == eof )
				goto _out470;
			p+= 1;
			st_case_470:
			if ( p == pe && p != eof )
				goto _out470;
			if ( p == eof ) {
				goto _ctr532;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st470;
					}
				} else {
					goto _st470;
				}
				goto _st0;
			}
			_ctr526:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 3606 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st36;
			_st36:
			if ( p == eof )
				goto _out36;
			p+= 1;
			st_case_36:
			if ( p == pe && p != eof )
				goto _out36;
			if ( p == eof ) {
				goto _st36;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st37;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st37;
					}
				} else {
					goto _st37;
				}
				goto _st0;
			}
			_st37:
			if ( p == eof )
				goto _out37;
			p+= 1;
			st_case_37:
			if ( p == pe && p != eof )
				goto _out37;
			if ( p == eof ) {
				goto _st37;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st470;
					}
				} else {
					goto _st470;
				}
				goto _st0;
			}
			_ctr527:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 3659 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st471;
			_ctr533:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 3671 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st471;
			_st471:
			if ( p == eof )
				goto _out471;
			p+= 1;
			st_case_471:
			if ( p == pe && p != eof )
				goto _out471;
			if ( p == eof ) {
				goto _ctr533;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 46: {
						goto _st472;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st470;
					}
				} else {
					goto _st470;
				}
				goto _st0;
			}
			_ctr535:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 3738 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st472;
			_st472:
			if ( p == eof )
				goto _out472;
			p+= 1;
			st_case_472:
			if ( p == pe && p != eof )
				goto _out472;
			if ( p == eof ) {
				goto _ctr535;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st13;
					}
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 47: {
						goto _ctr502;
					}
					case 48: {
						goto _st473;
					}
					case 49: {
						goto _st481;
					}
					case 50: {
						goto _st483;
					}
					case 58: {
						goto _ctr503;
					}
					case 59: {
						goto _st470;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 51 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st470;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st470;
					}
				} else {
					goto _st482;
				}
				goto _st0;
			}
			_ctr540:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 3821 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st473;
			_st473:
			if ( p == eof )
				goto _out473;
			p+= 1;
			st_case_473:
			if ( p == pe && p != eof )
				goto _out473;
			if ( p == eof ) {
				goto _ctr540;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 46: {
						goto _st474;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st470;
					}
				} else {
					goto _st470;
				}
				goto _st0;
			}
			_ctr542:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 3888 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st474;
			_st474:
			if ( p == eof )
				goto _out474;
			p+= 1;
			st_case_474:
			if ( p == pe && p != eof )
				goto _out474;
			if ( p == eof ) {
				goto _ctr542;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st17;
					}
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 47: {
						goto _ctr502;
					}
					case 48: {
						goto _st475;
					}
					case 49: {
						goto _st477;
					}
					case 50: {
						goto _st479;
					}
					case 58: {
						goto _ctr503;
					}
					case 59: {
						goto _st470;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 51 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st470;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st470;
					}
				} else {
					goto _st478;
				}
				goto _st0;
			}
			_ctr547:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 3971 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st475;
			_st475:
			if ( p == eof )
				goto _out475;
			p+= 1;
			st_case_475:
			if ( p == pe && p != eof )
				goto _out475;
			if ( p == eof ) {
				goto _ctr547;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 46: {
						goto _st476;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st470;
					}
				} else {
					goto _st470;
				}
				goto _st0;
			}
			_ctr549:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 4038 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st476;
			_st476:
			if ( p == eof )
				goto _out476;
			p+= 1;
			st_case_476:
			if ( p == pe && p != eof )
				goto _out476;
			if ( p == eof ) {
				goto _ctr549;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st21;
					}
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st470;
					}
				} else {
					goto _st470;
				}
				goto _st0;
			}
			_ctr550:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 4105 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st477;
			_st477:
			if ( p == eof )
				goto _out477;
			p+= 1;
			st_case_477:
			if ( p == pe && p != eof )
				goto _out477;
			if ( p == eof ) {
				goto _ctr550;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 46: {
						goto _st476;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 59: {
						goto _st470;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st470;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st470;
					}
				} else {
					goto _st478;
				}
				goto _st0;
			}
			_ctr551:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 4179 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st478;
			_st478:
			if ( p == eof )
				goto _out478;
			p+= 1;
			st_case_478:
			if ( p == pe && p != eof )
				goto _out478;
			if ( p == eof ) {
				goto _ctr551;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 46: {
						goto _st476;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 59: {
						goto _st470;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st470;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st470;
					}
				} else {
					goto _st475;
				}
				goto _st0;
			}
			_ctr552:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 4253 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st479;
			_st479:
			if ( p == eof )
				goto _out479;
			p+= 1;
			st_case_479:
			if ( p == pe && p != eof )
				goto _out479;
			if ( p == eof ) {
				goto _ctr552;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 46: {
						goto _st476;
					}
					case 47: {
						goto _ctr502;
					}
					case 53: {
						goto _st480;
					}
					case 58: {
						goto _ctr503;
					}
					case 59: {
						goto _st470;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st470;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st470;
					}
				} else {
					goto _st475;
				}
				goto _st0;
			}
			_ctr554:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 4330 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st480;
			_st480:
			if ( p == eof )
				goto _out480;
			p+= 1;
			st_case_480:
			if ( p == pe && p != eof )
				goto _out480;
			if ( p == eof ) {
				goto _ctr554;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 46: {
						goto _st476;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( ( (*( p))) > 45 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _st475;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st470;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st470;
					}
				} else {
					goto _st470;
				}
				goto _st0;
			}
			_ctr555:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 4405 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st481;
			_st481:
			if ( p == eof )
				goto _out481;
			p+= 1;
			st_case_481:
			if ( p == pe && p != eof )
				goto _out481;
			if ( p == eof ) {
				goto _ctr555;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 46: {
						goto _st474;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 59: {
						goto _st470;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st470;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st470;
					}
				} else {
					goto _st482;
				}
				goto _st0;
			}
			_ctr556:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 4479 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st482;
			_st482:
			if ( p == eof )
				goto _out482;
			p+= 1;
			st_case_482:
			if ( p == pe && p != eof )
				goto _out482;
			if ( p == eof ) {
				goto _ctr556;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 46: {
						goto _st474;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 59: {
						goto _st470;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st470;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st470;
					}
				} else {
					goto _st473;
				}
				goto _st0;
			}
			_ctr557:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 4553 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st483;
			_st483:
			if ( p == eof )
				goto _out483;
			p+= 1;
			st_case_483:
			if ( p == pe && p != eof )
				goto _out483;
			if ( p == eof ) {
				goto _ctr557;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 46: {
						goto _st474;
					}
					case 47: {
						goto _ctr502;
					}
					case 53: {
						goto _st484;
					}
					case 58: {
						goto _ctr503;
					}
					case 59: {
						goto _st470;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st470;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st470;
					}
				} else {
					goto _st473;
				}
				goto _st0;
			}
			_ctr559:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 4630 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st484;
			_st484:
			if ( p == eof )
				goto _out484;
			p+= 1;
			st_case_484:
			if ( p == pe && p != eof )
				goto _out484;
			if ( p == eof ) {
				goto _ctr559;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 46: {
						goto _st474;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( ( (*( p))) > 45 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _st473;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st470;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st470;
					}
				} else {
					goto _st470;
				}
				goto _st0;
			}
			_ctr528:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 4700 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st485;
			_ctr560:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 4712 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st485;
			_st485:
			if ( p == eof )
				goto _out485;
			p+= 1;
			st_case_485:
			if ( p == pe && p != eof )
				goto _out485;
			if ( p == eof ) {
				goto _ctr560;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 46: {
						goto _st472;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 59: {
						goto _st470;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st470;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st470;
					}
				} else {
					goto _st486;
				}
				goto _st0;
			}
			_ctr530:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 4781 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st486;
			_ctr562:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 4793 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st486;
			_st486:
			if ( p == eof )
				goto _out486;
			p+= 1;
			st_case_486:
			if ( p == pe && p != eof )
				goto _out486;
			if ( p == eof ) {
				goto _ctr562;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 46: {
						goto _st472;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 59: {
						goto _st470;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st470;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st470;
					}
				} else {
					goto _st471;
				}
				goto _st0;
			}
			_ctr529:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 4862 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st487;
			_ctr564:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 4874 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st487;
			_st487:
			if ( p == eof )
				goto _out487;
			p+= 1;
			st_case_487:
			if ( p == pe && p != eof )
				goto _out487;
			if ( p == eof ) {
				goto _ctr564;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 46: {
						goto _st472;
					}
					case 47: {
						goto _ctr502;
					}
					case 53: {
						goto _st488;
					}
					case 58: {
						goto _ctr503;
					}
					case 59: {
						goto _st470;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st470;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st470;
					}
				} else {
					goto _st471;
				}
				goto _st0;
			}
			_ctr566:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 4951 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st488;
			_st488:
			if ( p == eof )
				goto _out488;
			p+= 1;
			st_case_488:
			if ( p == pe && p != eof )
				goto _out488;
			if ( p == eof ) {
				goto _ctr566;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st470;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st36;
					}
					case 46: {
						goto _st472;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr503;
					}
					case 61: {
						goto _st470;
					}
					case 63: {
						goto _ctr504;
					}
					case 95: {
						goto _st470;
					}
					case 126: {
						goto _st470;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( ( (*( p))) > 45 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _st471;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st470;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st470;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st470;
					}
				} else {
					goto _st470;
				}
				goto _st0;
			}
			_ctr499:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 5021 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st38;
			_st38:
			if ( p == eof )
				goto _out38;
			p+= 1;
			st_case_38:
			if ( p == pe && p != eof )
				goto _out38;
			if ( p == eof ) {
				goto _st38;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st146;
					}
					case 118: {
						goto _st225;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st39;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st39;
					}
				} else {
					goto _st39;
				}
				goto _st0;
			}
			_st39:
			if ( p == eof )
				goto _out39;
			p+= 1;
			st_case_39:
			if ( p == pe && p != eof )
				goto _out39;
			if ( p == eof ) {
				goto _st39;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st43;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st40;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st40;
					}
				} else {
					goto _st40;
				}
				goto _st0;
			}
			_st40:
			if ( p == eof )
				goto _out40;
			p+= 1;
			st_case_40:
			if ( p == pe && p != eof )
				goto _out40;
			if ( p == eof ) {
				goto _st40;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st43;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st41;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st41;
					}
				} else {
					goto _st41;
				}
				goto _st0;
			}
			_st41:
			if ( p == eof )
				goto _out41;
			p+= 1;
			st_case_41:
			if ( p == pe && p != eof )
				goto _out41;
			if ( p == eof ) {
				goto _st41;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st43;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st42;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st42;
					}
				} else {
					goto _st42;
				}
				goto _st0;
			}
			_st42:
			if ( p == eof )
				goto _out42;
			p+= 1;
			st_case_42:
			if ( p == pe && p != eof )
				goto _out42;
			if ( p == eof ) {
				goto _st42;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st43;
				}
				goto _st0;
			}
			_st43:
			if ( p == eof )
				goto _out43;
			p+= 1;
			st_case_43:
			if ( p == pe && p != eof )
				goto _out43;
			if ( p == eof ) {
				goto _st43;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st141;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st44;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st44;
					}
				} else {
					goto _st44;
				}
				goto _st0;
			}
			_st44:
			if ( p == eof )
				goto _out44;
			p+= 1;
			st_case_44:
			if ( p == pe && p != eof )
				goto _out44;
			if ( p == eof ) {
				goto _st44;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st48;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st45;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st45;
					}
				} else {
					goto _st45;
				}
				goto _st0;
			}
			_st45:
			if ( p == eof )
				goto _out45;
			p+= 1;
			st_case_45:
			if ( p == pe && p != eof )
				goto _out45;
			if ( p == eof ) {
				goto _st45;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st48;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st46;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st46;
					}
				} else {
					goto _st46;
				}
				goto _st0;
			}
			_st46:
			if ( p == eof )
				goto _out46;
			p+= 1;
			st_case_46:
			if ( p == pe && p != eof )
				goto _out46;
			if ( p == eof ) {
				goto _st46;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st48;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st47;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st47;
					}
				} else {
					goto _st47;
				}
				goto _st0;
			}
			_st47:
			if ( p == eof )
				goto _out47;
			p+= 1;
			st_case_47:
			if ( p == pe && p != eof )
				goto _out47;
			if ( p == eof ) {
				goto _st47;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st48;
				}
				goto _st0;
			}
			_st48:
			if ( p == eof )
				goto _out48;
			p+= 1;
			st_case_48:
			if ( p == pe && p != eof )
				goto _out48;
			if ( p == eof ) {
				goto _st48;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st136;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st49;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st49;
					}
				} else {
					goto _st49;
				}
				goto _st0;
			}
			_st49:
			if ( p == eof )
				goto _out49;
			p+= 1;
			st_case_49:
			if ( p == pe && p != eof )
				goto _out49;
			if ( p == eof ) {
				goto _st49;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st53;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st50;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st50;
					}
				} else {
					goto _st50;
				}
				goto _st0;
			}
			_st50:
			if ( p == eof )
				goto _out50;
			p+= 1;
			st_case_50:
			if ( p == pe && p != eof )
				goto _out50;
			if ( p == eof ) {
				goto _st50;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st53;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st51;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st51;
					}
				} else {
					goto _st51;
				}
				goto _st0;
			}
			_st51:
			if ( p == eof )
				goto _out51;
			p+= 1;
			st_case_51:
			if ( p == pe && p != eof )
				goto _out51;
			if ( p == eof ) {
				goto _st51;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st53;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st52;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st52;
					}
				} else {
					goto _st52;
				}
				goto _st0;
			}
			_st52:
			if ( p == eof )
				goto _out52;
			p+= 1;
			st_case_52:
			if ( p == pe && p != eof )
				goto _out52;
			if ( p == eof ) {
				goto _st52;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st53;
				}
				goto _st0;
			}
			_st53:
			if ( p == eof )
				goto _out53;
			p+= 1;
			st_case_53:
			if ( p == pe && p != eof )
				goto _out53;
			if ( p == eof ) {
				goto _st53;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st131;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st54;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st54;
					}
				} else {
					goto _st54;
				}
				goto _st0;
			}
			_st54:
			if ( p == eof )
				goto _out54;
			p+= 1;
			st_case_54:
			if ( p == pe && p != eof )
				goto _out54;
			if ( p == eof ) {
				goto _st54;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st58;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st55;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st55;
					}
				} else {
					goto _st55;
				}
				goto _st0;
			}
			_st55:
			if ( p == eof )
				goto _out55;
			p+= 1;
			st_case_55:
			if ( p == pe && p != eof )
				goto _out55;
			if ( p == eof ) {
				goto _st55;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st58;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st56;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st56;
					}
				} else {
					goto _st56;
				}
				goto _st0;
			}
			_st56:
			if ( p == eof )
				goto _out56;
			p+= 1;
			st_case_56:
			if ( p == pe && p != eof )
				goto _out56;
			if ( p == eof ) {
				goto _st56;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st58;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st57;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st57;
					}
				} else {
					goto _st57;
				}
				goto _st0;
			}
			_st57:
			if ( p == eof )
				goto _out57;
			p+= 1;
			st_case_57:
			if ( p == pe && p != eof )
				goto _out57;
			if ( p == eof ) {
				goto _st57;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st58;
				}
				goto _st0;
			}
			_st58:
			if ( p == eof )
				goto _out58;
			p+= 1;
			st_case_58:
			if ( p == pe && p != eof )
				goto _out58;
			if ( p == eof ) {
				goto _st58;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st126;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st59;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st59;
					}
				} else {
					goto _st59;
				}
				goto _st0;
			}
			_st59:
			if ( p == eof )
				goto _out59;
			p+= 1;
			st_case_59:
			if ( p == pe && p != eof )
				goto _out59;
			if ( p == eof ) {
				goto _st59;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st63;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st60;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st60;
					}
				} else {
					goto _st60;
				}
				goto _st0;
			}
			_st60:
			if ( p == eof )
				goto _out60;
			p+= 1;
			st_case_60:
			if ( p == pe && p != eof )
				goto _out60;
			if ( p == eof ) {
				goto _st60;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st63;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st61;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st61;
					}
				} else {
					goto _st61;
				}
				goto _st0;
			}
			_st61:
			if ( p == eof )
				goto _out61;
			p+= 1;
			st_case_61:
			if ( p == pe && p != eof )
				goto _out61;
			if ( p == eof ) {
				goto _st61;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st63;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st62;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st62;
					}
				} else {
					goto _st62;
				}
				goto _st0;
			}
			_st62:
			if ( p == eof )
				goto _out62;
			p+= 1;
			st_case_62:
			if ( p == pe && p != eof )
				goto _out62;
			if ( p == eof ) {
				goto _st62;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st63;
				}
				goto _st0;
			}
			_st63:
			if ( p == eof )
				goto _out63;
			p+= 1;
			st_case_63:
			if ( p == pe && p != eof )
				goto _out63;
			if ( p == eof ) {
				goto _st63;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st113;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st64;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st64;
					}
				} else {
					goto _st64;
				}
				goto _st0;
			}
			_st64:
			if ( p == eof )
				goto _out64;
			p+= 1;
			st_case_64:
			if ( p == pe && p != eof )
				goto _out64;
			if ( p == eof ) {
				goto _st64;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st68;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st65;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st65;
					}
				} else {
					goto _st65;
				}
				goto _st0;
			}
			_st65:
			if ( p == eof )
				goto _out65;
			p+= 1;
			st_case_65:
			if ( p == pe && p != eof )
				goto _out65;
			if ( p == eof ) {
				goto _st65;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st68;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st66;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st66;
					}
				} else {
					goto _st66;
				}
				goto _st0;
			}
			_st66:
			if ( p == eof )
				goto _out66;
			p+= 1;
			st_case_66:
			if ( p == pe && p != eof )
				goto _out66;
			if ( p == eof ) {
				goto _st66;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st68;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st67;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st67;
					}
				} else {
					goto _st67;
				}
				goto _st0;
			}
			_st67:
			if ( p == eof )
				goto _out67;
			p+= 1;
			st_case_67:
			if ( p == pe && p != eof )
				goto _out67;
			if ( p == eof ) {
				goto _st67;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st68;
				}
				goto _st0;
			}
			_st68:
			if ( p == eof )
				goto _out68;
			p+= 1;
			st_case_68:
			if ( p == pe && p != eof )
				goto _out68;
			if ( p == eof ) {
				goto _st68;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st69;
					}
					case 48: {
						goto _st96;
					}
					case 49: {
						goto _st104;
					}
					case 50: {
						goto _st107;
					}
					case 58: {
						goto _st111;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st110;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st112;
					}
				} else {
					goto _st112;
				}
				goto _st0;
			}
			_st69:
			if ( p == eof )
				goto _out69;
			p+= 1;
			st_case_69:
			if ( p == pe && p != eof )
				goto _out69;
			if ( p == eof ) {
				goto _st69;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st70;
				}
				goto _st0;
			}
			_st70:
			if ( p == eof )
				goto _out70;
			p+= 1;
			st_case_70:
			if ( p == pe && p != eof )
				goto _out70;
			if ( p == eof ) {
				goto _st70;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st71;
				}
				goto _st0;
			}
			_st71:
			if ( p == eof )
				goto _out71;
			p+= 1;
			st_case_71:
			if ( p == pe && p != eof )
				goto _out71;
			if ( p == eof ) {
				goto _st71;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st72;
				}
				goto _st0;
			}
			_st72:
			if ( p == eof )
				goto _out72;
			p+= 1;
			st_case_72:
			if ( p == pe && p != eof )
				goto _out72;
			if ( p == eof ) {
				goto _st72;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st73;
					}
					case 48: {
						goto _st75;
					}
					case 49: {
						goto _st92;
					}
					case 50: {
						goto _st94;
					}
				}
				if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st93;
				}
				goto _st0;
			}
			_st73:
			if ( p == eof )
				goto _out73;
			p+= 1;
			st_case_73:
			if ( p == pe && p != eof )
				goto _out73;
			if ( p == eof ) {
				goto _st73;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st74;
				}
				goto _st0;
			}
			_st74:
			if ( p == eof )
				goto _out74;
			p+= 1;
			st_case_74:
			if ( p == pe && p != eof )
				goto _out74;
			if ( p == eof ) {
				goto _st74;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st75;
				}
				goto _st0;
			}
			_st75:
			if ( p == eof )
				goto _out75;
			p+= 1;
			st_case_75:
			if ( p == pe && p != eof )
				goto _out75;
			if ( p == eof ) {
				goto _st75;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st76;
				}
				goto _st0;
			}
			_st76:
			if ( p == eof )
				goto _out76;
			p+= 1;
			st_case_76:
			if ( p == pe && p != eof )
				goto _out76;
			if ( p == eof ) {
				goto _st76;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st77;
					}
					case 48: {
						goto _st79;
					}
					case 49: {
						goto _st88;
					}
					case 50: {
						goto _st90;
					}
				}
				if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st89;
				}
				goto _st0;
			}
			_st77:
			if ( p == eof )
				goto _out77;
			p+= 1;
			st_case_77:
			if ( p == pe && p != eof )
				goto _out77;
			if ( p == eof ) {
				goto _st77;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st78;
				}
				goto _st0;
			}
			_st78:
			if ( p == eof )
				goto _out78;
			p+= 1;
			st_case_78:
			if ( p == pe && p != eof )
				goto _out78;
			if ( p == eof ) {
				goto _st78;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st79;
				}
				goto _st0;
			}
			_st79:
			if ( p == eof )
				goto _out79;
			p+= 1;
			st_case_79:
			if ( p == pe && p != eof )
				goto _out79;
			if ( p == eof ) {
				goto _st79;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st80;
				}
				goto _st0;
			}
			_st80:
			if ( p == eof )
				goto _out80;
			p+= 1;
			st_case_80:
			if ( p == pe && p != eof )
				goto _out80;
			if ( p == eof ) {
				goto _st80;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st81;
					}
					case 48: {
						goto _st83;
					}
					case 49: {
						goto _st84;
					}
					case 50: {
						goto _st86;
					}
				}
				if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st85;
				}
				goto _st0;
			}
			_st81:
			if ( p == eof )
				goto _out81;
			p+= 1;
			st_case_81:
			if ( p == pe && p != eof )
				goto _out81;
			if ( p == eof ) {
				goto _st81;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st82;
				}
				goto _st0;
			}
			_st82:
			if ( p == eof )
				goto _out82;
			p+= 1;
			st_case_82:
			if ( p == pe && p != eof )
				goto _out82;
			if ( p == eof ) {
				goto _st82;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st83;
				}
				goto _st0;
			}
			_st83:
			if ( p == eof )
				goto _out83;
			p+= 1;
			st_case_83:
			if ( p == pe && p != eof )
				goto _out83;
			if ( p == eof ) {
				goto _st83;}
			else {
				if ( ( (*( p))) == 93 ) {
					goto _st460;
				}
				goto _st0;
			}
			_st84:
			if ( p == eof )
				goto _out84;
			p+= 1;
			st_case_84:
			if ( p == pe && p != eof )
				goto _out84;
			if ( p == eof ) {
				goto _st84;}
			else {
				if ( ( (*( p))) == 93 ) {
					goto _st460;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st85;
				}
				goto _st0;
			}
			_st85:
			if ( p == eof )
				goto _out85;
			p+= 1;
			st_case_85:
			if ( p == pe && p != eof )
				goto _out85;
			if ( p == eof ) {
				goto _st85;}
			else {
				if ( ( (*( p))) == 93 ) {
					goto _st460;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st83;
				}
				goto _st0;
			}
			_st86:
			if ( p == eof )
				goto _out86;
			p+= 1;
			st_case_86:
			if ( p == pe && p != eof )
				goto _out86;
			if ( p == eof ) {
				goto _st86;}
			else {
				switch( ( (*( p))) ) {
					case 53: {
						goto _st87;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st83;
				}
				goto _st0;
			}
			_st87:
			if ( p == eof )
				goto _out87;
			p+= 1;
			st_case_87:
			if ( p == pe && p != eof )
				goto _out87;
			if ( p == eof ) {
				goto _st87;}
			else {
				if ( ( (*( p))) == 93 ) {
					goto _st460;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 53 ) {
					goto _st83;
				}
				goto _st0;
			}
			_st88:
			if ( p == eof )
				goto _out88;
			p+= 1;
			st_case_88:
			if ( p == pe && p != eof )
				goto _out88;
			if ( p == eof ) {
				goto _st88;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st80;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st89;
				}
				goto _st0;
			}
			_st89:
			if ( p == eof )
				goto _out89;
			p+= 1;
			st_case_89:
			if ( p == pe && p != eof )
				goto _out89;
			if ( p == eof ) {
				goto _st89;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st80;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st79;
				}
				goto _st0;
			}
			_st90:
			if ( p == eof )
				goto _out90;
			p+= 1;
			st_case_90:
			if ( p == pe && p != eof )
				goto _out90;
			if ( p == eof ) {
				goto _st90;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st80;
					}
					case 53: {
						goto _st91;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st79;
				}
				goto _st0;
			}
			_st91:
			if ( p == eof )
				goto _out91;
			p+= 1;
			st_case_91:
			if ( p == pe && p != eof )
				goto _out91;
			if ( p == eof ) {
				goto _st91;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st80;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 53 ) {
					goto _st79;
				}
				goto _st0;
			}
			_st92:
			if ( p == eof )
				goto _out92;
			p+= 1;
			st_case_92:
			if ( p == pe && p != eof )
				goto _out92;
			if ( p == eof ) {
				goto _st92;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st76;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st93;
				}
				goto _st0;
			}
			_st93:
			if ( p == eof )
				goto _out93;
			p+= 1;
			st_case_93:
			if ( p == pe && p != eof )
				goto _out93;
			if ( p == eof ) {
				goto _st93;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st76;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st75;
				}
				goto _st0;
			}
			_st94:
			if ( p == eof )
				goto _out94;
			p+= 1;
			st_case_94:
			if ( p == pe && p != eof )
				goto _out94;
			if ( p == eof ) {
				goto _st94;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st76;
					}
					case 53: {
						goto _st95;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st75;
				}
				goto _st0;
			}
			_st95:
			if ( p == eof )
				goto _out95;
			p+= 1;
			st_case_95:
			if ( p == pe && p != eof )
				goto _out95;
			if ( p == eof ) {
				goto _st95;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st76;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 53 ) {
					goto _st75;
				}
				goto _st0;
			}
			_st96:
			if ( p == eof )
				goto _out96;
			p+= 1;
			st_case_96:
			if ( p == pe && p != eof )
				goto _out96;
			if ( p == eof ) {
				goto _st96;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st100;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st97;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st97;
					}
				} else {
					goto _st97;
				}
				goto _st0;
			}
			_st97:
			if ( p == eof )
				goto _out97;
			p+= 1;
			st_case_97:
			if ( p == pe && p != eof )
				goto _out97;
			if ( p == eof ) {
				goto _st97;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st100;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st98;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st98;
					}
				} else {
					goto _st98;
				}
				goto _st0;
			}
			_st98:
			if ( p == eof )
				goto _out98;
			p+= 1;
			st_case_98:
			if ( p == pe && p != eof )
				goto _out98;
			if ( p == eof ) {
				goto _st98;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st100;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st99;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st99;
					}
				} else {
					goto _st99;
				}
				goto _st0;
			}
			_st99:
			if ( p == eof )
				goto _out99;
			p+= 1;
			st_case_99:
			if ( p == pe && p != eof )
				goto _out99;
			if ( p == eof ) {
				goto _st99;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st100;
				}
				goto _st0;
			}
			_st100:
			if ( p == eof )
				goto _out100;
			p+= 1;
			st_case_100:
			if ( p == pe && p != eof )
				goto _out100;
			if ( p == eof ) {
				goto _st100;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st83;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st101;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st101;
					}
				} else {
					goto _st101;
				}
				goto _st0;
			}
			_st101:
			if ( p == eof )
				goto _out101;
			p+= 1;
			st_case_101:
			if ( p == pe && p != eof )
				goto _out101;
			if ( p == eof ) {
				goto _st101;}
			else {
				if ( ( (*( p))) == 93 ) {
					goto _st460;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st102;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st102;
					}
				} else {
					goto _st102;
				}
				goto _st0;
			}
			_st102:
			if ( p == eof )
				goto _out102;
			p+= 1;
			st_case_102:
			if ( p == pe && p != eof )
				goto _out102;
			if ( p == eof ) {
				goto _st102;}
			else {
				if ( ( (*( p))) == 93 ) {
					goto _st460;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st103;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st103;
					}
				} else {
					goto _st103;
				}
				goto _st0;
			}
			_st103:
			if ( p == eof )
				goto _out103;
			p+= 1;
			st_case_103:
			if ( p == pe && p != eof )
				goto _out103;
			if ( p == eof ) {
				goto _st103;}
			else {
				if ( ( (*( p))) == 93 ) {
					goto _st460;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st83;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st83;
					}
				} else {
					goto _st83;
				}
				goto _st0;
			}
			_st104:
			if ( p == eof )
				goto _out104;
			p+= 1;
			st_case_104:
			if ( p == pe && p != eof )
				goto _out104;
			if ( p == eof ) {
				goto _st104;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st100;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st105;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st97;
					}
				} else {
					goto _st97;
				}
				goto _st0;
			}
			_st105:
			if ( p == eof )
				goto _out105;
			p+= 1;
			st_case_105:
			if ( p == pe && p != eof )
				goto _out105;
			if ( p == eof ) {
				goto _st105;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st100;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st106;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st98;
					}
				} else {
					goto _st98;
				}
				goto _st0;
			}
			_st106:
			if ( p == eof )
				goto _out106;
			p+= 1;
			st_case_106:
			if ( p == pe && p != eof )
				goto _out106;
			if ( p == eof ) {
				goto _st106;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st100;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st99;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st99;
					}
				} else {
					goto _st99;
				}
				goto _st0;
			}
			_st107:
			if ( p == eof )
				goto _out107;
			p+= 1;
			st_case_107:
			if ( p == pe && p != eof )
				goto _out107;
			if ( p == eof ) {
				goto _st107;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 53: {
						goto _st109;
					}
					case 58: {
						goto _st100;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st108;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st97;
					}
				} else {
					goto _st97;
				}
				goto _st0;
			}
			_st108:
			if ( p == eof )
				goto _out108;
			p+= 1;
			st_case_108:
			if ( p == pe && p != eof )
				goto _out108;
			if ( p == eof ) {
				goto _st108;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st100;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st98;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st98;
					}
				} else {
					goto _st98;
				}
				goto _st0;
			}
			_st109:
			if ( p == eof )
				goto _out109;
			p+= 1;
			st_case_109:
			if ( p == pe && p != eof )
				goto _out109;
			if ( p == eof ) {
				goto _st109;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st100;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st106;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st98;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st98;
					}
				} else {
					goto _st98;
				}
				goto _st0;
			}
			_st110:
			if ( p == eof )
				goto _out110;
			p+= 1;
			st_case_110:
			if ( p == pe && p != eof )
				goto _out110;
			if ( p == eof ) {
				goto _st110;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st100;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st108;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st97;
					}
				} else {
					goto _st97;
				}
				goto _st0;
			}
			_st111:
			if ( p == eof )
				goto _out111;
			p+= 1;
			st_case_111:
			if ( p == pe && p != eof )
				goto _out111;
			if ( p == eof ) {
				goto _st111;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st101;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st101;
					}
				} else {
					goto _st101;
				}
				goto _st0;
			}
			_st112:
			if ( p == eof )
				goto _out112;
			p+= 1;
			st_case_112:
			if ( p == pe && p != eof )
				goto _out112;
			if ( p == eof ) {
				goto _st112;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st100;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st97;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st97;
					}
				} else {
					goto _st97;
				}
				goto _st0;
			}
			_st113:
			if ( p == eof )
				goto _out113;
			p+= 1;
			st_case_113:
			if ( p == pe && p != eof )
				goto _out113;
			if ( p == eof ) {
				goto _st113;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st69;
					}
					case 48: {
						goto _st114;
					}
					case 49: {
						goto _st118;
					}
					case 50: {
						goto _st121;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st124;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st125;
					}
				} else {
					goto _st125;
				}
				goto _st0;
			}
			_st114:
			if ( p == eof )
				goto _out114;
			p+= 1;
			st_case_114:
			if ( p == pe && p != eof )
				goto _out114;
			if ( p == eof ) {
				goto _st114;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st111;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st115;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st115;
					}
				} else {
					goto _st115;
				}
				goto _st0;
			}
			_st115:
			if ( p == eof )
				goto _out115;
			p+= 1;
			st_case_115:
			if ( p == pe && p != eof )
				goto _out115;
			if ( p == eof ) {
				goto _st115;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st111;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st116;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st116;
					}
				} else {
					goto _st116;
				}
				goto _st0;
			}
			_st116:
			if ( p == eof )
				goto _out116;
			p+= 1;
			st_case_116:
			if ( p == pe && p != eof )
				goto _out116;
			if ( p == eof ) {
				goto _st116;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st111;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st117;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st117;
					}
				} else {
					goto _st117;
				}
				goto _st0;
			}
			_st117:
			if ( p == eof )
				goto _out117;
			p+= 1;
			st_case_117:
			if ( p == pe && p != eof )
				goto _out117;
			if ( p == eof ) {
				goto _st117;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st111;
				}
				goto _st0;
			}
			_st118:
			if ( p == eof )
				goto _out118;
			p+= 1;
			st_case_118:
			if ( p == pe && p != eof )
				goto _out118;
			if ( p == eof ) {
				goto _st118;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st111;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st119;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st115;
					}
				} else {
					goto _st115;
				}
				goto _st0;
			}
			_st119:
			if ( p == eof )
				goto _out119;
			p+= 1;
			st_case_119:
			if ( p == pe && p != eof )
				goto _out119;
			if ( p == eof ) {
				goto _st119;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st111;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st120;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st116;
					}
				} else {
					goto _st116;
				}
				goto _st0;
			}
			_st120:
			if ( p == eof )
				goto _out120;
			p+= 1;
			st_case_120:
			if ( p == pe && p != eof )
				goto _out120;
			if ( p == eof ) {
				goto _st120;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st111;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st117;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st117;
					}
				} else {
					goto _st117;
				}
				goto _st0;
			}
			_st121:
			if ( p == eof )
				goto _out121;
			p+= 1;
			st_case_121:
			if ( p == pe && p != eof )
				goto _out121;
			if ( p == eof ) {
				goto _st121;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 53: {
						goto _st123;
					}
					case 58: {
						goto _st111;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st122;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st115;
					}
				} else {
					goto _st115;
				}
				goto _st0;
			}
			_st122:
			if ( p == eof )
				goto _out122;
			p+= 1;
			st_case_122:
			if ( p == pe && p != eof )
				goto _out122;
			if ( p == eof ) {
				goto _st122;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st111;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st116;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st116;
					}
				} else {
					goto _st116;
				}
				goto _st0;
			}
			_st123:
			if ( p == eof )
				goto _out123;
			p+= 1;
			st_case_123:
			if ( p == pe && p != eof )
				goto _out123;
			if ( p == eof ) {
				goto _st123;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st111;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st120;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st116;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st116;
					}
				} else {
					goto _st116;
				}
				goto _st0;
			}
			_st124:
			if ( p == eof )
				goto _out124;
			p+= 1;
			st_case_124:
			if ( p == pe && p != eof )
				goto _out124;
			if ( p == eof ) {
				goto _st124;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st111;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st122;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st115;
					}
				} else {
					goto _st115;
				}
				goto _st0;
			}
			_st125:
			if ( p == eof )
				goto _out125;
			p+= 1;
			st_case_125:
			if ( p == pe && p != eof )
				goto _out125;
			if ( p == eof ) {
				goto _st125;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st111;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st115;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st115;
					}
				} else {
					goto _st115;
				}
				goto _st0;
			}
			_st126:
			if ( p == eof )
				goto _out126;
			p+= 1;
			st_case_126:
			if ( p == pe && p != eof )
				goto _out126;
			if ( p == eof ) {
				goto _st126;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st127;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st127;
					}
				} else {
					goto _st127;
				}
				goto _st0;
			}
			_st127:
			if ( p == eof )
				goto _out127;
			p+= 1;
			st_case_127:
			if ( p == pe && p != eof )
				goto _out127;
			if ( p == eof ) {
				goto _st127;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st113;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st128;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st128;
					}
				} else {
					goto _st128;
				}
				goto _st0;
			}
			_st128:
			if ( p == eof )
				goto _out128;
			p+= 1;
			st_case_128:
			if ( p == pe && p != eof )
				goto _out128;
			if ( p == eof ) {
				goto _st128;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st113;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st129;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st129;
					}
				} else {
					goto _st129;
				}
				goto _st0;
			}
			_st129:
			if ( p == eof )
				goto _out129;
			p+= 1;
			st_case_129:
			if ( p == pe && p != eof )
				goto _out129;
			if ( p == eof ) {
				goto _st129;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st113;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st130;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st130;
					}
				} else {
					goto _st130;
				}
				goto _st0;
			}
			_st130:
			if ( p == eof )
				goto _out130;
			p+= 1;
			st_case_130:
			if ( p == pe && p != eof )
				goto _out130;
			if ( p == eof ) {
				goto _st130;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st113;
				}
				goto _st0;
			}
			_st131:
			if ( p == eof )
				goto _out131;
			p+= 1;
			st_case_131:
			if ( p == pe && p != eof )
				goto _out131;
			if ( p == eof ) {
				goto _st131;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st132;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st132;
					}
				} else {
					goto _st132;
				}
				goto _st0;
			}
			_st132:
			if ( p == eof )
				goto _out132;
			p+= 1;
			st_case_132:
			if ( p == pe && p != eof )
				goto _out132;
			if ( p == eof ) {
				goto _st132;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st126;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st133;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st133;
					}
				} else {
					goto _st133;
				}
				goto _st0;
			}
			_st133:
			if ( p == eof )
				goto _out133;
			p+= 1;
			st_case_133:
			if ( p == pe && p != eof )
				goto _out133;
			if ( p == eof ) {
				goto _st133;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st126;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st134;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st134;
					}
				} else {
					goto _st134;
				}
				goto _st0;
			}
			_st134:
			if ( p == eof )
				goto _out134;
			p+= 1;
			st_case_134:
			if ( p == pe && p != eof )
				goto _out134;
			if ( p == eof ) {
				goto _st134;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st126;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st135;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st135;
					}
				} else {
					goto _st135;
				}
				goto _st0;
			}
			_st135:
			if ( p == eof )
				goto _out135;
			p+= 1;
			st_case_135:
			if ( p == pe && p != eof )
				goto _out135;
			if ( p == eof ) {
				goto _st135;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st126;
				}
				goto _st0;
			}
			_st136:
			if ( p == eof )
				goto _out136;
			p+= 1;
			st_case_136:
			if ( p == pe && p != eof )
				goto _out136;
			if ( p == eof ) {
				goto _st136;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st137;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st137;
					}
				} else {
					goto _st137;
				}
				goto _st0;
			}
			_st137:
			if ( p == eof )
				goto _out137;
			p+= 1;
			st_case_137:
			if ( p == pe && p != eof )
				goto _out137;
			if ( p == eof ) {
				goto _st137;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st131;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st138;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st138;
					}
				} else {
					goto _st138;
				}
				goto _st0;
			}
			_st138:
			if ( p == eof )
				goto _out138;
			p+= 1;
			st_case_138:
			if ( p == pe && p != eof )
				goto _out138;
			if ( p == eof ) {
				goto _st138;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st131;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st139;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st139;
					}
				} else {
					goto _st139;
				}
				goto _st0;
			}
			_st139:
			if ( p == eof )
				goto _out139;
			p+= 1;
			st_case_139:
			if ( p == pe && p != eof )
				goto _out139;
			if ( p == eof ) {
				goto _st139;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st131;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st140;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st140;
					}
				} else {
					goto _st140;
				}
				goto _st0;
			}
			_st140:
			if ( p == eof )
				goto _out140;
			p+= 1;
			st_case_140:
			if ( p == pe && p != eof )
				goto _out140;
			if ( p == eof ) {
				goto _st140;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st131;
				}
				goto _st0;
			}
			_st141:
			if ( p == eof )
				goto _out141;
			p+= 1;
			st_case_141:
			if ( p == pe && p != eof )
				goto _out141;
			if ( p == eof ) {
				goto _st141;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st142;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st142;
					}
				} else {
					goto _st142;
				}
				goto _st0;
			}
			_st142:
			if ( p == eof )
				goto _out142;
			p+= 1;
			st_case_142:
			if ( p == pe && p != eof )
				goto _out142;
			if ( p == eof ) {
				goto _st142;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st136;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st143;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st143;
					}
				} else {
					goto _st143;
				}
				goto _st0;
			}
			_st143:
			if ( p == eof )
				goto _out143;
			p+= 1;
			st_case_143:
			if ( p == pe && p != eof )
				goto _out143;
			if ( p == eof ) {
				goto _st143;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st136;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st144;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st144;
					}
				} else {
					goto _st144;
				}
				goto _st0;
			}
			_st144:
			if ( p == eof )
				goto _out144;
			p+= 1;
			st_case_144:
			if ( p == pe && p != eof )
				goto _out144;
			if ( p == eof ) {
				goto _st144;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st136;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st145;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st145;
					}
				} else {
					goto _st145;
				}
				goto _st0;
			}
			_st145:
			if ( p == eof )
				goto _out145;
			p+= 1;
			st_case_145:
			if ( p == pe && p != eof )
				goto _out145;
			if ( p == eof ) {
				goto _st145;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st136;
				}
				goto _st0;
			}
			_st146:
			if ( p == eof )
				goto _out146;
			p+= 1;
			st_case_146:
			if ( p == pe && p != eof )
				goto _out146;
			if ( p == eof ) {
				goto _st146;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st147;
				}
				goto _st0;
			}
			_st147:
			if ( p == eof )
				goto _out147;
			p+= 1;
			st_case_147:
			if ( p == pe && p != eof )
				goto _out147;
			if ( p == eof ) {
				goto _st147;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st69;
					}
					case 48: {
						goto _st148;
					}
					case 49: {
						goto _st217;
					}
					case 50: {
						goto _st220;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st223;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st224;
					}
				} else {
					goto _st224;
				}
				goto _st0;
			}
			_st148:
			if ( p == eof )
				goto _out148;
			p+= 1;
			st_case_148:
			if ( p == pe && p != eof )
				goto _out148;
			if ( p == eof ) {
				goto _st148;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st152;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st149;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st149;
					}
				} else {
					goto _st149;
				}
				goto _st0;
			}
			_st149:
			if ( p == eof )
				goto _out149;
			p+= 1;
			st_case_149:
			if ( p == pe && p != eof )
				goto _out149;
			if ( p == eof ) {
				goto _st149;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st152;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st150;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st150;
					}
				} else {
					goto _st150;
				}
				goto _st0;
			}
			_st150:
			if ( p == eof )
				goto _out150;
			p+= 1;
			st_case_150:
			if ( p == pe && p != eof )
				goto _out150;
			if ( p == eof ) {
				goto _st150;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st152;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st151;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st151;
					}
				} else {
					goto _st151;
				}
				goto _st0;
			}
			_st151:
			if ( p == eof )
				goto _out151;
			p+= 1;
			st_case_151:
			if ( p == pe && p != eof )
				goto _out151;
			if ( p == eof ) {
				goto _st151;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st152;
					}
					case 93: {
						goto _st460;
					}
				}
				goto _st0;
			}
			_st152:
			if ( p == eof )
				goto _out152;
			p+= 1;
			st_case_152:
			if ( p == pe && p != eof )
				goto _out152;
			if ( p == eof ) {
				goto _st152;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st69;
					}
					case 48: {
						goto _st153;
					}
					case 49: {
						goto _st209;
					}
					case 50: {
						goto _st212;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st215;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st216;
					}
				} else {
					goto _st216;
				}
				goto _st0;
			}
			_st153:
			if ( p == eof )
				goto _out153;
			p+= 1;
			st_case_153:
			if ( p == pe && p != eof )
				goto _out153;
			if ( p == eof ) {
				goto _st153;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st157;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st154;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st154;
					}
				} else {
					goto _st154;
				}
				goto _st0;
			}
			_st154:
			if ( p == eof )
				goto _out154;
			p+= 1;
			st_case_154:
			if ( p == pe && p != eof )
				goto _out154;
			if ( p == eof ) {
				goto _st154;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st157;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st155;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st155;
					}
				} else {
					goto _st155;
				}
				goto _st0;
			}
			_st155:
			if ( p == eof )
				goto _out155;
			p+= 1;
			st_case_155:
			if ( p == pe && p != eof )
				goto _out155;
			if ( p == eof ) {
				goto _st155;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st157;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st156;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st156;
					}
				} else {
					goto _st156;
				}
				goto _st0;
			}
			_st156:
			if ( p == eof )
				goto _out156;
			p+= 1;
			st_case_156:
			if ( p == pe && p != eof )
				goto _out156;
			if ( p == eof ) {
				goto _st156;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st157;
					}
					case 93: {
						goto _st460;
					}
				}
				goto _st0;
			}
			_st157:
			if ( p == eof )
				goto _out157;
			p+= 1;
			st_case_157:
			if ( p == pe && p != eof )
				goto _out157;
			if ( p == eof ) {
				goto _st157;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st69;
					}
					case 48: {
						goto _st158;
					}
					case 49: {
						goto _st201;
					}
					case 50: {
						goto _st204;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st207;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st208;
					}
				} else {
					goto _st208;
				}
				goto _st0;
			}
			_st158:
			if ( p == eof )
				goto _out158;
			p+= 1;
			st_case_158:
			if ( p == pe && p != eof )
				goto _out158;
			if ( p == eof ) {
				goto _st158;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st162;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st159;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st159;
					}
				} else {
					goto _st159;
				}
				goto _st0;
			}
			_st159:
			if ( p == eof )
				goto _out159;
			p+= 1;
			st_case_159:
			if ( p == pe && p != eof )
				goto _out159;
			if ( p == eof ) {
				goto _st159;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st162;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st160;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st160;
					}
				} else {
					goto _st160;
				}
				goto _st0;
			}
			_st160:
			if ( p == eof )
				goto _out160;
			p+= 1;
			st_case_160:
			if ( p == pe && p != eof )
				goto _out160;
			if ( p == eof ) {
				goto _st160;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st162;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st161;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st161;
					}
				} else {
					goto _st161;
				}
				goto _st0;
			}
			_st161:
			if ( p == eof )
				goto _out161;
			p+= 1;
			st_case_161:
			if ( p == pe && p != eof )
				goto _out161;
			if ( p == eof ) {
				goto _st161;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st162;
					}
					case 93: {
						goto _st460;
					}
				}
				goto _st0;
			}
			_st162:
			if ( p == eof )
				goto _out162;
			p+= 1;
			st_case_162:
			if ( p == pe && p != eof )
				goto _out162;
			if ( p == eof ) {
				goto _st162;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st69;
					}
					case 48: {
						goto _st163;
					}
					case 49: {
						goto _st193;
					}
					case 50: {
						goto _st196;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st199;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st200;
					}
				} else {
					goto _st200;
				}
				goto _st0;
			}
			_st163:
			if ( p == eof )
				goto _out163;
			p+= 1;
			st_case_163:
			if ( p == pe && p != eof )
				goto _out163;
			if ( p == eof ) {
				goto _st163;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st167;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st164;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st164;
					}
				} else {
					goto _st164;
				}
				goto _st0;
			}
			_st164:
			if ( p == eof )
				goto _out164;
			p+= 1;
			st_case_164:
			if ( p == pe && p != eof )
				goto _out164;
			if ( p == eof ) {
				goto _st164;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st167;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st165;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st165;
					}
				} else {
					goto _st165;
				}
				goto _st0;
			}
			_st165:
			if ( p == eof )
				goto _out165;
			p+= 1;
			st_case_165:
			if ( p == pe && p != eof )
				goto _out165;
			if ( p == eof ) {
				goto _st165;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st167;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st166;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st166;
					}
				} else {
					goto _st166;
				}
				goto _st0;
			}
			_st166:
			if ( p == eof )
				goto _out166;
			p+= 1;
			st_case_166:
			if ( p == pe && p != eof )
				goto _out166;
			if ( p == eof ) {
				goto _st166;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st167;
					}
					case 93: {
						goto _st460;
					}
				}
				goto _st0;
			}
			_st167:
			if ( p == eof )
				goto _out167;
			p+= 1;
			st_case_167:
			if ( p == pe && p != eof )
				goto _out167;
			if ( p == eof ) {
				goto _st167;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st69;
					}
					case 48: {
						goto _st168;
					}
					case 49: {
						goto _st185;
					}
					case 50: {
						goto _st188;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st191;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st192;
					}
				} else {
					goto _st192;
				}
				goto _st0;
			}
			_st168:
			if ( p == eof )
				goto _out168;
			p+= 1;
			st_case_168:
			if ( p == pe && p != eof )
				goto _out168;
			if ( p == eof ) {
				goto _st168;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st172;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st169;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st169;
					}
				} else {
					goto _st169;
				}
				goto _st0;
			}
			_st169:
			if ( p == eof )
				goto _out169;
			p+= 1;
			st_case_169:
			if ( p == pe && p != eof )
				goto _out169;
			if ( p == eof ) {
				goto _st169;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st172;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st170;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st170;
					}
				} else {
					goto _st170;
				}
				goto _st0;
			}
			_st170:
			if ( p == eof )
				goto _out170;
			p+= 1;
			st_case_170:
			if ( p == pe && p != eof )
				goto _out170;
			if ( p == eof ) {
				goto _st170;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st172;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st171;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st171;
					}
				} else {
					goto _st171;
				}
				goto _st0;
			}
			_st171:
			if ( p == eof )
				goto _out171;
			p+= 1;
			st_case_171:
			if ( p == pe && p != eof )
				goto _out171;
			if ( p == eof ) {
				goto _st171;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st172;
					}
					case 93: {
						goto _st460;
					}
				}
				goto _st0;
			}
			_st172:
			if ( p == eof )
				goto _out172;
			p+= 1;
			st_case_172:
			if ( p == pe && p != eof )
				goto _out172;
			if ( p == eof ) {
				goto _st172;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st69;
					}
					case 48: {
						goto _st173;
					}
					case 49: {
						goto _st177;
					}
					case 50: {
						goto _st180;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st183;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st184;
					}
				} else {
					goto _st184;
				}
				goto _st0;
			}
			_st173:
			if ( p == eof )
				goto _out173;
			p+= 1;
			st_case_173:
			if ( p == pe && p != eof )
				goto _out173;
			if ( p == eof ) {
				goto _st173;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st111;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st174;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st174;
					}
				} else {
					goto _st174;
				}
				goto _st0;
			}
			_st174:
			if ( p == eof )
				goto _out174;
			p+= 1;
			st_case_174:
			if ( p == pe && p != eof )
				goto _out174;
			if ( p == eof ) {
				goto _st174;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st111;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st175;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st175;
					}
				} else {
					goto _st175;
				}
				goto _st0;
			}
			_st175:
			if ( p == eof )
				goto _out175;
			p+= 1;
			st_case_175:
			if ( p == pe && p != eof )
				goto _out175;
			if ( p == eof ) {
				goto _st175;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st111;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st176;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st176;
					}
				} else {
					goto _st176;
				}
				goto _st0;
			}
			_st176:
			if ( p == eof )
				goto _out176;
			p+= 1;
			st_case_176:
			if ( p == pe && p != eof )
				goto _out176;
			if ( p == eof ) {
				goto _st176;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st111;
					}
					case 93: {
						goto _st460;
					}
				}
				goto _st0;
			}
			_st177:
			if ( p == eof )
				goto _out177;
			p+= 1;
			st_case_177:
			if ( p == pe && p != eof )
				goto _out177;
			if ( p == eof ) {
				goto _st177;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st111;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st178;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st174;
					}
				} else {
					goto _st174;
				}
				goto _st0;
			}
			_st178:
			if ( p == eof )
				goto _out178;
			p+= 1;
			st_case_178:
			if ( p == pe && p != eof )
				goto _out178;
			if ( p == eof ) {
				goto _st178;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st111;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st179;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st175;
					}
				} else {
					goto _st175;
				}
				goto _st0;
			}
			_st179:
			if ( p == eof )
				goto _out179;
			p+= 1;
			st_case_179:
			if ( p == pe && p != eof )
				goto _out179;
			if ( p == eof ) {
				goto _st179;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st111;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st176;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st176;
					}
				} else {
					goto _st176;
				}
				goto _st0;
			}
			_st180:
			if ( p == eof )
				goto _out180;
			p+= 1;
			st_case_180:
			if ( p == pe && p != eof )
				goto _out180;
			if ( p == eof ) {
				goto _st180;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 53: {
						goto _st182;
					}
					case 58: {
						goto _st111;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st181;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st174;
					}
				} else {
					goto _st174;
				}
				goto _st0;
			}
			_st181:
			if ( p == eof )
				goto _out181;
			p+= 1;
			st_case_181:
			if ( p == pe && p != eof )
				goto _out181;
			if ( p == eof ) {
				goto _st181;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st111;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st175;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st175;
					}
				} else {
					goto _st175;
				}
				goto _st0;
			}
			_st182:
			if ( p == eof )
				goto _out182;
			p+= 1;
			st_case_182:
			if ( p == pe && p != eof )
				goto _out182;
			if ( p == eof ) {
				goto _st182;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st111;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st179;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st175;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st175;
					}
				} else {
					goto _st175;
				}
				goto _st0;
			}
			_st183:
			if ( p == eof )
				goto _out183;
			p+= 1;
			st_case_183:
			if ( p == pe && p != eof )
				goto _out183;
			if ( p == eof ) {
				goto _st183;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st111;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st181;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st174;
					}
				} else {
					goto _st174;
				}
				goto _st0;
			}
			_st184:
			if ( p == eof )
				goto _out184;
			p+= 1;
			st_case_184:
			if ( p == pe && p != eof )
				goto _out184;
			if ( p == eof ) {
				goto _st184;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st111;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st174;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st174;
					}
				} else {
					goto _st174;
				}
				goto _st0;
			}
			_st185:
			if ( p == eof )
				goto _out185;
			p+= 1;
			st_case_185:
			if ( p == pe && p != eof )
				goto _out185;
			if ( p == eof ) {
				goto _st185;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st172;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st186;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st169;
					}
				} else {
					goto _st169;
				}
				goto _st0;
			}
			_st186:
			if ( p == eof )
				goto _out186;
			p+= 1;
			st_case_186:
			if ( p == pe && p != eof )
				goto _out186;
			if ( p == eof ) {
				goto _st186;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st172;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st187;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st170;
					}
				} else {
					goto _st170;
				}
				goto _st0;
			}
			_st187:
			if ( p == eof )
				goto _out187;
			p+= 1;
			st_case_187:
			if ( p == pe && p != eof )
				goto _out187;
			if ( p == eof ) {
				goto _st187;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st172;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st171;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st171;
					}
				} else {
					goto _st171;
				}
				goto _st0;
			}
			_st188:
			if ( p == eof )
				goto _out188;
			p+= 1;
			st_case_188:
			if ( p == pe && p != eof )
				goto _out188;
			if ( p == eof ) {
				goto _st188;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 53: {
						goto _st190;
					}
					case 58: {
						goto _st172;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st189;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st169;
					}
				} else {
					goto _st169;
				}
				goto _st0;
			}
			_st189:
			if ( p == eof )
				goto _out189;
			p+= 1;
			st_case_189:
			if ( p == pe && p != eof )
				goto _out189;
			if ( p == eof ) {
				goto _st189;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st172;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st170;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st170;
					}
				} else {
					goto _st170;
				}
				goto _st0;
			}
			_st190:
			if ( p == eof )
				goto _out190;
			p+= 1;
			st_case_190:
			if ( p == pe && p != eof )
				goto _out190;
			if ( p == eof ) {
				goto _st190;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st172;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st187;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st170;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st170;
					}
				} else {
					goto _st170;
				}
				goto _st0;
			}
			_st191:
			if ( p == eof )
				goto _out191;
			p+= 1;
			st_case_191:
			if ( p == pe && p != eof )
				goto _out191;
			if ( p == eof ) {
				goto _st191;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st172;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st189;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st169;
					}
				} else {
					goto _st169;
				}
				goto _st0;
			}
			_st192:
			if ( p == eof )
				goto _out192;
			p+= 1;
			st_case_192:
			if ( p == pe && p != eof )
				goto _out192;
			if ( p == eof ) {
				goto _st192;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st172;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st169;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st169;
					}
				} else {
					goto _st169;
				}
				goto _st0;
			}
			_st193:
			if ( p == eof )
				goto _out193;
			p+= 1;
			st_case_193:
			if ( p == pe && p != eof )
				goto _out193;
			if ( p == eof ) {
				goto _st193;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st167;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st194;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st164;
					}
				} else {
					goto _st164;
				}
				goto _st0;
			}
			_st194:
			if ( p == eof )
				goto _out194;
			p+= 1;
			st_case_194:
			if ( p == pe && p != eof )
				goto _out194;
			if ( p == eof ) {
				goto _st194;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st167;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st195;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st165;
					}
				} else {
					goto _st165;
				}
				goto _st0;
			}
			_st195:
			if ( p == eof )
				goto _out195;
			p+= 1;
			st_case_195:
			if ( p == pe && p != eof )
				goto _out195;
			if ( p == eof ) {
				goto _st195;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st167;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st166;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st166;
					}
				} else {
					goto _st166;
				}
				goto _st0;
			}
			_st196:
			if ( p == eof )
				goto _out196;
			p+= 1;
			st_case_196:
			if ( p == pe && p != eof )
				goto _out196;
			if ( p == eof ) {
				goto _st196;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 53: {
						goto _st198;
					}
					case 58: {
						goto _st167;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st197;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st164;
					}
				} else {
					goto _st164;
				}
				goto _st0;
			}
			_st197:
			if ( p == eof )
				goto _out197;
			p+= 1;
			st_case_197:
			if ( p == pe && p != eof )
				goto _out197;
			if ( p == eof ) {
				goto _st197;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st167;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st165;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st165;
					}
				} else {
					goto _st165;
				}
				goto _st0;
			}
			_st198:
			if ( p == eof )
				goto _out198;
			p+= 1;
			st_case_198:
			if ( p == pe && p != eof )
				goto _out198;
			if ( p == eof ) {
				goto _st198;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st167;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st195;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st165;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st165;
					}
				} else {
					goto _st165;
				}
				goto _st0;
			}
			_st199:
			if ( p == eof )
				goto _out199;
			p+= 1;
			st_case_199:
			if ( p == pe && p != eof )
				goto _out199;
			if ( p == eof ) {
				goto _st199;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st167;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st197;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st164;
					}
				} else {
					goto _st164;
				}
				goto _st0;
			}
			_st200:
			if ( p == eof )
				goto _out200;
			p+= 1;
			st_case_200:
			if ( p == pe && p != eof )
				goto _out200;
			if ( p == eof ) {
				goto _st200;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st167;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st164;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st164;
					}
				} else {
					goto _st164;
				}
				goto _st0;
			}
			_st201:
			if ( p == eof )
				goto _out201;
			p+= 1;
			st_case_201:
			if ( p == pe && p != eof )
				goto _out201;
			if ( p == eof ) {
				goto _st201;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st162;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st202;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st159;
					}
				} else {
					goto _st159;
				}
				goto _st0;
			}
			_st202:
			if ( p == eof )
				goto _out202;
			p+= 1;
			st_case_202:
			if ( p == pe && p != eof )
				goto _out202;
			if ( p == eof ) {
				goto _st202;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st162;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st203;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st160;
					}
				} else {
					goto _st160;
				}
				goto _st0;
			}
			_st203:
			if ( p == eof )
				goto _out203;
			p+= 1;
			st_case_203:
			if ( p == pe && p != eof )
				goto _out203;
			if ( p == eof ) {
				goto _st203;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st162;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st161;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st161;
					}
				} else {
					goto _st161;
				}
				goto _st0;
			}
			_st204:
			if ( p == eof )
				goto _out204;
			p+= 1;
			st_case_204:
			if ( p == pe && p != eof )
				goto _out204;
			if ( p == eof ) {
				goto _st204;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 53: {
						goto _st206;
					}
					case 58: {
						goto _st162;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st205;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st159;
					}
				} else {
					goto _st159;
				}
				goto _st0;
			}
			_st205:
			if ( p == eof )
				goto _out205;
			p+= 1;
			st_case_205:
			if ( p == pe && p != eof )
				goto _out205;
			if ( p == eof ) {
				goto _st205;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st162;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st160;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st160;
					}
				} else {
					goto _st160;
				}
				goto _st0;
			}
			_st206:
			if ( p == eof )
				goto _out206;
			p+= 1;
			st_case_206:
			if ( p == pe && p != eof )
				goto _out206;
			if ( p == eof ) {
				goto _st206;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st162;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st203;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st160;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st160;
					}
				} else {
					goto _st160;
				}
				goto _st0;
			}
			_st207:
			if ( p == eof )
				goto _out207;
			p+= 1;
			st_case_207:
			if ( p == pe && p != eof )
				goto _out207;
			if ( p == eof ) {
				goto _st207;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st162;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st205;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st159;
					}
				} else {
					goto _st159;
				}
				goto _st0;
			}
			_st208:
			if ( p == eof )
				goto _out208;
			p+= 1;
			st_case_208:
			if ( p == pe && p != eof )
				goto _out208;
			if ( p == eof ) {
				goto _st208;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st162;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st159;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st159;
					}
				} else {
					goto _st159;
				}
				goto _st0;
			}
			_st209:
			if ( p == eof )
				goto _out209;
			p+= 1;
			st_case_209:
			if ( p == pe && p != eof )
				goto _out209;
			if ( p == eof ) {
				goto _st209;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st157;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st210;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st154;
					}
				} else {
					goto _st154;
				}
				goto _st0;
			}
			_st210:
			if ( p == eof )
				goto _out210;
			p+= 1;
			st_case_210:
			if ( p == pe && p != eof )
				goto _out210;
			if ( p == eof ) {
				goto _st210;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st157;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st211;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st155;
					}
				} else {
					goto _st155;
				}
				goto _st0;
			}
			_st211:
			if ( p == eof )
				goto _out211;
			p+= 1;
			st_case_211:
			if ( p == pe && p != eof )
				goto _out211;
			if ( p == eof ) {
				goto _st211;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st157;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st156;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st156;
					}
				} else {
					goto _st156;
				}
				goto _st0;
			}
			_st212:
			if ( p == eof )
				goto _out212;
			p+= 1;
			st_case_212:
			if ( p == pe && p != eof )
				goto _out212;
			if ( p == eof ) {
				goto _st212;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 53: {
						goto _st214;
					}
					case 58: {
						goto _st157;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st213;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st154;
					}
				} else {
					goto _st154;
				}
				goto _st0;
			}
			_st213:
			if ( p == eof )
				goto _out213;
			p+= 1;
			st_case_213:
			if ( p == pe && p != eof )
				goto _out213;
			if ( p == eof ) {
				goto _st213;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st157;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st155;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st155;
					}
				} else {
					goto _st155;
				}
				goto _st0;
			}
			_st214:
			if ( p == eof )
				goto _out214;
			p+= 1;
			st_case_214:
			if ( p == pe && p != eof )
				goto _out214;
			if ( p == eof ) {
				goto _st214;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st157;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st211;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st155;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st155;
					}
				} else {
					goto _st155;
				}
				goto _st0;
			}
			_st215:
			if ( p == eof )
				goto _out215;
			p+= 1;
			st_case_215:
			if ( p == pe && p != eof )
				goto _out215;
			if ( p == eof ) {
				goto _st215;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st157;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st213;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st154;
					}
				} else {
					goto _st154;
				}
				goto _st0;
			}
			_st216:
			if ( p == eof )
				goto _out216;
			p+= 1;
			st_case_216:
			if ( p == pe && p != eof )
				goto _out216;
			if ( p == eof ) {
				goto _st216;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st157;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st154;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st154;
					}
				} else {
					goto _st154;
				}
				goto _st0;
			}
			_st217:
			if ( p == eof )
				goto _out217;
			p+= 1;
			st_case_217:
			if ( p == pe && p != eof )
				goto _out217;
			if ( p == eof ) {
				goto _st217;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st152;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st218;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st149;
					}
				} else {
					goto _st149;
				}
				goto _st0;
			}
			_st218:
			if ( p == eof )
				goto _out218;
			p+= 1;
			st_case_218:
			if ( p == pe && p != eof )
				goto _out218;
			if ( p == eof ) {
				goto _st218;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st152;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st219;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st150;
					}
				} else {
					goto _st150;
				}
				goto _st0;
			}
			_st219:
			if ( p == eof )
				goto _out219;
			p+= 1;
			st_case_219:
			if ( p == pe && p != eof )
				goto _out219;
			if ( p == eof ) {
				goto _st219;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st152;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st151;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st151;
					}
				} else {
					goto _st151;
				}
				goto _st0;
			}
			_st220:
			if ( p == eof )
				goto _out220;
			p+= 1;
			st_case_220:
			if ( p == pe && p != eof )
				goto _out220;
			if ( p == eof ) {
				goto _st220;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 53: {
						goto _st222;
					}
					case 58: {
						goto _st152;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st221;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st149;
					}
				} else {
					goto _st149;
				}
				goto _st0;
			}
			_st221:
			if ( p == eof )
				goto _out221;
			p+= 1;
			st_case_221:
			if ( p == pe && p != eof )
				goto _out221;
			if ( p == eof ) {
				goto _st221;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st152;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st150;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st150;
					}
				} else {
					goto _st150;
				}
				goto _st0;
			}
			_st222:
			if ( p == eof )
				goto _out222;
			p+= 1;
			st_case_222:
			if ( p == pe && p != eof )
				goto _out222;
			if ( p == eof ) {
				goto _st222;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st152;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st219;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st150;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st150;
					}
				} else {
					goto _st150;
				}
				goto _st0;
			}
			_st223:
			if ( p == eof )
				goto _out223;
			p+= 1;
			st_case_223:
			if ( p == pe && p != eof )
				goto _out223;
			if ( p == eof ) {
				goto _st223;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st72;
					}
					case 58: {
						goto _st152;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st221;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st149;
					}
				} else {
					goto _st149;
				}
				goto _st0;
			}
			_st224:
			if ( p == eof )
				goto _out224;
			p+= 1;
			st_case_224:
			if ( p == pe && p != eof )
				goto _out224;
			if ( p == eof ) {
				goto _st224;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st152;
					}
					case 93: {
						goto _st460;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st149;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st149;
					}
				} else {
					goto _st149;
				}
				goto _st0;
			}
			_st225:
			if ( p == eof )
				goto _out225;
			p+= 1;
			st_case_225:
			if ( p == pe && p != eof )
				goto _out225;
			if ( p == eof ) {
				goto _st225;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st226;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st226;
					}
				} else {
					goto _st226;
				}
				goto _st0;
			}
			_st226:
			if ( p == eof )
				goto _out226;
			p+= 1;
			st_case_226:
			if ( p == pe && p != eof )
				goto _out226;
			if ( p == eof ) {
				goto _st226;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st227;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st226;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st226;
					}
				} else {
					goto _st226;
				}
				goto _st0;
			}
			_st227:
			if ( p == eof )
				goto _out227;
			p+= 1;
			st_case_227:
			if ( p == pe && p != eof )
				goto _out227;
			if ( p == eof ) {
				goto _st227;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st228;
					}
					case 36: {
						goto _st228;
					}
					case 61: {
						goto _st228;
					}
					case 95: {
						goto _st228;
					}
					case 126: {
						goto _st228;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 38 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _st228;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st228;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st228;
					}
				} else {
					goto _st228;
				}
				goto _st0;
			}
			_st228:
			if ( p == eof )
				goto _out228;
			p+= 1;
			st_case_228:
			if ( p == pe && p != eof )
				goto _out228;
			if ( p == eof ) {
				goto _st228;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st228;
					}
					case 36: {
						goto _st228;
					}
					case 61: {
						goto _st228;
					}
					case 93: {
						goto _st460;
					}
					case 95: {
						goto _st228;
					}
					case 126: {
						goto _st228;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 38 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _st228;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st228;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st228;
					}
				} else {
					goto _st228;
				}
				goto _st0;
			}
			_ctr523:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 10341 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st489;
			_ctr567:
				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 10353 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st489;
			_st489:
			if ( p == eof )
				goto _out489;
			p+= 1;
			st_case_489:
			if ( p == pe && p != eof )
				goto _out489;
			if ( p == eof ) {
				goto _ctr567;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st33;
					}
					case 35: {
						goto _ctr511;
					}
					case 37: {
						goto _st34;
					}
					case 47: {
						goto _ctr512;
					}
					case 61: {
						goto _st33;
					}
					case 63: {
						goto _ctr514;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st33;
					}
					case 126: {
						goto _st33;
					}
				}
				if ( ( (*( p))) < 58 ) {
					if ( ( (*( p))) > 46 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _st489;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st33;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st33;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st33;
					}
				} else {
					goto _st33;
				}
				goto _st0;
			}
			_ctr492:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 10420 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st490;
			_ctr569:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 10432 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st490;
			_st490:
			if ( p == eof )
				goto _out490;
			p+= 1;
			st_case_490:
			if ( p == pe && p != eof )
				goto _out490;
			if ( p == eof ) {
				goto _ctr569;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 46: {
						goto _st491;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr521;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st467;
					}
				} else {
					goto _st467;
				}
				goto _st0;
			}
			_ctr571:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 10502 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st491;
			_st491:
			if ( p == eof )
				goto _out491;
			p+= 1;
			st_case_491:
			if ( p == pe && p != eof )
				goto _out491;
			if ( p == eof ) {
				goto _ctr571;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st13;
					}
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 47: {
						goto _ctr502;
					}
					case 48: {
						goto _st492;
					}
					case 49: {
						goto _st500;
					}
					case 50: {
						goto _st502;
					}
					case 58: {
						goto _ctr521;
					}
					case 59: {
						goto _st467;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 51 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st467;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st467;
					}
				} else {
					goto _st501;
				}
				goto _st0;
			}
			_ctr576:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 10588 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st492;
			_st492:
			if ( p == eof )
				goto _out492;
			p+= 1;
			st_case_492:
			if ( p == pe && p != eof )
				goto _out492;
			if ( p == eof ) {
				goto _ctr576;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 46: {
						goto _st493;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr521;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st467;
					}
				} else {
					goto _st467;
				}
				goto _st0;
			}
			_ctr578:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 10658 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st493;
			_st493:
			if ( p == eof )
				goto _out493;
			p+= 1;
			st_case_493:
			if ( p == pe && p != eof )
				goto _out493;
			if ( p == eof ) {
				goto _ctr578;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st17;
					}
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 47: {
						goto _ctr502;
					}
					case 48: {
						goto _st494;
					}
					case 49: {
						goto _st496;
					}
					case 50: {
						goto _st498;
					}
					case 58: {
						goto _ctr521;
					}
					case 59: {
						goto _st467;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 51 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st467;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st467;
					}
				} else {
					goto _st497;
				}
				goto _st0;
			}
			_ctr583:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 10744 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st494;
			_st494:
			if ( p == eof )
				goto _out494;
			p+= 1;
			st_case_494:
			if ( p == pe && p != eof )
				goto _out494;
			if ( p == eof ) {
				goto _ctr583;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 46: {
						goto _st495;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr521;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st467;
					}
				} else {
					goto _st467;
				}
				goto _st0;
			}
			_ctr585:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 10814 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st495;
			_st495:
			if ( p == eof )
				goto _out495;
			p+= 1;
			st_case_495:
			if ( p == pe && p != eof )
				goto _out495;
			if ( p == eof ) {
				goto _ctr585;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st21;
					}
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr521;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st467;
					}
				} else {
					goto _st467;
				}
				goto _st0;
			}
			_ctr586:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 10884 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st496;
			_st496:
			if ( p == eof )
				goto _out496;
			p+= 1;
			st_case_496:
			if ( p == pe && p != eof )
				goto _out496;
			if ( p == eof ) {
				goto _ctr586;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 46: {
						goto _st495;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr521;
					}
					case 59: {
						goto _st467;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st467;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st467;
					}
				} else {
					goto _st497;
				}
				goto _st0;
			}
			_ctr587:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 10961 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st497;
			_st497:
			if ( p == eof )
				goto _out497;
			p+= 1;
			st_case_497:
			if ( p == pe && p != eof )
				goto _out497;
			if ( p == eof ) {
				goto _ctr587;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 46: {
						goto _st495;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr521;
					}
					case 59: {
						goto _st467;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st467;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st467;
					}
				} else {
					goto _st494;
				}
				goto _st0;
			}
			_ctr588:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 11038 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st498;
			_st498:
			if ( p == eof )
				goto _out498;
			p+= 1;
			st_case_498:
			if ( p == pe && p != eof )
				goto _out498;
			if ( p == eof ) {
				goto _ctr588;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 46: {
						goto _st495;
					}
					case 47: {
						goto _ctr502;
					}
					case 53: {
						goto _st499;
					}
					case 58: {
						goto _ctr521;
					}
					case 59: {
						goto _st467;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st467;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st467;
					}
				} else {
					goto _st494;
				}
				goto _st0;
			}
			_ctr590:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 11118 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st499;
			_st499:
			if ( p == eof )
				goto _out499;
			p+= 1;
			st_case_499:
			if ( p == pe && p != eof )
				goto _out499;
			if ( p == eof ) {
				goto _ctr590;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 46: {
						goto _st495;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr521;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( ( (*( p))) > 45 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _st494;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st467;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st467;
					}
				} else {
					goto _st467;
				}
				goto _st0;
			}
			_ctr591:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 11196 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st500;
			_st500:
			if ( p == eof )
				goto _out500;
			p+= 1;
			st_case_500:
			if ( p == pe && p != eof )
				goto _out500;
			if ( p == eof ) {
				goto _ctr591;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 46: {
						goto _st493;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr521;
					}
					case 59: {
						goto _st467;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st467;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st467;
					}
				} else {
					goto _st501;
				}
				goto _st0;
			}
			_ctr592:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 11273 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st501;
			_st501:
			if ( p == eof )
				goto _out501;
			p+= 1;
			st_case_501:
			if ( p == pe && p != eof )
				goto _out501;
			if ( p == eof ) {
				goto _ctr592;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 46: {
						goto _st493;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr521;
					}
					case 59: {
						goto _st467;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st467;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st467;
					}
				} else {
					goto _st492;
				}
				goto _st0;
			}
			_ctr593:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 11350 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st502;
			_st502:
			if ( p == eof )
				goto _out502;
			p+= 1;
			st_case_502:
			if ( p == pe && p != eof )
				goto _out502;
			if ( p == eof ) {
				goto _ctr593;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 46: {
						goto _st493;
					}
					case 47: {
						goto _ctr502;
					}
					case 53: {
						goto _st503;
					}
					case 58: {
						goto _ctr521;
					}
					case 59: {
						goto _st467;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st467;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st467;
					}
				} else {
					goto _st492;
				}
				goto _st0;
			}
			_ctr595:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 11430 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st503;
			_st503:
			if ( p == eof )
				goto _out503;
			p+= 1;
			st_case_503:
			if ( p == pe && p != eof )
				goto _out503;
			if ( p == eof ) {
				goto _ctr595;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 46: {
						goto _st493;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr521;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( ( (*( p))) > 45 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _st492;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st467;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st467;
					}
				} else {
					goto _st467;
				}
				goto _st0;
			}
			_ctr493:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 11503 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st504;
			_ctr596:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 11515 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st504;
			_st504:
			if ( p == eof )
				goto _out504;
			p+= 1;
			st_case_504:
			if ( p == pe && p != eof )
				goto _out504;
			if ( p == eof ) {
				goto _ctr596;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 46: {
						goto _st491;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr521;
					}
					case 59: {
						goto _st467;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st467;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st467;
					}
				} else {
					goto _st505;
				}
				goto _st0;
			}
			_ctr495:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 11587 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st505;
			_ctr598:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 11599 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st505;
			_st505:
			if ( p == eof )
				goto _out505;
			p+= 1;
			st_case_505:
			if ( p == pe && p != eof )
				goto _out505;
			if ( p == eof ) {
				goto _ctr598;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 46: {
						goto _st491;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr521;
					}
					case 59: {
						goto _st467;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st467;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st467;
					}
				} else {
					goto _st490;
				}
				goto _st0;
			}
			_ctr494:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 11671 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st506;
			_ctr600:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 11683 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st506;
			_st506:
			if ( p == eof )
				goto _out506;
			p+= 1;
			st_case_506:
			if ( p == pe && p != eof )
				goto _out506;
			if ( p == eof ) {
				goto _ctr600;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 46: {
						goto _st491;
					}
					case 47: {
						goto _ctr502;
					}
					case 53: {
						goto _st507;
					}
					case 58: {
						goto _ctr521;
					}
					case 59: {
						goto _st467;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st467;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st467;
					}
				} else {
					goto _st490;
				}
				goto _st0;
			}
			_ctr602:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 11763 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st507;
			_st507:
			if ( p == eof )
				goto _out507;
			p+= 1;
			st_case_507:
			if ( p == pe && p != eof )
				goto _out507;
			if ( p == eof ) {
				goto _ctr602;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st467;
					}
					case 35: {
						goto _ctr501;
					}
					case 37: {
						goto _st31;
					}
					case 46: {
						goto _st491;
					}
					case 47: {
						goto _ctr502;
					}
					case 58: {
						goto _ctr521;
					}
					case 61: {
						goto _st467;
					}
					case 63: {
						goto _ctr504;
					}
					case 64: {
						goto _ctr44;
					}
					case 95: {
						goto _st467;
					}
					case 126: {
						goto _st467;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( ( (*( p))) > 45 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _st490;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st467;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st467;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st467;
					}
				} else {
					goto _st467;
				}
				goto _st0;
			}
			_ctr474:
				{
#line 16 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 11836 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st508;
			_st508:
			if ( p == eof )
				goto _out508;
			p+= 1;
			st_case_508:
			if ( p == pe && p != eof )
				goto _out508;
			if ( p == eof ) {
				goto _st508;}
			else {
				switch( ( (*( p))) ) {
					case 34: {
						goto _st0;
					}
					case 35: {
						goto _st453;
					}
					case 37: {
						goto _st3;
					}
					case 43: {
						goto _st508;
					}
					case 47: {
						goto _st455;
					}
					case 58: {
						goto _ctr604;
					}
					case 60: {
						goto _st0;
					}
					case 62: {
						goto _st0;
					}
					case 63: {
						goto _st456;
					}
					case 96: {
						goto _st0;
					}
					case 127: {
						goto _st0;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( ( (*( p))) > 32 ) {
						if ( 45 <= ( (*( p))) && ( (*( p))) <= 57 ) {
							goto _st508;
						}
					} else if ( ( (*( p))) >= 0 ) {
						goto _st0;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( ( (*( p))) < 97 ) {
						if ( ( (*( p))) <= 94 ) {
							goto _st0;
						}
					} else if ( ( (*( p))) > 122 ) {
						if ( ( (*( p))) <= 125 ) {
							goto _st0;
						}
					} else {
						goto _st508;
					}
				} else {
					goto _st508;
				}
				goto _st452;
			}
			_ctr604:
				{
#line 20 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				uri->setScheme(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 11916 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st509;
			_st509:
			if ( p == eof )
				goto _out509;
			p+= 1;
			st_case_509:
			if ( p == pe && p != eof )
				goto _out509;
			if ( p == eof ) {
				goto _st509;}
			else {
				switch( ( (*( p))) ) {
					case 34: {
						goto _st0;
					}
					case 35: {
						goto _st453;
					}
					case 37: {
						goto _st5;
					}
					case 47: {
						goto _st510;
					}
					case 60: {
						goto _st0;
					}
					case 62: {
						goto _st0;
					}
					case 63: {
						goto _st456;
					}
					case 96: {
						goto _st0;
					}
					case 127: {
						goto _st0;
					}
				}
				if ( ( (*( p))) < 91 ) {
					if ( 0 <= ( (*( p))) && ( (*( p))) <= 32 ) {
						goto _st0;
					}
				} else if ( ( (*( p))) > 94 ) {
					if ( 123 <= ( (*( p))) && ( (*( p))) <= 125 ) {
						goto _st0;
					}
				} else {
					goto _st0;
				}
				goto _st455;
			}
			_st510:
			if ( p == eof )
				goto _out510;
			p+= 1;
			st_case_510:
			if ( p == pe && p != eof )
				goto _out510;
			if ( p == eof ) {
				goto _st510;}
			else {
				switch( ( (*( p))) ) {
					case 34: {
						goto _st0;
					}
					case 35: {
						goto _st453;
					}
					case 37: {
						goto _st5;
					}
					case 47: {
						goto _st511;
					}
					case 60: {
						goto _st0;
					}
					case 62: {
						goto _st0;
					}
					case 63: {
						goto _st456;
					}
					case 96: {
						goto _st0;
					}
					case 127: {
						goto _st0;
					}
				}
				if ( ( (*( p))) < 91 ) {
					if ( 0 <= ( (*( p))) && ( (*( p))) <= 32 ) {
						goto _st0;
					}
				} else if ( ( (*( p))) > 94 ) {
					if ( 123 <= ( (*( p))) && ( (*( p))) <= 125 ) {
						goto _st0;
					}
				} else {
					goto _st0;
				}
				goto _st455;
			}
			_ctr608:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 12027 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 12037 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 12046 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st511;
			_st511:
			if ( p == eof )
				goto _out511;
			p+= 1;
			st_case_511:
			if ( p == pe && p != eof )
				goto _out511;
			if ( p == eof ) {
				goto _ctr608;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _ctr609;
					}
					case 33: {
						goto _ctr610;
					}
					case 35: {
						goto _ctr611;
					}
					case 37: {
						goto _ctr612;
					}
					case 47: {
						goto _ctr613;
					}
					case 48: {
						goto _ctr614;
					}
					case 49: {
						goto _ctr615;
					}
					case 50: {
						goto _ctr616;
					}
					case 58: {
						goto _ctr618;
					}
					case 59: {
						goto _ctr610;
					}
					case 61: {
						goto _ctr610;
					}
					case 63: {
						goto _ctr619;
					}
					case 64: {
						goto _ctr620;
					}
					case 91: {
						goto _ctr621;
					}
					case 95: {
						goto _ctr610;
					}
					case 126: {
						goto _ctr610;
					}
				}
				if ( ( (*( p))) < 51 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _ctr610;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _ctr610;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _ctr610;
					}
				} else {
					goto _ctr617;
				}
				goto _st0;
			}
			_ctr609:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 12130 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st229;
			_st229:
			if ( p == eof )
				goto _out229;
			p+= 1;
			st_case_229:
			if ( p == pe && p != eof )
				goto _out229;
			if ( p == eof ) {
				goto _st229;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st230;
				}
				goto _st0;
			}
			_st230:
			if ( p == eof )
				goto _out230;
			p+= 1;
			st_case_230:
			if ( p == pe && p != eof )
				goto _out230;
			if ( p == eof ) {
				goto _st230;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st231;
				}
				goto _st0;
			}
			_st231:
			if ( p == eof )
				goto _out231;
			p+= 1;
			st_case_231:
			if ( p == pe && p != eof )
				goto _out231;
			if ( p == eof ) {
				goto _st231;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st232;
				}
				goto _st0;
			}
			_st232:
			if ( p == eof )
				goto _out232;
			p+= 1;
			st_case_232:
			if ( p == pe && p != eof )
				goto _out232;
			if ( p == eof ) {
				goto _st232;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st233;
					}
					case 48: {
						goto _st235;
					}
					case 49: {
						goto _st249;
					}
					case 50: {
						goto _st251;
					}
				}
				if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st250;
				}
				goto _st0;
			}
			_st233:
			if ( p == eof )
				goto _out233;
			p+= 1;
			st_case_233:
			if ( p == pe && p != eof )
				goto _out233;
			if ( p == eof ) {
				goto _st233;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st234;
				}
				goto _st0;
			}
			_st234:
			if ( p == eof )
				goto _out234;
			p+= 1;
			st_case_234:
			if ( p == pe && p != eof )
				goto _out234;
			if ( p == eof ) {
				goto _st234;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st235;
				}
				goto _st0;
			}
			_st235:
			if ( p == eof )
				goto _out235;
			p+= 1;
			st_case_235:
			if ( p == pe && p != eof )
				goto _out235;
			if ( p == eof ) {
				goto _st235;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st236;
				}
				goto _st0;
			}
			_st236:
			if ( p == eof )
				goto _out236;
			p+= 1;
			st_case_236:
			if ( p == pe && p != eof )
				goto _out236;
			if ( p == eof ) {
				goto _st236;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st237;
					}
					case 48: {
						goto _st239;
					}
					case 49: {
						goto _st245;
					}
					case 50: {
						goto _st247;
					}
				}
				if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st246;
				}
				goto _st0;
			}
			_st237:
			if ( p == eof )
				goto _out237;
			p+= 1;
			st_case_237:
			if ( p == pe && p != eof )
				goto _out237;
			if ( p == eof ) {
				goto _st237;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st238;
				}
				goto _st0;
			}
			_st238:
			if ( p == eof )
				goto _out238;
			p+= 1;
			st_case_238:
			if ( p == pe && p != eof )
				goto _out238;
			if ( p == eof ) {
				goto _st238;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st239;
				}
				goto _st0;
			}
			_st239:
			if ( p == eof )
				goto _out239;
			p+= 1;
			st_case_239:
			if ( p == pe && p != eof )
				goto _out239;
			if ( p == eof ) {
				goto _st239;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st240;
				}
				goto _st0;
			}
			_st240:
			if ( p == eof )
				goto _out240;
			p+= 1;
			st_case_240:
			if ( p == pe && p != eof )
				goto _out240;
			if ( p == eof ) {
				goto _st240;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st241;
					}
					case 48: {
						goto _st512;
					}
					case 49: {
						goto _st516;
					}
					case 50: {
						goto _st518;
					}
				}
				if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st517;
				}
				goto _st0;
			}
			_st241:
			if ( p == eof )
				goto _out241;
			p+= 1;
			st_case_241:
			if ( p == pe && p != eof )
				goto _out241;
			if ( p == eof ) {
				goto _st241;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st242;
				}
				goto _st0;
			}
			_st242:
			if ( p == eof )
				goto _out242;
			p+= 1;
			st_case_242:
			if ( p == pe && p != eof )
				goto _out242;
			if ( p == eof ) {
				goto _st242;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st512;
				}
				goto _st0;
			}
			_ctr622:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 12394 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 12399 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 12408 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st512;
			_st512:
			if ( p == eof )
				goto _out512;
			p+= 1;
			st_case_512:
			if ( p == pe && p != eof )
				goto _out512;
			if ( p == eof ) {
				goto _ctr622;}
			else {
				switch( ( (*( p))) ) {
					case 35: {
						goto _ctr623;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 63: {
						goto _ctr626;
					}
				}
				goto _st0;
			}
			_ctr613:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 12441 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 12451 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st513;
			_ctr632:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 12458 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 12468 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st513;
			_ctr624:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 12480 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 12485 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st513;
			_ctr627:
				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 12496 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st513;
			_ctr637:
				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 12508 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 12513 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st513;
			_st513:
			if ( p == eof )
				goto _out513;
			p+= 1;
			st_case_513:
			if ( p == pe && p != eof )
				goto _out513;
			if ( p == eof ) {
				goto _ctr627;}
			else {
				switch( ( (*( p))) ) {
					case 34: {
						goto _st0;
					}
					case 35: {
						goto _ctr628;
					}
					case 37: {
						goto _st243;
					}
					case 60: {
						goto _st0;
					}
					case 62: {
						goto _st0;
					}
					case 63: {
						goto _ctr629;
					}
					case 96: {
						goto _st0;
					}
					case 127: {
						goto _st0;
					}
				}
				if ( ( (*( p))) < 91 ) {
					if ( 0 <= ( (*( p))) && ( (*( p))) <= 32 ) {
						goto _st0;
					}
				} else if ( ( (*( p))) > 94 ) {
					if ( 123 <= ( (*( p))) && ( (*( p))) <= 125 ) {
						goto _st0;
					}
				} else {
					goto _st0;
				}
				goto _st513;
			}
			_st243:
			if ( p == eof )
				goto _out243;
			p+= 1;
			st_case_243:
			if ( p == pe && p != eof )
				goto _out243;
			if ( p == eof ) {
				goto _st243;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st244;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st244;
					}
				} else {
					goto _st244;
				}
				goto _st0;
			}
			_st244:
			if ( p == eof )
				goto _out244;
			p+= 1;
			st_case_244:
			if ( p == pe && p != eof )
				goto _out244;
			if ( p == eof ) {
				goto _st244;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st513;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st513;
					}
				} else {
					goto _st513;
				}
				goto _st0;
			}
			_ctr656:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 12615 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 12625 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st514;
			_ctr625:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 12637 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st514;
			_ctr630:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 12644 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 12654 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 12663 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st514;
			_st514:
			if ( p == eof )
				goto _out514;
			p+= 1;
			st_case_514:
			if ( p == pe && p != eof )
				goto _out514;
			if ( p == eof ) {
				goto _ctr630;}
			else {
				switch( ( (*( p))) ) {
					case 35: {
						goto _ctr631;
					}
					case 47: {
						goto _ctr632;
					}
					case 63: {
						goto _ctr634;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _ctr633;
				}
				goto _st0;
			}
			_ctr633:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 12696 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st515;
			_ctr635:
				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 12708 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 12713 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 12722 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st515;
			_st515:
			if ( p == eof )
				goto _out515;
			p+= 1;
			st_case_515:
			if ( p == pe && p != eof )
				goto _out515;
			if ( p == eof ) {
				goto _ctr635;}
			else {
				switch( ( (*( p))) ) {
					case 35: {
						goto _ctr636;
					}
					case 47: {
						goto _ctr637;
					}
					case 63: {
						goto _ctr639;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st515;
				}
				goto _st0;
			}
			_ctr640:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 12760 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 12765 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 12774 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st516;
			_st516:
			if ( p == eof )
				goto _out516;
			p+= 1;
			st_case_516:
			if ( p == pe && p != eof )
				goto _out516;
			if ( p == eof ) {
				goto _ctr640;}
			else {
				switch( ( (*( p))) ) {
					case 35: {
						goto _ctr623;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 63: {
						goto _ctr626;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st517;
				}
				goto _st0;
			}
			_ctr641:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 12815 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 12820 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 12829 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st517;
			_st517:
			if ( p == eof )
				goto _out517;
			p+= 1;
			st_case_517:
			if ( p == pe && p != eof )
				goto _out517;
			if ( p == eof ) {
				goto _ctr641;}
			else {
				switch( ( (*( p))) ) {
					case 35: {
						goto _ctr623;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 63: {
						goto _ctr626;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st512;
				}
				goto _st0;
			}
			_ctr642:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 12870 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 12875 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 12884 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st518;
			_st518:
			if ( p == eof )
				goto _out518;
			p+= 1;
			st_case_518:
			if ( p == pe && p != eof )
				goto _out518;
			if ( p == eof ) {
				goto _ctr642;}
			else {
				switch( ( (*( p))) ) {
					case 35: {
						goto _ctr623;
					}
					case 47: {
						goto _ctr624;
					}
					case 53: {
						goto _st519;
					}
					case 58: {
						goto _ctr625;
					}
					case 63: {
						goto _ctr626;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st512;
				}
				goto _st0;
			}
			_ctr644:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 12928 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 12933 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 12942 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st519;
			_st519:
			if ( p == eof )
				goto _out519;
			p+= 1;
			st_case_519:
			if ( p == pe && p != eof )
				goto _out519;
			if ( p == eof ) {
				goto _ctr644;}
			else {
				switch( ( (*( p))) ) {
					case 35: {
						goto _ctr623;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 63: {
						goto _ctr626;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 53 ) {
					goto _st512;
				}
				goto _st0;
			}
			_st245:
			if ( p == eof )
				goto _out245;
			p+= 1;
			st_case_245:
			if ( p == pe && p != eof )
				goto _out245;
			if ( p == eof ) {
				goto _st245;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st240;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st246;
				}
				goto _st0;
			}
			_st246:
			if ( p == eof )
				goto _out246;
			p+= 1;
			st_case_246:
			if ( p == pe && p != eof )
				goto _out246;
			if ( p == eof ) {
				goto _st246;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st240;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st239;
				}
				goto _st0;
			}
			_st247:
			if ( p == eof )
				goto _out247;
			p+= 1;
			st_case_247:
			if ( p == pe && p != eof )
				goto _out247;
			if ( p == eof ) {
				goto _st247;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st240;
					}
					case 53: {
						goto _st248;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st239;
				}
				goto _st0;
			}
			_st248:
			if ( p == eof )
				goto _out248;
			p+= 1;
			st_case_248:
			if ( p == pe && p != eof )
				goto _out248;
			if ( p == eof ) {
				goto _st248;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st240;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 53 ) {
					goto _st239;
				}
				goto _st0;
			}
			_st249:
			if ( p == eof )
				goto _out249;
			p+= 1;
			st_case_249:
			if ( p == pe && p != eof )
				goto _out249;
			if ( p == eof ) {
				goto _st249;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st236;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st250;
				}
				goto _st0;
			}
			_st250:
			if ( p == eof )
				goto _out250;
			p+= 1;
			st_case_250:
			if ( p == pe && p != eof )
				goto _out250;
			if ( p == eof ) {
				goto _st250;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st236;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st235;
				}
				goto _st0;
			}
			_st251:
			if ( p == eof )
				goto _out251;
			p+= 1;
			st_case_251:
			if ( p == pe && p != eof )
				goto _out251;
			if ( p == eof ) {
				goto _st251;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st236;
					}
					case 53: {
						goto _st252;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st235;
				}
				goto _st0;
			}
			_st252:
			if ( p == eof )
				goto _out252;
			p+= 1;
			st_case_252:
			if ( p == pe && p != eof )
				goto _out252;
			if ( p == eof ) {
				goto _st252;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st236;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 53 ) {
					goto _st235;
				}
				goto _st0;
			}
			_ctr610:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 13132 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st520;
			_ctr645:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 13144 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 13149 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 13158 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st520;
			_st520:
			if ( p == eof )
				goto _out520;
			p+= 1;
			st_case_520:
			if ( p == pe && p != eof )
				goto _out520;
			if ( p == eof ) {
				goto _ctr645;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr646;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st520;
					}
				} else {
					goto _st520;
				}
				goto _st0;
			}
			_ctr612:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 13220 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st253;
			_st253:
			if ( p == eof )
				goto _out253;
			p+= 1;
			st_case_253:
			if ( p == pe && p != eof )
				goto _out253;
			if ( p == eof ) {
				goto _st253;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st254;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st254;
					}
				} else {
					goto _st254;
				}
				goto _st0;
			}
			_st254:
			if ( p == eof )
				goto _out254;
			p+= 1;
			st_case_254:
			if ( p == pe && p != eof )
				goto _out254;
			if ( p == eof ) {
				goto _st254;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st520;
					}
				} else {
					goto _st520;
				}
				goto _st0;
			}
			_ctr618:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 13273 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 13283 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st521;
			_ctr646:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 13295 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st521;
			_ctr647:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 13302 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 13312 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 13321 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st521;
			_st521:
			if ( p == eof )
				goto _out521;
			p+= 1;
			st_case_521:
			if ( p == pe && p != eof )
				goto _out521;
			if ( p == eof ) {
				goto _ctr647;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st255;
					}
					case 35: {
						goto _ctr631;
					}
					case 37: {
						goto _st256;
					}
					case 47: {
						goto _ctr632;
					}
					case 61: {
						goto _st255;
					}
					case 63: {
						goto _ctr634;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st255;
					}
					case 126: {
						goto _st255;
					}
				}
				if ( ( (*( p))) < 58 ) {
					if ( ( (*( p))) > 46 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _ctr648;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st255;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st255;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st255;
					}
				} else {
					goto _st255;
				}
				goto _st0;
			}
			_st255:
			if ( p == eof )
				goto _out255;
			p+= 1;
			st_case_255:
			if ( p == pe && p != eof )
				goto _out255;
			if ( p == eof ) {
				goto _st255;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st255;
					}
					case 37: {
						goto _st256;
					}
					case 61: {
						goto _st255;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st255;
					}
					case 126: {
						goto _st255;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _st255;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st255;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st255;
					}
				} else {
					goto _st255;
				}
				goto _st0;
			}
			_st256:
			if ( p == eof )
				goto _out256;
			p+= 1;
			st_case_256:
			if ( p == pe && p != eof )
				goto _out256;
			if ( p == eof ) {
				goto _st256;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st257;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st257;
					}
				} else {
					goto _st257;
				}
				goto _st0;
			}
			_st257:
			if ( p == eof )
				goto _out257;
			p+= 1;
			st_case_257:
			if ( p == pe && p != eof )
				goto _out257;
			if ( p == eof ) {
				goto _st257;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st255;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st255;
					}
				} else {
					goto _st255;
				}
				goto _st0;
			}
			_ctr274:
				{
#line 35 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if(mark) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setUserinfo(std::string(mark, p - mark));
				}
				mark = NULL;
			}
			
#line 13487 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st522;
			_ctr620:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 13494 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 35 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if(mark) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setUserinfo(std::string(mark, p - mark));
				}
				mark = NULL;
			}
			
#line 13505 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st522;
			_ctr649:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 13512 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 13522 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 13531 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st522;
			_st522:
			if ( p == eof )
				goto _out522;
			p+= 1;
			st_case_522:
			if ( p == pe && p != eof )
				goto _out522;
			if ( p == eof ) {
				goto _ctr649;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _ctr609;
					}
					case 33: {
						goto _ctr650;
					}
					case 35: {
						goto _ctr611;
					}
					case 37: {
						goto _ctr651;
					}
					case 47: {
						goto _ctr613;
					}
					case 48: {
						goto _ctr652;
					}
					case 49: {
						goto _ctr653;
					}
					case 50: {
						goto _ctr654;
					}
					case 58: {
						goto _ctr656;
					}
					case 59: {
						goto _ctr650;
					}
					case 61: {
						goto _ctr650;
					}
					case 63: {
						goto _ctr619;
					}
					case 91: {
						goto _ctr621;
					}
					case 95: {
						goto _ctr650;
					}
					case 126: {
						goto _ctr650;
					}
				}
				if ( ( (*( p))) < 51 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _ctr650;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _ctr650;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _ctr650;
					}
				} else {
					goto _ctr655;
				}
				goto _st0;
			}
			_ctr650:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 13612 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st523;
			_ctr657:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 13624 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 13629 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 13638 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st523;
			_st523:
			if ( p == eof )
				goto _out523;
			p+= 1;
			st_case_523:
			if ( p == pe && p != eof )
				goto _out523;
			if ( p == eof ) {
				goto _ctr657;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st523;
					}
				} else {
					goto _st523;
				}
				goto _st0;
			}
			_ctr651:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 13697 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st258;
			_st258:
			if ( p == eof )
				goto _out258;
			p+= 1;
			st_case_258:
			if ( p == pe && p != eof )
				goto _out258;
			if ( p == eof ) {
				goto _st258;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st259;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st259;
					}
				} else {
					goto _st259;
				}
				goto _st0;
			}
			_st259:
			if ( p == eof )
				goto _out259;
			p+= 1;
			st_case_259:
			if ( p == pe && p != eof )
				goto _out259;
			if ( p == eof ) {
				goto _st259;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st523;
					}
				} else {
					goto _st523;
				}
				goto _st0;
			}
			_ctr652:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 13750 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st524;
			_ctr658:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 13762 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 13767 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 13776 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st524;
			_st524:
			if ( p == eof )
				goto _out524;
			p+= 1;
			st_case_524:
			if ( p == pe && p != eof )
				goto _out524;
			if ( p == eof ) {
				goto _ctr658;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 46: {
						goto _st525;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st523;
					}
				} else {
					goto _st523;
				}
				goto _st0;
			}
			_ctr660:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 13843 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 13848 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 13857 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st525;
			_st525:
			if ( p == eof )
				goto _out525;
			p+= 1;
			st_case_525:
			if ( p == pe && p != eof )
				goto _out525;
			if ( p == eof ) {
				goto _ctr660;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st233;
					}
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 47: {
						goto _ctr624;
					}
					case 48: {
						goto _st526;
					}
					case 49: {
						goto _st534;
					}
					case 50: {
						goto _st536;
					}
					case 58: {
						goto _ctr625;
					}
					case 59: {
						goto _st523;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 51 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st523;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st523;
					}
				} else {
					goto _st535;
				}
				goto _st0;
			}
			_ctr665:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 13940 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 13945 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 13954 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st526;
			_st526:
			if ( p == eof )
				goto _out526;
			p+= 1;
			st_case_526:
			if ( p == pe && p != eof )
				goto _out526;
			if ( p == eof ) {
				goto _ctr665;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 46: {
						goto _st527;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st523;
					}
				} else {
					goto _st523;
				}
				goto _st0;
			}
			_ctr667:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 14021 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 14026 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 14035 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st527;
			_st527:
			if ( p == eof )
				goto _out527;
			p+= 1;
			st_case_527:
			if ( p == pe && p != eof )
				goto _out527;
			if ( p == eof ) {
				goto _ctr667;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st237;
					}
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 47: {
						goto _ctr624;
					}
					case 48: {
						goto _st528;
					}
					case 49: {
						goto _st530;
					}
					case 50: {
						goto _st532;
					}
					case 58: {
						goto _ctr625;
					}
					case 59: {
						goto _st523;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 51 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st523;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st523;
					}
				} else {
					goto _st531;
				}
				goto _st0;
			}
			_ctr672:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 14118 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 14123 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 14132 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st528;
			_st528:
			if ( p == eof )
				goto _out528;
			p+= 1;
			st_case_528:
			if ( p == pe && p != eof )
				goto _out528;
			if ( p == eof ) {
				goto _ctr672;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 46: {
						goto _st529;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st523;
					}
				} else {
					goto _st523;
				}
				goto _st0;
			}
			_ctr674:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 14199 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 14204 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 14213 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st529;
			_st529:
			if ( p == eof )
				goto _out529;
			p+= 1;
			st_case_529:
			if ( p == pe && p != eof )
				goto _out529;
			if ( p == eof ) {
				goto _ctr674;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st241;
					}
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st523;
					}
				} else {
					goto _st523;
				}
				goto _st0;
			}
			_ctr675:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 14280 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 14285 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 14294 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st530;
			_st530:
			if ( p == eof )
				goto _out530;
			p+= 1;
			st_case_530:
			if ( p == pe && p != eof )
				goto _out530;
			if ( p == eof ) {
				goto _ctr675;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 46: {
						goto _st529;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 59: {
						goto _st523;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st523;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st523;
					}
				} else {
					goto _st531;
				}
				goto _st0;
			}
			_ctr676:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 14368 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 14373 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 14382 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st531;
			_st531:
			if ( p == eof )
				goto _out531;
			p+= 1;
			st_case_531:
			if ( p == pe && p != eof )
				goto _out531;
			if ( p == eof ) {
				goto _ctr676;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 46: {
						goto _st529;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 59: {
						goto _st523;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st523;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st523;
					}
				} else {
					goto _st528;
				}
				goto _st0;
			}
			_ctr677:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 14456 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 14461 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 14470 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st532;
			_st532:
			if ( p == eof )
				goto _out532;
			p+= 1;
			st_case_532:
			if ( p == pe && p != eof )
				goto _out532;
			if ( p == eof ) {
				goto _ctr677;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 46: {
						goto _st529;
					}
					case 47: {
						goto _ctr624;
					}
					case 53: {
						goto _st533;
					}
					case 58: {
						goto _ctr625;
					}
					case 59: {
						goto _st523;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st523;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st523;
					}
				} else {
					goto _st528;
				}
				goto _st0;
			}
			_ctr679:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 14547 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 14552 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 14561 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st533;
			_st533:
			if ( p == eof )
				goto _out533;
			p+= 1;
			st_case_533:
			if ( p == pe && p != eof )
				goto _out533;
			if ( p == eof ) {
				goto _ctr679;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 46: {
						goto _st529;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( ( (*( p))) > 45 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _st528;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st523;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st523;
					}
				} else {
					goto _st523;
				}
				goto _st0;
			}
			_ctr680:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 14636 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 14641 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 14650 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st534;
			_st534:
			if ( p == eof )
				goto _out534;
			p+= 1;
			st_case_534:
			if ( p == pe && p != eof )
				goto _out534;
			if ( p == eof ) {
				goto _ctr680;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 46: {
						goto _st527;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 59: {
						goto _st523;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st523;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st523;
					}
				} else {
					goto _st535;
				}
				goto _st0;
			}
			_ctr681:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 14724 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 14729 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 14738 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st535;
			_st535:
			if ( p == eof )
				goto _out535;
			p+= 1;
			st_case_535:
			if ( p == pe && p != eof )
				goto _out535;
			if ( p == eof ) {
				goto _ctr681;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 46: {
						goto _st527;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 59: {
						goto _st523;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st523;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st523;
					}
				} else {
					goto _st526;
				}
				goto _st0;
			}
			_ctr682:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 14812 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 14817 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 14826 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st536;
			_st536:
			if ( p == eof )
				goto _out536;
			p+= 1;
			st_case_536:
			if ( p == pe && p != eof )
				goto _out536;
			if ( p == eof ) {
				goto _ctr682;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 46: {
						goto _st527;
					}
					case 47: {
						goto _ctr624;
					}
					case 53: {
						goto _st537;
					}
					case 58: {
						goto _ctr625;
					}
					case 59: {
						goto _st523;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st523;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st523;
					}
				} else {
					goto _st526;
				}
				goto _st0;
			}
			_ctr684:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 14903 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 14908 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 14917 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st537;
			_st537:
			if ( p == eof )
				goto _out537;
			p+= 1;
			st_case_537:
			if ( p == pe && p != eof )
				goto _out537;
			if ( p == eof ) {
				goto _ctr684;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 46: {
						goto _st527;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( ( (*( p))) > 45 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _st526;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st523;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st523;
					}
				} else {
					goto _st523;
				}
				goto _st0;
			}
			_ctr653:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 14987 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st538;
			_ctr685:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 14999 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 15004 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 15013 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st538;
			_st538:
			if ( p == eof )
				goto _out538;
			p+= 1;
			st_case_538:
			if ( p == pe && p != eof )
				goto _out538;
			if ( p == eof ) {
				goto _ctr685;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 46: {
						goto _st525;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 59: {
						goto _st523;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st523;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st523;
					}
				} else {
					goto _st539;
				}
				goto _st0;
			}
			_ctr655:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 15082 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st539;
			_ctr687:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 15094 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 15099 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 15108 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st539;
			_st539:
			if ( p == eof )
				goto _out539;
			p+= 1;
			st_case_539:
			if ( p == pe && p != eof )
				goto _out539;
			if ( p == eof ) {
				goto _ctr687;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 46: {
						goto _st525;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 59: {
						goto _st523;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st523;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st523;
					}
				} else {
					goto _st524;
				}
				goto _st0;
			}
			_ctr654:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 15177 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st540;
			_ctr689:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 15189 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 15194 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 15203 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st540;
			_st540:
			if ( p == eof )
				goto _out540;
			p+= 1;
			st_case_540:
			if ( p == pe && p != eof )
				goto _out540;
			if ( p == eof ) {
				goto _ctr689;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 46: {
						goto _st525;
					}
					case 47: {
						goto _ctr624;
					}
					case 53: {
						goto _st541;
					}
					case 58: {
						goto _ctr625;
					}
					case 59: {
						goto _st523;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st523;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st523;
					}
				} else {
					goto _st524;
				}
				goto _st0;
			}
			_ctr691:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 15280 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 15285 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 15294 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st541;
			_st541:
			if ( p == eof )
				goto _out541;
			p+= 1;
			st_case_541:
			if ( p == pe && p != eof )
				goto _out541;
			if ( p == eof ) {
				goto _ctr691;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st523;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st258;
					}
					case 46: {
						goto _st525;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr625;
					}
					case 61: {
						goto _st523;
					}
					case 63: {
						goto _ctr626;
					}
					case 95: {
						goto _st523;
					}
					case 126: {
						goto _st523;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( ( (*( p))) > 45 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _st524;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st523;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st523;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st523;
					}
				} else {
					goto _st523;
				}
				goto _st0;
			}
			_ctr621:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 15364 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st260;
			_st260:
			if ( p == eof )
				goto _out260;
			p+= 1;
			st_case_260:
			if ( p == pe && p != eof )
				goto _out260;
			if ( p == eof ) {
				goto _st260;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st368;
					}
					case 118: {
						goto _st447;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st261;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st261;
					}
				} else {
					goto _st261;
				}
				goto _st0;
			}
			_st261:
			if ( p == eof )
				goto _out261;
			p+= 1;
			st_case_261:
			if ( p == pe && p != eof )
				goto _out261;
			if ( p == eof ) {
				goto _st261;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st265;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st262;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st262;
					}
				} else {
					goto _st262;
				}
				goto _st0;
			}
			_st262:
			if ( p == eof )
				goto _out262;
			p+= 1;
			st_case_262:
			if ( p == pe && p != eof )
				goto _out262;
			if ( p == eof ) {
				goto _st262;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st265;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st263;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st263;
					}
				} else {
					goto _st263;
				}
				goto _st0;
			}
			_st263:
			if ( p == eof )
				goto _out263;
			p+= 1;
			st_case_263:
			if ( p == pe && p != eof )
				goto _out263;
			if ( p == eof ) {
				goto _st263;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st265;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st264;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st264;
					}
				} else {
					goto _st264;
				}
				goto _st0;
			}
			_st264:
			if ( p == eof )
				goto _out264;
			p+= 1;
			st_case_264:
			if ( p == pe && p != eof )
				goto _out264;
			if ( p == eof ) {
				goto _st264;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st265;
				}
				goto _st0;
			}
			_st265:
			if ( p == eof )
				goto _out265;
			p+= 1;
			st_case_265:
			if ( p == pe && p != eof )
				goto _out265;
			if ( p == eof ) {
				goto _st265;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st363;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st266;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st266;
					}
				} else {
					goto _st266;
				}
				goto _st0;
			}
			_st266:
			if ( p == eof )
				goto _out266;
			p+= 1;
			st_case_266:
			if ( p == pe && p != eof )
				goto _out266;
			if ( p == eof ) {
				goto _st266;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st270;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st267;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st267;
					}
				} else {
					goto _st267;
				}
				goto _st0;
			}
			_st267:
			if ( p == eof )
				goto _out267;
			p+= 1;
			st_case_267:
			if ( p == pe && p != eof )
				goto _out267;
			if ( p == eof ) {
				goto _st267;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st270;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st268;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st268;
					}
				} else {
					goto _st268;
				}
				goto _st0;
			}
			_st268:
			if ( p == eof )
				goto _out268;
			p+= 1;
			st_case_268:
			if ( p == pe && p != eof )
				goto _out268;
			if ( p == eof ) {
				goto _st268;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st270;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st269;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st269;
					}
				} else {
					goto _st269;
				}
				goto _st0;
			}
			_st269:
			if ( p == eof )
				goto _out269;
			p+= 1;
			st_case_269:
			if ( p == pe && p != eof )
				goto _out269;
			if ( p == eof ) {
				goto _st269;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st270;
				}
				goto _st0;
			}
			_st270:
			if ( p == eof )
				goto _out270;
			p+= 1;
			st_case_270:
			if ( p == pe && p != eof )
				goto _out270;
			if ( p == eof ) {
				goto _st270;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st358;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st271;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st271;
					}
				} else {
					goto _st271;
				}
				goto _st0;
			}
			_st271:
			if ( p == eof )
				goto _out271;
			p+= 1;
			st_case_271:
			if ( p == pe && p != eof )
				goto _out271;
			if ( p == eof ) {
				goto _st271;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st275;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st272;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st272;
					}
				} else {
					goto _st272;
				}
				goto _st0;
			}
			_st272:
			if ( p == eof )
				goto _out272;
			p+= 1;
			st_case_272:
			if ( p == pe && p != eof )
				goto _out272;
			if ( p == eof ) {
				goto _st272;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st275;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st273;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st273;
					}
				} else {
					goto _st273;
				}
				goto _st0;
			}
			_st273:
			if ( p == eof )
				goto _out273;
			p+= 1;
			st_case_273:
			if ( p == pe && p != eof )
				goto _out273;
			if ( p == eof ) {
				goto _st273;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st275;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st274;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st274;
					}
				} else {
					goto _st274;
				}
				goto _st0;
			}
			_st274:
			if ( p == eof )
				goto _out274;
			p+= 1;
			st_case_274:
			if ( p == pe && p != eof )
				goto _out274;
			if ( p == eof ) {
				goto _st274;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st275;
				}
				goto _st0;
			}
			_st275:
			if ( p == eof )
				goto _out275;
			p+= 1;
			st_case_275:
			if ( p == pe && p != eof )
				goto _out275;
			if ( p == eof ) {
				goto _st275;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st353;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st276;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st276;
					}
				} else {
					goto _st276;
				}
				goto _st0;
			}
			_st276:
			if ( p == eof )
				goto _out276;
			p+= 1;
			st_case_276:
			if ( p == pe && p != eof )
				goto _out276;
			if ( p == eof ) {
				goto _st276;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st280;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st277;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st277;
					}
				} else {
					goto _st277;
				}
				goto _st0;
			}
			_st277:
			if ( p == eof )
				goto _out277;
			p+= 1;
			st_case_277:
			if ( p == pe && p != eof )
				goto _out277;
			if ( p == eof ) {
				goto _st277;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st280;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st278;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st278;
					}
				} else {
					goto _st278;
				}
				goto _st0;
			}
			_st278:
			if ( p == eof )
				goto _out278;
			p+= 1;
			st_case_278:
			if ( p == pe && p != eof )
				goto _out278;
			if ( p == eof ) {
				goto _st278;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st280;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st279;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st279;
					}
				} else {
					goto _st279;
				}
				goto _st0;
			}
			_st279:
			if ( p == eof )
				goto _out279;
			p+= 1;
			st_case_279:
			if ( p == pe && p != eof )
				goto _out279;
			if ( p == eof ) {
				goto _st279;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st280;
				}
				goto _st0;
			}
			_st280:
			if ( p == eof )
				goto _out280;
			p+= 1;
			st_case_280:
			if ( p == pe && p != eof )
				goto _out280;
			if ( p == eof ) {
				goto _st280;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st348;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st281;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st281;
					}
				} else {
					goto _st281;
				}
				goto _st0;
			}
			_st281:
			if ( p == eof )
				goto _out281;
			p+= 1;
			st_case_281:
			if ( p == pe && p != eof )
				goto _out281;
			if ( p == eof ) {
				goto _st281;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st285;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st282;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st282;
					}
				} else {
					goto _st282;
				}
				goto _st0;
			}
			_st282:
			if ( p == eof )
				goto _out282;
			p+= 1;
			st_case_282:
			if ( p == pe && p != eof )
				goto _out282;
			if ( p == eof ) {
				goto _st282;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st285;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st283;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st283;
					}
				} else {
					goto _st283;
				}
				goto _st0;
			}
			_st283:
			if ( p == eof )
				goto _out283;
			p+= 1;
			st_case_283:
			if ( p == pe && p != eof )
				goto _out283;
			if ( p == eof ) {
				goto _st283;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st285;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st284;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st284;
					}
				} else {
					goto _st284;
				}
				goto _st0;
			}
			_st284:
			if ( p == eof )
				goto _out284;
			p+= 1;
			st_case_284:
			if ( p == pe && p != eof )
				goto _out284;
			if ( p == eof ) {
				goto _st284;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st285;
				}
				goto _st0;
			}
			_st285:
			if ( p == eof )
				goto _out285;
			p+= 1;
			st_case_285:
			if ( p == pe && p != eof )
				goto _out285;
			if ( p == eof ) {
				goto _st285;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st335;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st286;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st286;
					}
				} else {
					goto _st286;
				}
				goto _st0;
			}
			_st286:
			if ( p == eof )
				goto _out286;
			p+= 1;
			st_case_286:
			if ( p == pe && p != eof )
				goto _out286;
			if ( p == eof ) {
				goto _st286;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st290;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st287;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st287;
					}
				} else {
					goto _st287;
				}
				goto _st0;
			}
			_st287:
			if ( p == eof )
				goto _out287;
			p+= 1;
			st_case_287:
			if ( p == pe && p != eof )
				goto _out287;
			if ( p == eof ) {
				goto _st287;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st290;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st288;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st288;
					}
				} else {
					goto _st288;
				}
				goto _st0;
			}
			_st288:
			if ( p == eof )
				goto _out288;
			p+= 1;
			st_case_288:
			if ( p == pe && p != eof )
				goto _out288;
			if ( p == eof ) {
				goto _st288;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st290;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st289;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st289;
					}
				} else {
					goto _st289;
				}
				goto _st0;
			}
			_st289:
			if ( p == eof )
				goto _out289;
			p+= 1;
			st_case_289:
			if ( p == pe && p != eof )
				goto _out289;
			if ( p == eof ) {
				goto _st289;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st290;
				}
				goto _st0;
			}
			_st290:
			if ( p == eof )
				goto _out290;
			p+= 1;
			st_case_290:
			if ( p == pe && p != eof )
				goto _out290;
			if ( p == eof ) {
				goto _st290;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st291;
					}
					case 48: {
						goto _st318;
					}
					case 49: {
						goto _st326;
					}
					case 50: {
						goto _st329;
					}
					case 58: {
						goto _st333;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st332;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st334;
					}
				} else {
					goto _st334;
				}
				goto _st0;
			}
			_st291:
			if ( p == eof )
				goto _out291;
			p+= 1;
			st_case_291:
			if ( p == pe && p != eof )
				goto _out291;
			if ( p == eof ) {
				goto _st291;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st292;
				}
				goto _st0;
			}
			_st292:
			if ( p == eof )
				goto _out292;
			p+= 1;
			st_case_292:
			if ( p == pe && p != eof )
				goto _out292;
			if ( p == eof ) {
				goto _st292;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st293;
				}
				goto _st0;
			}
			_st293:
			if ( p == eof )
				goto _out293;
			p+= 1;
			st_case_293:
			if ( p == pe && p != eof )
				goto _out293;
			if ( p == eof ) {
				goto _st293;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st294;
				}
				goto _st0;
			}
			_st294:
			if ( p == eof )
				goto _out294;
			p+= 1;
			st_case_294:
			if ( p == pe && p != eof )
				goto _out294;
			if ( p == eof ) {
				goto _st294;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st295;
					}
					case 48: {
						goto _st297;
					}
					case 49: {
						goto _st314;
					}
					case 50: {
						goto _st316;
					}
				}
				if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st315;
				}
				goto _st0;
			}
			_st295:
			if ( p == eof )
				goto _out295;
			p+= 1;
			st_case_295:
			if ( p == pe && p != eof )
				goto _out295;
			if ( p == eof ) {
				goto _st295;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st296;
				}
				goto _st0;
			}
			_st296:
			if ( p == eof )
				goto _out296;
			p+= 1;
			st_case_296:
			if ( p == pe && p != eof )
				goto _out296;
			if ( p == eof ) {
				goto _st296;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st297;
				}
				goto _st0;
			}
			_st297:
			if ( p == eof )
				goto _out297;
			p+= 1;
			st_case_297:
			if ( p == pe && p != eof )
				goto _out297;
			if ( p == eof ) {
				goto _st297;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st298;
				}
				goto _st0;
			}
			_st298:
			if ( p == eof )
				goto _out298;
			p+= 1;
			st_case_298:
			if ( p == pe && p != eof )
				goto _out298;
			if ( p == eof ) {
				goto _st298;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st299;
					}
					case 48: {
						goto _st301;
					}
					case 49: {
						goto _st310;
					}
					case 50: {
						goto _st312;
					}
				}
				if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st311;
				}
				goto _st0;
			}
			_st299:
			if ( p == eof )
				goto _out299;
			p+= 1;
			st_case_299:
			if ( p == pe && p != eof )
				goto _out299;
			if ( p == eof ) {
				goto _st299;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st300;
				}
				goto _st0;
			}
			_st300:
			if ( p == eof )
				goto _out300;
			p+= 1;
			st_case_300:
			if ( p == pe && p != eof )
				goto _out300;
			if ( p == eof ) {
				goto _st300;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st301;
				}
				goto _st0;
			}
			_st301:
			if ( p == eof )
				goto _out301;
			p+= 1;
			st_case_301:
			if ( p == pe && p != eof )
				goto _out301;
			if ( p == eof ) {
				goto _st301;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st302;
				}
				goto _st0;
			}
			_st302:
			if ( p == eof )
				goto _out302;
			p+= 1;
			st_case_302:
			if ( p == pe && p != eof )
				goto _out302;
			if ( p == eof ) {
				goto _st302;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st303;
					}
					case 48: {
						goto _st305;
					}
					case 49: {
						goto _st306;
					}
					case 50: {
						goto _st308;
					}
				}
				if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st307;
				}
				goto _st0;
			}
			_st303:
			if ( p == eof )
				goto _out303;
			p+= 1;
			st_case_303:
			if ( p == pe && p != eof )
				goto _out303;
			if ( p == eof ) {
				goto _st303;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 52 ) {
					goto _st304;
				}
				goto _st0;
			}
			_st304:
			if ( p == eof )
				goto _out304;
			p+= 1;
			st_case_304:
			if ( p == pe && p != eof )
				goto _out304;
			if ( p == eof ) {
				goto _st304;}
			else {
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st305;
				}
				goto _st0;
			}
			_st305:
			if ( p == eof )
				goto _out305;
			p+= 1;
			st_case_305:
			if ( p == pe && p != eof )
				goto _out305;
			if ( p == eof ) {
				goto _st305;}
			else {
				if ( ( (*( p))) == 93 ) {
					goto _st512;
				}
				goto _st0;
			}
			_st306:
			if ( p == eof )
				goto _out306;
			p+= 1;
			st_case_306:
			if ( p == pe && p != eof )
				goto _out306;
			if ( p == eof ) {
				goto _st306;}
			else {
				if ( ( (*( p))) == 93 ) {
					goto _st512;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st307;
				}
				goto _st0;
			}
			_st307:
			if ( p == eof )
				goto _out307;
			p+= 1;
			st_case_307:
			if ( p == pe && p != eof )
				goto _out307;
			if ( p == eof ) {
				goto _st307;}
			else {
				if ( ( (*( p))) == 93 ) {
					goto _st512;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st305;
				}
				goto _st0;
			}
			_st308:
			if ( p == eof )
				goto _out308;
			p+= 1;
			st_case_308:
			if ( p == pe && p != eof )
				goto _out308;
			if ( p == eof ) {
				goto _st308;}
			else {
				switch( ( (*( p))) ) {
					case 53: {
						goto _st309;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st305;
				}
				goto _st0;
			}
			_st309:
			if ( p == eof )
				goto _out309;
			p+= 1;
			st_case_309:
			if ( p == pe && p != eof )
				goto _out309;
			if ( p == eof ) {
				goto _st309;}
			else {
				if ( ( (*( p))) == 93 ) {
					goto _st512;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 53 ) {
					goto _st305;
				}
				goto _st0;
			}
			_st310:
			if ( p == eof )
				goto _out310;
			p+= 1;
			st_case_310:
			if ( p == pe && p != eof )
				goto _out310;
			if ( p == eof ) {
				goto _st310;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st302;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st311;
				}
				goto _st0;
			}
			_st311:
			if ( p == eof )
				goto _out311;
			p+= 1;
			st_case_311:
			if ( p == pe && p != eof )
				goto _out311;
			if ( p == eof ) {
				goto _st311;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st302;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st301;
				}
				goto _st0;
			}
			_st312:
			if ( p == eof )
				goto _out312;
			p+= 1;
			st_case_312:
			if ( p == pe && p != eof )
				goto _out312;
			if ( p == eof ) {
				goto _st312;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st302;
					}
					case 53: {
						goto _st313;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st301;
				}
				goto _st0;
			}
			_st313:
			if ( p == eof )
				goto _out313;
			p+= 1;
			st_case_313:
			if ( p == pe && p != eof )
				goto _out313;
			if ( p == eof ) {
				goto _st313;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st302;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 53 ) {
					goto _st301;
				}
				goto _st0;
			}
			_st314:
			if ( p == eof )
				goto _out314;
			p+= 1;
			st_case_314:
			if ( p == pe && p != eof )
				goto _out314;
			if ( p == eof ) {
				goto _st314;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st298;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st315;
				}
				goto _st0;
			}
			_st315:
			if ( p == eof )
				goto _out315;
			p+= 1;
			st_case_315:
			if ( p == pe && p != eof )
				goto _out315;
			if ( p == eof ) {
				goto _st315;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st298;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st297;
				}
				goto _st0;
			}
			_st316:
			if ( p == eof )
				goto _out316;
			p+= 1;
			st_case_316:
			if ( p == pe && p != eof )
				goto _out316;
			if ( p == eof ) {
				goto _st316;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st298;
					}
					case 53: {
						goto _st317;
					}
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
					goto _st297;
				}
				goto _st0;
			}
			_st317:
			if ( p == eof )
				goto _out317;
			p+= 1;
			st_case_317:
			if ( p == pe && p != eof )
				goto _out317;
			if ( p == eof ) {
				goto _st317;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st298;
				}
				if ( 48 <= ( (*( p))) && ( (*( p))) <= 53 ) {
					goto _st297;
				}
				goto _st0;
			}
			_st318:
			if ( p == eof )
				goto _out318;
			p+= 1;
			st_case_318:
			if ( p == pe && p != eof )
				goto _out318;
			if ( p == eof ) {
				goto _st318;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st322;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st319;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st319;
					}
				} else {
					goto _st319;
				}
				goto _st0;
			}
			_st319:
			if ( p == eof )
				goto _out319;
			p+= 1;
			st_case_319:
			if ( p == pe && p != eof )
				goto _out319;
			if ( p == eof ) {
				goto _st319;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st322;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st320;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st320;
					}
				} else {
					goto _st320;
				}
				goto _st0;
			}
			_st320:
			if ( p == eof )
				goto _out320;
			p+= 1;
			st_case_320:
			if ( p == pe && p != eof )
				goto _out320;
			if ( p == eof ) {
				goto _st320;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st322;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st321;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st321;
					}
				} else {
					goto _st321;
				}
				goto _st0;
			}
			_st321:
			if ( p == eof )
				goto _out321;
			p+= 1;
			st_case_321:
			if ( p == pe && p != eof )
				goto _out321;
			if ( p == eof ) {
				goto _st321;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st322;
				}
				goto _st0;
			}
			_st322:
			if ( p == eof )
				goto _out322;
			p+= 1;
			st_case_322:
			if ( p == pe && p != eof )
				goto _out322;
			if ( p == eof ) {
				goto _st322;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st305;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st323;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st323;
					}
				} else {
					goto _st323;
				}
				goto _st0;
			}
			_st323:
			if ( p == eof )
				goto _out323;
			p+= 1;
			st_case_323:
			if ( p == pe && p != eof )
				goto _out323;
			if ( p == eof ) {
				goto _st323;}
			else {
				if ( ( (*( p))) == 93 ) {
					goto _st512;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st324;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st324;
					}
				} else {
					goto _st324;
				}
				goto _st0;
			}
			_st324:
			if ( p == eof )
				goto _out324;
			p+= 1;
			st_case_324:
			if ( p == pe && p != eof )
				goto _out324;
			if ( p == eof ) {
				goto _st324;}
			else {
				if ( ( (*( p))) == 93 ) {
					goto _st512;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st325;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st325;
					}
				} else {
					goto _st325;
				}
				goto _st0;
			}
			_st325:
			if ( p == eof )
				goto _out325;
			p+= 1;
			st_case_325:
			if ( p == pe && p != eof )
				goto _out325;
			if ( p == eof ) {
				goto _st325;}
			else {
				if ( ( (*( p))) == 93 ) {
					goto _st512;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st305;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st305;
					}
				} else {
					goto _st305;
				}
				goto _st0;
			}
			_st326:
			if ( p == eof )
				goto _out326;
			p+= 1;
			st_case_326:
			if ( p == pe && p != eof )
				goto _out326;
			if ( p == eof ) {
				goto _st326;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st322;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st327;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st319;
					}
				} else {
					goto _st319;
				}
				goto _st0;
			}
			_st327:
			if ( p == eof )
				goto _out327;
			p+= 1;
			st_case_327:
			if ( p == pe && p != eof )
				goto _out327;
			if ( p == eof ) {
				goto _st327;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st322;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st328;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st320;
					}
				} else {
					goto _st320;
				}
				goto _st0;
			}
			_st328:
			if ( p == eof )
				goto _out328;
			p+= 1;
			st_case_328:
			if ( p == pe && p != eof )
				goto _out328;
			if ( p == eof ) {
				goto _st328;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st322;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st321;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st321;
					}
				} else {
					goto _st321;
				}
				goto _st0;
			}
			_st329:
			if ( p == eof )
				goto _out329;
			p+= 1;
			st_case_329:
			if ( p == pe && p != eof )
				goto _out329;
			if ( p == eof ) {
				goto _st329;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 53: {
						goto _st331;
					}
					case 58: {
						goto _st322;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st330;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st319;
					}
				} else {
					goto _st319;
				}
				goto _st0;
			}
			_st330:
			if ( p == eof )
				goto _out330;
			p+= 1;
			st_case_330:
			if ( p == pe && p != eof )
				goto _out330;
			if ( p == eof ) {
				goto _st330;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st322;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st320;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st320;
					}
				} else {
					goto _st320;
				}
				goto _st0;
			}
			_st331:
			if ( p == eof )
				goto _out331;
			p+= 1;
			st_case_331:
			if ( p == pe && p != eof )
				goto _out331;
			if ( p == eof ) {
				goto _st331;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st322;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st328;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st320;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st320;
					}
				} else {
					goto _st320;
				}
				goto _st0;
			}
			_st332:
			if ( p == eof )
				goto _out332;
			p+= 1;
			st_case_332:
			if ( p == pe && p != eof )
				goto _out332;
			if ( p == eof ) {
				goto _st332;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st322;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st330;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st319;
					}
				} else {
					goto _st319;
				}
				goto _st0;
			}
			_st333:
			if ( p == eof )
				goto _out333;
			p+= 1;
			st_case_333:
			if ( p == pe && p != eof )
				goto _out333;
			if ( p == eof ) {
				goto _st333;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st323;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st323;
					}
				} else {
					goto _st323;
				}
				goto _st0;
			}
			_st334:
			if ( p == eof )
				goto _out334;
			p+= 1;
			st_case_334:
			if ( p == pe && p != eof )
				goto _out334;
			if ( p == eof ) {
				goto _st334;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st322;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st319;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st319;
					}
				} else {
					goto _st319;
				}
				goto _st0;
			}
			_st335:
			if ( p == eof )
				goto _out335;
			p+= 1;
			st_case_335:
			if ( p == pe && p != eof )
				goto _out335;
			if ( p == eof ) {
				goto _st335;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st291;
					}
					case 48: {
						goto _st336;
					}
					case 49: {
						goto _st340;
					}
					case 50: {
						goto _st343;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st346;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st347;
					}
				} else {
					goto _st347;
				}
				goto _st0;
			}
			_st336:
			if ( p == eof )
				goto _out336;
			p+= 1;
			st_case_336:
			if ( p == pe && p != eof )
				goto _out336;
			if ( p == eof ) {
				goto _st336;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st333;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st337;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st337;
					}
				} else {
					goto _st337;
				}
				goto _st0;
			}
			_st337:
			if ( p == eof )
				goto _out337;
			p+= 1;
			st_case_337:
			if ( p == pe && p != eof )
				goto _out337;
			if ( p == eof ) {
				goto _st337;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st333;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st338;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st338;
					}
				} else {
					goto _st338;
				}
				goto _st0;
			}
			_st338:
			if ( p == eof )
				goto _out338;
			p+= 1;
			st_case_338:
			if ( p == pe && p != eof )
				goto _out338;
			if ( p == eof ) {
				goto _st338;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st333;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st339;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st339;
					}
				} else {
					goto _st339;
				}
				goto _st0;
			}
			_st339:
			if ( p == eof )
				goto _out339;
			p+= 1;
			st_case_339:
			if ( p == pe && p != eof )
				goto _out339;
			if ( p == eof ) {
				goto _st339;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st333;
				}
				goto _st0;
			}
			_st340:
			if ( p == eof )
				goto _out340;
			p+= 1;
			st_case_340:
			if ( p == pe && p != eof )
				goto _out340;
			if ( p == eof ) {
				goto _st340;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st333;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st341;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st337;
					}
				} else {
					goto _st337;
				}
				goto _st0;
			}
			_st341:
			if ( p == eof )
				goto _out341;
			p+= 1;
			st_case_341:
			if ( p == pe && p != eof )
				goto _out341;
			if ( p == eof ) {
				goto _st341;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st333;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st342;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st338;
					}
				} else {
					goto _st338;
				}
				goto _st0;
			}
			_st342:
			if ( p == eof )
				goto _out342;
			p+= 1;
			st_case_342:
			if ( p == pe && p != eof )
				goto _out342;
			if ( p == eof ) {
				goto _st342;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st333;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st339;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st339;
					}
				} else {
					goto _st339;
				}
				goto _st0;
			}
			_st343:
			if ( p == eof )
				goto _out343;
			p+= 1;
			st_case_343:
			if ( p == pe && p != eof )
				goto _out343;
			if ( p == eof ) {
				goto _st343;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 53: {
						goto _st345;
					}
					case 58: {
						goto _st333;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st344;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st337;
					}
				} else {
					goto _st337;
				}
				goto _st0;
			}
			_st344:
			if ( p == eof )
				goto _out344;
			p+= 1;
			st_case_344:
			if ( p == pe && p != eof )
				goto _out344;
			if ( p == eof ) {
				goto _st344;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st333;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st338;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st338;
					}
				} else {
					goto _st338;
				}
				goto _st0;
			}
			_st345:
			if ( p == eof )
				goto _out345;
			p+= 1;
			st_case_345:
			if ( p == pe && p != eof )
				goto _out345;
			if ( p == eof ) {
				goto _st345;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st333;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st342;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st338;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st338;
					}
				} else {
					goto _st338;
				}
				goto _st0;
			}
			_st346:
			if ( p == eof )
				goto _out346;
			p+= 1;
			st_case_346:
			if ( p == pe && p != eof )
				goto _out346;
			if ( p == eof ) {
				goto _st346;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st333;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st344;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st337;
					}
				} else {
					goto _st337;
				}
				goto _st0;
			}
			_st347:
			if ( p == eof )
				goto _out347;
			p+= 1;
			st_case_347:
			if ( p == pe && p != eof )
				goto _out347;
			if ( p == eof ) {
				goto _st347;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st333;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st337;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st337;
					}
				} else {
					goto _st337;
				}
				goto _st0;
			}
			_st348:
			if ( p == eof )
				goto _out348;
			p+= 1;
			st_case_348:
			if ( p == pe && p != eof )
				goto _out348;
			if ( p == eof ) {
				goto _st348;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st349;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st349;
					}
				} else {
					goto _st349;
				}
				goto _st0;
			}
			_st349:
			if ( p == eof )
				goto _out349;
			p+= 1;
			st_case_349:
			if ( p == pe && p != eof )
				goto _out349;
			if ( p == eof ) {
				goto _st349;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st335;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st350;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st350;
					}
				} else {
					goto _st350;
				}
				goto _st0;
			}
			_st350:
			if ( p == eof )
				goto _out350;
			p+= 1;
			st_case_350:
			if ( p == pe && p != eof )
				goto _out350;
			if ( p == eof ) {
				goto _st350;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st335;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st351;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st351;
					}
				} else {
					goto _st351;
				}
				goto _st0;
			}
			_st351:
			if ( p == eof )
				goto _out351;
			p+= 1;
			st_case_351:
			if ( p == pe && p != eof )
				goto _out351;
			if ( p == eof ) {
				goto _st351;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st335;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st352;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st352;
					}
				} else {
					goto _st352;
				}
				goto _st0;
			}
			_st352:
			if ( p == eof )
				goto _out352;
			p+= 1;
			st_case_352:
			if ( p == pe && p != eof )
				goto _out352;
			if ( p == eof ) {
				goto _st352;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st335;
				}
				goto _st0;
			}
			_st353:
			if ( p == eof )
				goto _out353;
			p+= 1;
			st_case_353:
			if ( p == pe && p != eof )
				goto _out353;
			if ( p == eof ) {
				goto _st353;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st354;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st354;
					}
				} else {
					goto _st354;
				}
				goto _st0;
			}
			_st354:
			if ( p == eof )
				goto _out354;
			p+= 1;
			st_case_354:
			if ( p == pe && p != eof )
				goto _out354;
			if ( p == eof ) {
				goto _st354;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st348;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st355;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st355;
					}
				} else {
					goto _st355;
				}
				goto _st0;
			}
			_st355:
			if ( p == eof )
				goto _out355;
			p+= 1;
			st_case_355:
			if ( p == pe && p != eof )
				goto _out355;
			if ( p == eof ) {
				goto _st355;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st348;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st356;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st356;
					}
				} else {
					goto _st356;
				}
				goto _st0;
			}
			_st356:
			if ( p == eof )
				goto _out356;
			p+= 1;
			st_case_356:
			if ( p == pe && p != eof )
				goto _out356;
			if ( p == eof ) {
				goto _st356;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st348;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st357;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st357;
					}
				} else {
					goto _st357;
				}
				goto _st0;
			}
			_st357:
			if ( p == eof )
				goto _out357;
			p+= 1;
			st_case_357:
			if ( p == pe && p != eof )
				goto _out357;
			if ( p == eof ) {
				goto _st357;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st348;
				}
				goto _st0;
			}
			_st358:
			if ( p == eof )
				goto _out358;
			p+= 1;
			st_case_358:
			if ( p == pe && p != eof )
				goto _out358;
			if ( p == eof ) {
				goto _st358;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st359;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st359;
					}
				} else {
					goto _st359;
				}
				goto _st0;
			}
			_st359:
			if ( p == eof )
				goto _out359;
			p+= 1;
			st_case_359:
			if ( p == pe && p != eof )
				goto _out359;
			if ( p == eof ) {
				goto _st359;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st353;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st360;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st360;
					}
				} else {
					goto _st360;
				}
				goto _st0;
			}
			_st360:
			if ( p == eof )
				goto _out360;
			p+= 1;
			st_case_360:
			if ( p == pe && p != eof )
				goto _out360;
			if ( p == eof ) {
				goto _st360;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st353;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st361;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st361;
					}
				} else {
					goto _st361;
				}
				goto _st0;
			}
			_st361:
			if ( p == eof )
				goto _out361;
			p+= 1;
			st_case_361:
			if ( p == pe && p != eof )
				goto _out361;
			if ( p == eof ) {
				goto _st361;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st353;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st362;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st362;
					}
				} else {
					goto _st362;
				}
				goto _st0;
			}
			_st362:
			if ( p == eof )
				goto _out362;
			p+= 1;
			st_case_362:
			if ( p == pe && p != eof )
				goto _out362;
			if ( p == eof ) {
				goto _st362;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st353;
				}
				goto _st0;
			}
			_st363:
			if ( p == eof )
				goto _out363;
			p+= 1;
			st_case_363:
			if ( p == pe && p != eof )
				goto _out363;
			if ( p == eof ) {
				goto _st363;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st364;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st364;
					}
				} else {
					goto _st364;
				}
				goto _st0;
			}
			_st364:
			if ( p == eof )
				goto _out364;
			p+= 1;
			st_case_364:
			if ( p == pe && p != eof )
				goto _out364;
			if ( p == eof ) {
				goto _st364;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st358;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st365;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st365;
					}
				} else {
					goto _st365;
				}
				goto _st0;
			}
			_st365:
			if ( p == eof )
				goto _out365;
			p+= 1;
			st_case_365:
			if ( p == pe && p != eof )
				goto _out365;
			if ( p == eof ) {
				goto _st365;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st358;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st366;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st366;
					}
				} else {
					goto _st366;
				}
				goto _st0;
			}
			_st366:
			if ( p == eof )
				goto _out366;
			p+= 1;
			st_case_366:
			if ( p == pe && p != eof )
				goto _out366;
			if ( p == eof ) {
				goto _st366;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st358;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st367;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st367;
					}
				} else {
					goto _st367;
				}
				goto _st0;
			}
			_st367:
			if ( p == eof )
				goto _out367;
			p+= 1;
			st_case_367:
			if ( p == pe && p != eof )
				goto _out367;
			if ( p == eof ) {
				goto _st367;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st358;
				}
				goto _st0;
			}
			_st368:
			if ( p == eof )
				goto _out368;
			p+= 1;
			st_case_368:
			if ( p == pe && p != eof )
				goto _out368;
			if ( p == eof ) {
				goto _st368;}
			else {
				if ( ( (*( p))) == 58 ) {
					goto _st369;
				}
				goto _st0;
			}
			_st369:
			if ( p == eof )
				goto _out369;
			p+= 1;
			st_case_369:
			if ( p == pe && p != eof )
				goto _out369;
			if ( p == eof ) {
				goto _st369;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st291;
					}
					case 48: {
						goto _st370;
					}
					case 49: {
						goto _st439;
					}
					case 50: {
						goto _st442;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st445;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st446;
					}
				} else {
					goto _st446;
				}
				goto _st0;
			}
			_st370:
			if ( p == eof )
				goto _out370;
			p+= 1;
			st_case_370:
			if ( p == pe && p != eof )
				goto _out370;
			if ( p == eof ) {
				goto _st370;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st374;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st371;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st371;
					}
				} else {
					goto _st371;
				}
				goto _st0;
			}
			_st371:
			if ( p == eof )
				goto _out371;
			p+= 1;
			st_case_371:
			if ( p == pe && p != eof )
				goto _out371;
			if ( p == eof ) {
				goto _st371;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st374;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st372;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st372;
					}
				} else {
					goto _st372;
				}
				goto _st0;
			}
			_st372:
			if ( p == eof )
				goto _out372;
			p+= 1;
			st_case_372:
			if ( p == pe && p != eof )
				goto _out372;
			if ( p == eof ) {
				goto _st372;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st374;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st373;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st373;
					}
				} else {
					goto _st373;
				}
				goto _st0;
			}
			_st373:
			if ( p == eof )
				goto _out373;
			p+= 1;
			st_case_373:
			if ( p == pe && p != eof )
				goto _out373;
			if ( p == eof ) {
				goto _st373;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st374;
					}
					case 93: {
						goto _st512;
					}
				}
				goto _st0;
			}
			_st374:
			if ( p == eof )
				goto _out374;
			p+= 1;
			st_case_374:
			if ( p == pe && p != eof )
				goto _out374;
			if ( p == eof ) {
				goto _st374;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st291;
					}
					case 48: {
						goto _st375;
					}
					case 49: {
						goto _st431;
					}
					case 50: {
						goto _st434;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st437;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st438;
					}
				} else {
					goto _st438;
				}
				goto _st0;
			}
			_st375:
			if ( p == eof )
				goto _out375;
			p+= 1;
			st_case_375:
			if ( p == pe && p != eof )
				goto _out375;
			if ( p == eof ) {
				goto _st375;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st379;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st376;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st376;
					}
				} else {
					goto _st376;
				}
				goto _st0;
			}
			_st376:
			if ( p == eof )
				goto _out376;
			p+= 1;
			st_case_376:
			if ( p == pe && p != eof )
				goto _out376;
			if ( p == eof ) {
				goto _st376;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st379;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st377;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st377;
					}
				} else {
					goto _st377;
				}
				goto _st0;
			}
			_st377:
			if ( p == eof )
				goto _out377;
			p+= 1;
			st_case_377:
			if ( p == pe && p != eof )
				goto _out377;
			if ( p == eof ) {
				goto _st377;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st379;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st378;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st378;
					}
				} else {
					goto _st378;
				}
				goto _st0;
			}
			_st378:
			if ( p == eof )
				goto _out378;
			p+= 1;
			st_case_378:
			if ( p == pe && p != eof )
				goto _out378;
			if ( p == eof ) {
				goto _st378;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st379;
					}
					case 93: {
						goto _st512;
					}
				}
				goto _st0;
			}
			_st379:
			if ( p == eof )
				goto _out379;
			p+= 1;
			st_case_379:
			if ( p == pe && p != eof )
				goto _out379;
			if ( p == eof ) {
				goto _st379;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st291;
					}
					case 48: {
						goto _st380;
					}
					case 49: {
						goto _st423;
					}
					case 50: {
						goto _st426;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st429;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st430;
					}
				} else {
					goto _st430;
				}
				goto _st0;
			}
			_st380:
			if ( p == eof )
				goto _out380;
			p+= 1;
			st_case_380:
			if ( p == pe && p != eof )
				goto _out380;
			if ( p == eof ) {
				goto _st380;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st384;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st381;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st381;
					}
				} else {
					goto _st381;
				}
				goto _st0;
			}
			_st381:
			if ( p == eof )
				goto _out381;
			p+= 1;
			st_case_381:
			if ( p == pe && p != eof )
				goto _out381;
			if ( p == eof ) {
				goto _st381;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st384;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st382;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st382;
					}
				} else {
					goto _st382;
				}
				goto _st0;
			}
			_st382:
			if ( p == eof )
				goto _out382;
			p+= 1;
			st_case_382:
			if ( p == pe && p != eof )
				goto _out382;
			if ( p == eof ) {
				goto _st382;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st384;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st383;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st383;
					}
				} else {
					goto _st383;
				}
				goto _st0;
			}
			_st383:
			if ( p == eof )
				goto _out383;
			p+= 1;
			st_case_383:
			if ( p == pe && p != eof )
				goto _out383;
			if ( p == eof ) {
				goto _st383;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st384;
					}
					case 93: {
						goto _st512;
					}
				}
				goto _st0;
			}
			_st384:
			if ( p == eof )
				goto _out384;
			p+= 1;
			st_case_384:
			if ( p == pe && p != eof )
				goto _out384;
			if ( p == eof ) {
				goto _st384;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st291;
					}
					case 48: {
						goto _st385;
					}
					case 49: {
						goto _st415;
					}
					case 50: {
						goto _st418;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st421;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st422;
					}
				} else {
					goto _st422;
				}
				goto _st0;
			}
			_st385:
			if ( p == eof )
				goto _out385;
			p+= 1;
			st_case_385:
			if ( p == pe && p != eof )
				goto _out385;
			if ( p == eof ) {
				goto _st385;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st389;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st386;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st386;
					}
				} else {
					goto _st386;
				}
				goto _st0;
			}
			_st386:
			if ( p == eof )
				goto _out386;
			p+= 1;
			st_case_386:
			if ( p == pe && p != eof )
				goto _out386;
			if ( p == eof ) {
				goto _st386;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st389;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st387;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st387;
					}
				} else {
					goto _st387;
				}
				goto _st0;
			}
			_st387:
			if ( p == eof )
				goto _out387;
			p+= 1;
			st_case_387:
			if ( p == pe && p != eof )
				goto _out387;
			if ( p == eof ) {
				goto _st387;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st389;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st388;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st388;
					}
				} else {
					goto _st388;
				}
				goto _st0;
			}
			_st388:
			if ( p == eof )
				goto _out388;
			p+= 1;
			st_case_388:
			if ( p == pe && p != eof )
				goto _out388;
			if ( p == eof ) {
				goto _st388;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st389;
					}
					case 93: {
						goto _st512;
					}
				}
				goto _st0;
			}
			_st389:
			if ( p == eof )
				goto _out389;
			p+= 1;
			st_case_389:
			if ( p == pe && p != eof )
				goto _out389;
			if ( p == eof ) {
				goto _st389;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st291;
					}
					case 48: {
						goto _st390;
					}
					case 49: {
						goto _st407;
					}
					case 50: {
						goto _st410;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st413;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st414;
					}
				} else {
					goto _st414;
				}
				goto _st0;
			}
			_st390:
			if ( p == eof )
				goto _out390;
			p+= 1;
			st_case_390:
			if ( p == pe && p != eof )
				goto _out390;
			if ( p == eof ) {
				goto _st390;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st394;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st391;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st391;
					}
				} else {
					goto _st391;
				}
				goto _st0;
			}
			_st391:
			if ( p == eof )
				goto _out391;
			p+= 1;
			st_case_391:
			if ( p == pe && p != eof )
				goto _out391;
			if ( p == eof ) {
				goto _st391;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st394;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st392;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st392;
					}
				} else {
					goto _st392;
				}
				goto _st0;
			}
			_st392:
			if ( p == eof )
				goto _out392;
			p+= 1;
			st_case_392:
			if ( p == pe && p != eof )
				goto _out392;
			if ( p == eof ) {
				goto _st392;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st394;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st393;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st393;
					}
				} else {
					goto _st393;
				}
				goto _st0;
			}
			_st393:
			if ( p == eof )
				goto _out393;
			p+= 1;
			st_case_393:
			if ( p == pe && p != eof )
				goto _out393;
			if ( p == eof ) {
				goto _st393;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st394;
					}
					case 93: {
						goto _st512;
					}
				}
				goto _st0;
			}
			_st394:
			if ( p == eof )
				goto _out394;
			p+= 1;
			st_case_394:
			if ( p == pe && p != eof )
				goto _out394;
			if ( p == eof ) {
				goto _st394;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st291;
					}
					case 48: {
						goto _st395;
					}
					case 49: {
						goto _st399;
					}
					case 50: {
						goto _st402;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 51 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st405;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st406;
					}
				} else {
					goto _st406;
				}
				goto _st0;
			}
			_st395:
			if ( p == eof )
				goto _out395;
			p+= 1;
			st_case_395:
			if ( p == pe && p != eof )
				goto _out395;
			if ( p == eof ) {
				goto _st395;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st333;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st396;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st396;
					}
				} else {
					goto _st396;
				}
				goto _st0;
			}
			_st396:
			if ( p == eof )
				goto _out396;
			p+= 1;
			st_case_396:
			if ( p == pe && p != eof )
				goto _out396;
			if ( p == eof ) {
				goto _st396;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st333;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st397;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st397;
					}
				} else {
					goto _st397;
				}
				goto _st0;
			}
			_st397:
			if ( p == eof )
				goto _out397;
			p+= 1;
			st_case_397:
			if ( p == pe && p != eof )
				goto _out397;
			if ( p == eof ) {
				goto _st397;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st333;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st398;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st398;
					}
				} else {
					goto _st398;
				}
				goto _st0;
			}
			_st398:
			if ( p == eof )
				goto _out398;
			p+= 1;
			st_case_398:
			if ( p == pe && p != eof )
				goto _out398;
			if ( p == eof ) {
				goto _st398;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st333;
					}
					case 93: {
						goto _st512;
					}
				}
				goto _st0;
			}
			_st399:
			if ( p == eof )
				goto _out399;
			p+= 1;
			st_case_399:
			if ( p == pe && p != eof )
				goto _out399;
			if ( p == eof ) {
				goto _st399;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st333;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st400;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st396;
					}
				} else {
					goto _st396;
				}
				goto _st0;
			}
			_st400:
			if ( p == eof )
				goto _out400;
			p+= 1;
			st_case_400:
			if ( p == pe && p != eof )
				goto _out400;
			if ( p == eof ) {
				goto _st400;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st333;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st401;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st397;
					}
				} else {
					goto _st397;
				}
				goto _st0;
			}
			_st401:
			if ( p == eof )
				goto _out401;
			p+= 1;
			st_case_401:
			if ( p == pe && p != eof )
				goto _out401;
			if ( p == eof ) {
				goto _st401;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st333;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st398;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st398;
					}
				} else {
					goto _st398;
				}
				goto _st0;
			}
			_st402:
			if ( p == eof )
				goto _out402;
			p+= 1;
			st_case_402:
			if ( p == pe && p != eof )
				goto _out402;
			if ( p == eof ) {
				goto _st402;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 53: {
						goto _st404;
					}
					case 58: {
						goto _st333;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st403;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st396;
					}
				} else {
					goto _st396;
				}
				goto _st0;
			}
			_st403:
			if ( p == eof )
				goto _out403;
			p+= 1;
			st_case_403:
			if ( p == pe && p != eof )
				goto _out403;
			if ( p == eof ) {
				goto _st403;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st333;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st397;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st397;
					}
				} else {
					goto _st397;
				}
				goto _st0;
			}
			_st404:
			if ( p == eof )
				goto _out404;
			p+= 1;
			st_case_404:
			if ( p == pe && p != eof )
				goto _out404;
			if ( p == eof ) {
				goto _st404;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st333;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st401;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st397;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st397;
					}
				} else {
					goto _st397;
				}
				goto _st0;
			}
			_st405:
			if ( p == eof )
				goto _out405;
			p+= 1;
			st_case_405:
			if ( p == pe && p != eof )
				goto _out405;
			if ( p == eof ) {
				goto _st405;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st333;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st403;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st396;
					}
				} else {
					goto _st396;
				}
				goto _st0;
			}
			_st406:
			if ( p == eof )
				goto _out406;
			p+= 1;
			st_case_406:
			if ( p == pe && p != eof )
				goto _out406;
			if ( p == eof ) {
				goto _st406;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st333;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st396;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st396;
					}
				} else {
					goto _st396;
				}
				goto _st0;
			}
			_st407:
			if ( p == eof )
				goto _out407;
			p+= 1;
			st_case_407:
			if ( p == pe && p != eof )
				goto _out407;
			if ( p == eof ) {
				goto _st407;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st394;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st408;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st391;
					}
				} else {
					goto _st391;
				}
				goto _st0;
			}
			_st408:
			if ( p == eof )
				goto _out408;
			p+= 1;
			st_case_408:
			if ( p == pe && p != eof )
				goto _out408;
			if ( p == eof ) {
				goto _st408;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st394;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st409;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st392;
					}
				} else {
					goto _st392;
				}
				goto _st0;
			}
			_st409:
			if ( p == eof )
				goto _out409;
			p+= 1;
			st_case_409:
			if ( p == pe && p != eof )
				goto _out409;
			if ( p == eof ) {
				goto _st409;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st394;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st393;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st393;
					}
				} else {
					goto _st393;
				}
				goto _st0;
			}
			_st410:
			if ( p == eof )
				goto _out410;
			p+= 1;
			st_case_410:
			if ( p == pe && p != eof )
				goto _out410;
			if ( p == eof ) {
				goto _st410;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 53: {
						goto _st412;
					}
					case 58: {
						goto _st394;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st411;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st391;
					}
				} else {
					goto _st391;
				}
				goto _st0;
			}
			_st411:
			if ( p == eof )
				goto _out411;
			p+= 1;
			st_case_411:
			if ( p == pe && p != eof )
				goto _out411;
			if ( p == eof ) {
				goto _st411;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st394;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st392;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st392;
					}
				} else {
					goto _st392;
				}
				goto _st0;
			}
			_st412:
			if ( p == eof )
				goto _out412;
			p+= 1;
			st_case_412:
			if ( p == pe && p != eof )
				goto _out412;
			if ( p == eof ) {
				goto _st412;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st394;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st409;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st392;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st392;
					}
				} else {
					goto _st392;
				}
				goto _st0;
			}
			_st413:
			if ( p == eof )
				goto _out413;
			p+= 1;
			st_case_413:
			if ( p == pe && p != eof )
				goto _out413;
			if ( p == eof ) {
				goto _st413;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st394;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st411;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st391;
					}
				} else {
					goto _st391;
				}
				goto _st0;
			}
			_st414:
			if ( p == eof )
				goto _out414;
			p+= 1;
			st_case_414:
			if ( p == pe && p != eof )
				goto _out414;
			if ( p == eof ) {
				goto _st414;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st394;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st391;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st391;
					}
				} else {
					goto _st391;
				}
				goto _st0;
			}
			_st415:
			if ( p == eof )
				goto _out415;
			p+= 1;
			st_case_415:
			if ( p == pe && p != eof )
				goto _out415;
			if ( p == eof ) {
				goto _st415;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st389;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st416;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st386;
					}
				} else {
					goto _st386;
				}
				goto _st0;
			}
			_st416:
			if ( p == eof )
				goto _out416;
			p+= 1;
			st_case_416:
			if ( p == pe && p != eof )
				goto _out416;
			if ( p == eof ) {
				goto _st416;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st389;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st417;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st387;
					}
				} else {
					goto _st387;
				}
				goto _st0;
			}
			_st417:
			if ( p == eof )
				goto _out417;
			p+= 1;
			st_case_417:
			if ( p == pe && p != eof )
				goto _out417;
			if ( p == eof ) {
				goto _st417;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st389;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st388;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st388;
					}
				} else {
					goto _st388;
				}
				goto _st0;
			}
			_st418:
			if ( p == eof )
				goto _out418;
			p+= 1;
			st_case_418:
			if ( p == pe && p != eof )
				goto _out418;
			if ( p == eof ) {
				goto _st418;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 53: {
						goto _st420;
					}
					case 58: {
						goto _st389;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st419;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st386;
					}
				} else {
					goto _st386;
				}
				goto _st0;
			}
			_st419:
			if ( p == eof )
				goto _out419;
			p+= 1;
			st_case_419:
			if ( p == pe && p != eof )
				goto _out419;
			if ( p == eof ) {
				goto _st419;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st389;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st387;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st387;
					}
				} else {
					goto _st387;
				}
				goto _st0;
			}
			_st420:
			if ( p == eof )
				goto _out420;
			p+= 1;
			st_case_420:
			if ( p == pe && p != eof )
				goto _out420;
			if ( p == eof ) {
				goto _st420;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st389;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st417;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st387;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st387;
					}
				} else {
					goto _st387;
				}
				goto _st0;
			}
			_st421:
			if ( p == eof )
				goto _out421;
			p+= 1;
			st_case_421:
			if ( p == pe && p != eof )
				goto _out421;
			if ( p == eof ) {
				goto _st421;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st389;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st419;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st386;
					}
				} else {
					goto _st386;
				}
				goto _st0;
			}
			_st422:
			if ( p == eof )
				goto _out422;
			p+= 1;
			st_case_422:
			if ( p == pe && p != eof )
				goto _out422;
			if ( p == eof ) {
				goto _st422;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st389;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st386;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st386;
					}
				} else {
					goto _st386;
				}
				goto _st0;
			}
			_st423:
			if ( p == eof )
				goto _out423;
			p+= 1;
			st_case_423:
			if ( p == pe && p != eof )
				goto _out423;
			if ( p == eof ) {
				goto _st423;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st384;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st424;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st381;
					}
				} else {
					goto _st381;
				}
				goto _st0;
			}
			_st424:
			if ( p == eof )
				goto _out424;
			p+= 1;
			st_case_424:
			if ( p == pe && p != eof )
				goto _out424;
			if ( p == eof ) {
				goto _st424;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st384;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st425;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st382;
					}
				} else {
					goto _st382;
				}
				goto _st0;
			}
			_st425:
			if ( p == eof )
				goto _out425;
			p+= 1;
			st_case_425:
			if ( p == pe && p != eof )
				goto _out425;
			if ( p == eof ) {
				goto _st425;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st384;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st383;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st383;
					}
				} else {
					goto _st383;
				}
				goto _st0;
			}
			_st426:
			if ( p == eof )
				goto _out426;
			p+= 1;
			st_case_426:
			if ( p == pe && p != eof )
				goto _out426;
			if ( p == eof ) {
				goto _st426;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 53: {
						goto _st428;
					}
					case 58: {
						goto _st384;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st427;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st381;
					}
				} else {
					goto _st381;
				}
				goto _st0;
			}
			_st427:
			if ( p == eof )
				goto _out427;
			p+= 1;
			st_case_427:
			if ( p == pe && p != eof )
				goto _out427;
			if ( p == eof ) {
				goto _st427;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st384;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st382;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st382;
					}
				} else {
					goto _st382;
				}
				goto _st0;
			}
			_st428:
			if ( p == eof )
				goto _out428;
			p+= 1;
			st_case_428:
			if ( p == pe && p != eof )
				goto _out428;
			if ( p == eof ) {
				goto _st428;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st384;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st425;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st382;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st382;
					}
				} else {
					goto _st382;
				}
				goto _st0;
			}
			_st429:
			if ( p == eof )
				goto _out429;
			p+= 1;
			st_case_429:
			if ( p == pe && p != eof )
				goto _out429;
			if ( p == eof ) {
				goto _st429;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st384;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st427;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st381;
					}
				} else {
					goto _st381;
				}
				goto _st0;
			}
			_st430:
			if ( p == eof )
				goto _out430;
			p+= 1;
			st_case_430:
			if ( p == pe && p != eof )
				goto _out430;
			if ( p == eof ) {
				goto _st430;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st384;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st381;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st381;
					}
				} else {
					goto _st381;
				}
				goto _st0;
			}
			_st431:
			if ( p == eof )
				goto _out431;
			p+= 1;
			st_case_431:
			if ( p == pe && p != eof )
				goto _out431;
			if ( p == eof ) {
				goto _st431;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st379;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st432;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st376;
					}
				} else {
					goto _st376;
				}
				goto _st0;
			}
			_st432:
			if ( p == eof )
				goto _out432;
			p+= 1;
			st_case_432:
			if ( p == pe && p != eof )
				goto _out432;
			if ( p == eof ) {
				goto _st432;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st379;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st433;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st377;
					}
				} else {
					goto _st377;
				}
				goto _st0;
			}
			_st433:
			if ( p == eof )
				goto _out433;
			p+= 1;
			st_case_433:
			if ( p == pe && p != eof )
				goto _out433;
			if ( p == eof ) {
				goto _st433;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st379;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st378;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st378;
					}
				} else {
					goto _st378;
				}
				goto _st0;
			}
			_st434:
			if ( p == eof )
				goto _out434;
			p+= 1;
			st_case_434:
			if ( p == pe && p != eof )
				goto _out434;
			if ( p == eof ) {
				goto _st434;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 53: {
						goto _st436;
					}
					case 58: {
						goto _st379;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st435;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st376;
					}
				} else {
					goto _st376;
				}
				goto _st0;
			}
			_st435:
			if ( p == eof )
				goto _out435;
			p+= 1;
			st_case_435:
			if ( p == pe && p != eof )
				goto _out435;
			if ( p == eof ) {
				goto _st435;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st379;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st377;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st377;
					}
				} else {
					goto _st377;
				}
				goto _st0;
			}
			_st436:
			if ( p == eof )
				goto _out436;
			p+= 1;
			st_case_436:
			if ( p == pe && p != eof )
				goto _out436;
			if ( p == eof ) {
				goto _st436;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st379;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st433;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st377;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st377;
					}
				} else {
					goto _st377;
				}
				goto _st0;
			}
			_st437:
			if ( p == eof )
				goto _out437;
			p+= 1;
			st_case_437:
			if ( p == pe && p != eof )
				goto _out437;
			if ( p == eof ) {
				goto _st437;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st379;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st435;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st376;
					}
				} else {
					goto _st376;
				}
				goto _st0;
			}
			_st438:
			if ( p == eof )
				goto _out438;
			p+= 1;
			st_case_438:
			if ( p == pe && p != eof )
				goto _out438;
			if ( p == eof ) {
				goto _st438;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st379;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st376;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st376;
					}
				} else {
					goto _st376;
				}
				goto _st0;
			}
			_st439:
			if ( p == eof )
				goto _out439;
			p+= 1;
			st_case_439:
			if ( p == pe && p != eof )
				goto _out439;
			if ( p == eof ) {
				goto _st439;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st374;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st440;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st371;
					}
				} else {
					goto _st371;
				}
				goto _st0;
			}
			_st440:
			if ( p == eof )
				goto _out440;
			p+= 1;
			st_case_440:
			if ( p == pe && p != eof )
				goto _out440;
			if ( p == eof ) {
				goto _st440;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st374;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st441;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st372;
					}
				} else {
					goto _st372;
				}
				goto _st0;
			}
			_st441:
			if ( p == eof )
				goto _out441;
			p+= 1;
			st_case_441:
			if ( p == pe && p != eof )
				goto _out441;
			if ( p == eof ) {
				goto _st441;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st374;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st373;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st373;
					}
				} else {
					goto _st373;
				}
				goto _st0;
			}
			_st442:
			if ( p == eof )
				goto _out442;
			p+= 1;
			st_case_442:
			if ( p == pe && p != eof )
				goto _out442;
			if ( p == eof ) {
				goto _st442;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 53: {
						goto _st444;
					}
					case 58: {
						goto _st374;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st443;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st371;
					}
				} else {
					goto _st371;
				}
				goto _st0;
			}
			_st443:
			if ( p == eof )
				goto _out443;
			p+= 1;
			st_case_443:
			if ( p == pe && p != eof )
				goto _out443;
			if ( p == eof ) {
				goto _st443;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st374;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st372;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st372;
					}
				} else {
					goto _st372;
				}
				goto _st0;
			}
			_st444:
			if ( p == eof )
				goto _out444;
			p+= 1;
			st_case_444:
			if ( p == pe && p != eof )
				goto _out444;
			if ( p == eof ) {
				goto _st444;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st374;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( 48 <= ( (*( p))) ) {
						goto _st441;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 70 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
							goto _st372;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st372;
					}
				} else {
					goto _st372;
				}
				goto _st0;
			}
			_st445:
			if ( p == eof )
				goto _out445;
			p+= 1;
			st_case_445:
			if ( p == pe && p != eof )
				goto _out445;
			if ( p == eof ) {
				goto _st445;}
			else {
				switch( ( (*( p))) ) {
					case 46: {
						goto _st294;
					}
					case 58: {
						goto _st374;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st443;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st371;
					}
				} else {
					goto _st371;
				}
				goto _st0;
			}
			_st446:
			if ( p == eof )
				goto _out446;
			p+= 1;
			st_case_446:
			if ( p == pe && p != eof )
				goto _out446;
			if ( p == eof ) {
				goto _st446;}
			else {
				switch( ( (*( p))) ) {
					case 58: {
						goto _st374;
					}
					case 93: {
						goto _st512;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st371;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st371;
					}
				} else {
					goto _st371;
				}
				goto _st0;
			}
			_st447:
			if ( p == eof )
				goto _out447;
			p+= 1;
			st_case_447:
			if ( p == pe && p != eof )
				goto _out447;
			if ( p == eof ) {
				goto _st447;}
			else {
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st448;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st448;
					}
				} else {
					goto _st448;
				}
				goto _st0;
			}
			_st448:
			if ( p == eof )
				goto _out448;
			p+= 1;
			st_case_448:
			if ( p == pe && p != eof )
				goto _out448;
			if ( p == eof ) {
				goto _st448;}
			else {
				if ( ( (*( p))) == 46 ) {
					goto _st449;
				}
				if ( ( (*( p))) < 65 ) {
					if ( 48 <= ( (*( p))) && ( (*( p))) <= 57 ) {
						goto _st448;
					}
				} else if ( ( (*( p))) > 70 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 102 ) {
						goto _st448;
					}
				} else {
					goto _st448;
				}
				goto _st0;
			}
			_st449:
			if ( p == eof )
				goto _out449;
			p+= 1;
			st_case_449:
			if ( p == pe && p != eof )
				goto _out449;
			if ( p == eof ) {
				goto _st449;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st450;
					}
					case 36: {
						goto _st450;
					}
					case 61: {
						goto _st450;
					}
					case 95: {
						goto _st450;
					}
					case 126: {
						goto _st450;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 38 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _st450;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st450;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st450;
					}
				} else {
					goto _st450;
				}
				goto _st0;
			}
			_st450:
			if ( p == eof )
				goto _out450;
			p+= 1;
			st_case_450:
			if ( p == pe && p != eof )
				goto _out450;
			if ( p == eof ) {
				goto _st450;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st450;
					}
					case 36: {
						goto _st450;
					}
					case 61: {
						goto _st450;
					}
					case 93: {
						goto _st512;
					}
					case 95: {
						goto _st450;
					}
					case 126: {
						goto _st450;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 38 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _st450;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st450;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st450;
					}
				} else {
					goto _st450;
				}
				goto _st0;
			}
			_ctr648:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 20684 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st542;
			_ctr692:
				{
#line 28 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (p != mark) {
					uri->setPort(atoi(mark));
				}
				mark = NULL;
			}
			
#line 20696 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 20701 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 20710 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st542;
			_st542:
			if ( p == eof )
				goto _out542;
			p+= 1;
			st_case_542:
			if ( p == pe && p != eof )
				goto _out542;
			if ( p == eof ) {
				goto _ctr692;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st255;
					}
					case 35: {
						goto _ctr636;
					}
					case 37: {
						goto _st256;
					}
					case 47: {
						goto _ctr637;
					}
					case 61: {
						goto _st255;
					}
					case 63: {
						goto _ctr639;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st255;
					}
					case 126: {
						goto _st255;
					}
				}
				if ( ( (*( p))) < 58 ) {
					if ( ( (*( p))) > 46 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _st542;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st255;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st255;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st255;
					}
				} else {
					goto _st255;
				}
				goto _st0;
			}
			_ctr614:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 20777 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st543;
			_ctr694:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 20789 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 20794 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 20803 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st543;
			_st543:
			if ( p == eof )
				goto _out543;
			p+= 1;
			st_case_543:
			if ( p == pe && p != eof )
				goto _out543;
			if ( p == eof ) {
				goto _ctr694;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 46: {
						goto _st544;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr646;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st520;
					}
				} else {
					goto _st520;
				}
				goto _st0;
			}
			_ctr696:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 20873 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 20878 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 20887 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st544;
			_st544:
			if ( p == eof )
				goto _out544;
			p+= 1;
			st_case_544:
			if ( p == pe && p != eof )
				goto _out544;
			if ( p == eof ) {
				goto _ctr696;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st233;
					}
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 47: {
						goto _ctr624;
					}
					case 48: {
						goto _st545;
					}
					case 49: {
						goto _st553;
					}
					case 50: {
						goto _st555;
					}
					case 58: {
						goto _ctr646;
					}
					case 59: {
						goto _st520;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 51 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st520;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st520;
					}
				} else {
					goto _st554;
				}
				goto _st0;
			}
			_ctr701:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 20973 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 20978 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 20987 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st545;
			_st545:
			if ( p == eof )
				goto _out545;
			p+= 1;
			st_case_545:
			if ( p == pe && p != eof )
				goto _out545;
			if ( p == eof ) {
				goto _ctr701;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 46: {
						goto _st546;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr646;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st520;
					}
				} else {
					goto _st520;
				}
				goto _st0;
			}
			_ctr703:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 21057 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 21062 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 21071 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st546;
			_st546:
			if ( p == eof )
				goto _out546;
			p+= 1;
			st_case_546:
			if ( p == pe && p != eof )
				goto _out546;
			if ( p == eof ) {
				goto _ctr703;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st237;
					}
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 47: {
						goto _ctr624;
					}
					case 48: {
						goto _st547;
					}
					case 49: {
						goto _st549;
					}
					case 50: {
						goto _st551;
					}
					case 58: {
						goto _ctr646;
					}
					case 59: {
						goto _st520;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 51 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 46 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st520;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st520;
					}
				} else {
					goto _st550;
				}
				goto _st0;
			}
			_ctr708:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 21157 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 21162 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 21171 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st547;
			_st547:
			if ( p == eof )
				goto _out547;
			p+= 1;
			st_case_547:
			if ( p == pe && p != eof )
				goto _out547;
			if ( p == eof ) {
				goto _ctr708;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 46: {
						goto _st548;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr646;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st520;
					}
				} else {
					goto _st520;
				}
				goto _st0;
			}
			_ctr710:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 21241 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 21246 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 21255 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st548;
			_st548:
			if ( p == eof )
				goto _out548;
			p+= 1;
			st_case_548:
			if ( p == pe && p != eof )
				goto _out548;
			if ( p == eof ) {
				goto _ctr710;}
			else {
				switch( ( (*( p))) ) {
					case 2: {
						goto _st241;
					}
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr646;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 65 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 59 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 90 ) {
					if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
						goto _st520;
					}
				} else {
					goto _st520;
				}
				goto _st0;
			}
			_ctr711:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 21325 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 21330 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 21339 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st549;
			_st549:
			if ( p == eof )
				goto _out549;
			p+= 1;
			st_case_549:
			if ( p == pe && p != eof )
				goto _out549;
			if ( p == eof ) {
				goto _ctr711;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 46: {
						goto _st548;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr646;
					}
					case 59: {
						goto _st520;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st520;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st520;
					}
				} else {
					goto _st550;
				}
				goto _st0;
			}
			_ctr712:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 21416 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 21421 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 21430 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st550;
			_st550:
			if ( p == eof )
				goto _out550;
			p+= 1;
			st_case_550:
			if ( p == pe && p != eof )
				goto _out550;
			if ( p == eof ) {
				goto _ctr712;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 46: {
						goto _st548;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr646;
					}
					case 59: {
						goto _st520;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st520;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st520;
					}
				} else {
					goto _st547;
				}
				goto _st0;
			}
			_ctr713:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 21507 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 21512 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 21521 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st551;
			_st551:
			if ( p == eof )
				goto _out551;
			p+= 1;
			st_case_551:
			if ( p == pe && p != eof )
				goto _out551;
			if ( p == eof ) {
				goto _ctr713;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 46: {
						goto _st548;
					}
					case 47: {
						goto _ctr624;
					}
					case 53: {
						goto _st552;
					}
					case 58: {
						goto _ctr646;
					}
					case 59: {
						goto _st520;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st520;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st520;
					}
				} else {
					goto _st547;
				}
				goto _st0;
			}
			_ctr715:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 21601 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 21606 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 21615 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st552;
			_st552:
			if ( p == eof )
				goto _out552;
			p+= 1;
			st_case_552:
			if ( p == pe && p != eof )
				goto _out552;
			if ( p == eof ) {
				goto _ctr715;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 46: {
						goto _st548;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr646;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( ( (*( p))) > 45 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _st547;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st520;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st520;
					}
				} else {
					goto _st520;
				}
				goto _st0;
			}
			_ctr716:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 21693 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 21698 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 21707 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st553;
			_st553:
			if ( p == eof )
				goto _out553;
			p+= 1;
			st_case_553:
			if ( p == pe && p != eof )
				goto _out553;
			if ( p == eof ) {
				goto _ctr716;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 46: {
						goto _st546;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr646;
					}
					case 59: {
						goto _st520;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st520;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st520;
					}
				} else {
					goto _st554;
				}
				goto _st0;
			}
			_ctr717:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 21784 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 21789 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 21798 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st554;
			_st554:
			if ( p == eof )
				goto _out554;
			p+= 1;
			st_case_554:
			if ( p == pe && p != eof )
				goto _out554;
			if ( p == eof ) {
				goto _ctr717;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 46: {
						goto _st546;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr646;
					}
					case 59: {
						goto _st520;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st520;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st520;
					}
				} else {
					goto _st545;
				}
				goto _st0;
			}
			_ctr718:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 21875 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 21880 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 21889 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st555;
			_st555:
			if ( p == eof )
				goto _out555;
			p+= 1;
			st_case_555:
			if ( p == pe && p != eof )
				goto _out555;
			if ( p == eof ) {
				goto _ctr718;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 46: {
						goto _st546;
					}
					case 47: {
						goto _ctr624;
					}
					case 53: {
						goto _st556;
					}
					case 58: {
						goto _ctr646;
					}
					case 59: {
						goto _st520;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st520;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st520;
					}
				} else {
					goto _st545;
				}
				goto _st0;
			}
			_ctr720:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 21969 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 21974 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 21983 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st556;
			_st556:
			if ( p == eof )
				goto _out556;
			p+= 1;
			st_case_556:
			if ( p == pe && p != eof )
				goto _out556;
			if ( p == eof ) {
				goto _ctr720;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 46: {
						goto _st546;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr646;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( ( (*( p))) > 45 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _st545;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st520;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st520;
					}
				} else {
					goto _st520;
				}
				goto _st0;
			}
			_ctr615:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 22056 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st557;
			_ctr721:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 22068 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 22073 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 22082 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st557;
			_st557:
			if ( p == eof )
				goto _out557;
			p+= 1;
			st_case_557:
			if ( p == pe && p != eof )
				goto _out557;
			if ( p == eof ) {
				goto _ctr721;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 46: {
						goto _st544;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr646;
					}
					case 59: {
						goto _st520;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st520;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st520;
					}
				} else {
					goto _st558;
				}
				goto _st0;
			}
			_ctr617:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 22154 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st558;
			_ctr723:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 22166 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 22171 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 22180 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st558;
			_st558:
			if ( p == eof )
				goto _out558;
			p+= 1;
			st_case_558:
			if ( p == pe && p != eof )
				goto _out558;
			if ( p == eof ) {
				goto _ctr723;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 46: {
						goto _st544;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr646;
					}
					case 59: {
						goto _st520;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st520;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st520;
					}
				} else {
					goto _st543;
				}
				goto _st0;
			}
			_ctr616:
				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 22252 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st559;
			_ctr725:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 22264 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 22269 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 22278 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st559;
			_st559:
			if ( p == eof )
				goto _out559;
			p+= 1;
			st_case_559:
			if ( p == pe && p != eof )
				goto _out559;
			if ( p == eof ) {
				goto _ctr725;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 46: {
						goto _st544;
					}
					case 47: {
						goto _ctr624;
					}
					case 53: {
						goto _st560;
					}
					case 58: {
						goto _ctr646;
					}
					case 59: {
						goto _st520;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 48 ) {
					if ( 36 <= ( (*( p))) && ( (*( p))) <= 45 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 57 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st520;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st520;
					}
				} else {
					goto _st543;
				}
				goto _st0;
			}
			_ctr727:
				{
#line 43 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				if (mark != NULL) {
					//std::cout << std::string(mark, fpc - mark) << std::endl;
					uri->setHost(std::string(mark, p - mark));
				}
			}
			
#line 22358 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 17 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				mark = p; }
			
#line 22363 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

				{
#line 78 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"
				
				//std::cout << std::string(mark, fpc - mark) << std::endl;
				uri->setPath(std::string(mark, p - mark));
				mark = NULL;
			}
			
#line 22372 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl.cc"

			goto _st560;
			_st560:
			if ( p == eof )
				goto _out560;
			p+= 1;
			st_case_560:
			if ( p == pe && p != eof )
				goto _out560;
			if ( p == eof ) {
				goto _ctr727;}
			else {
				switch( ( (*( p))) ) {
					case 33: {
						goto _st520;
					}
					case 35: {
						goto _ctr623;
					}
					case 37: {
						goto _st253;
					}
					case 46: {
						goto _st544;
					}
					case 47: {
						goto _ctr624;
					}
					case 58: {
						goto _ctr646;
					}
					case 61: {
						goto _st520;
					}
					case 63: {
						goto _ctr626;
					}
					case 64: {
						goto _ctr274;
					}
					case 95: {
						goto _st520;
					}
					case 126: {
						goto _st520;
					}
				}
				if ( ( (*( p))) < 54 ) {
					if ( ( (*( p))) > 45 ) {
						if ( 48 <= ( (*( p))) ) {
							goto _st543;
						}
					} else if ( ( (*( p))) >= 36 ) {
						goto _st520;
					}
				} else if ( ( (*( p))) > 59 ) {
					if ( ( (*( p))) > 90 ) {
						if ( 97 <= ( (*( p))) && ( (*( p))) <= 122 ) {
							goto _st520;
						}
					} else if ( ( (*( p))) >= 65 ) {
						goto _st520;
					}
				} else {
					goto _st520;
				}
				goto _st0;
			}
			_out451: cs = 451; goto _out; 
			_out452: cs = 452; goto _out; 
			_out0: cs = 0; goto _out; 
			_out453: cs = 453; goto _out; 
			_out454: cs = 454; goto _out; 
			_out1: cs = 1; goto _out; 
			_out2: cs = 2; goto _out; 
			_out3: cs = 3; goto _out; 
			_out4: cs = 4; goto _out; 
			_out455: cs = 455; goto _out; 
			_out5: cs = 5; goto _out; 
			_out6: cs = 6; goto _out; 
			_out456: cs = 456; goto _out; 
			_out457: cs = 457; goto _out; 
			_out7: cs = 7; goto _out; 
			_out8: cs = 8; goto _out; 
			_out458: cs = 458; goto _out; 
			_out459: cs = 459; goto _out; 
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
			_out460: cs = 460; goto _out; 
			_out461: cs = 461; goto _out; 
			_out462: cs = 462; goto _out; 
			_out463: cs = 463; goto _out; 
			_out464: cs = 464; goto _out; 
			_out465: cs = 465; goto _out; 
			_out466: cs = 466; goto _out; 
			_out23: cs = 23; goto _out; 
			_out24: cs = 24; goto _out; 
			_out25: cs = 25; goto _out; 
			_out26: cs = 26; goto _out; 
			_out27: cs = 27; goto _out; 
			_out28: cs = 28; goto _out; 
			_out29: cs = 29; goto _out; 
			_out30: cs = 30; goto _out; 
			_out467: cs = 467; goto _out; 
			_out31: cs = 31; goto _out; 
			_out32: cs = 32; goto _out; 
			_out468: cs = 468; goto _out; 
			_out33: cs = 33; goto _out; 
			_out34: cs = 34; goto _out; 
			_out35: cs = 35; goto _out; 
			_out469: cs = 469; goto _out; 
			_out470: cs = 470; goto _out; 
			_out36: cs = 36; goto _out; 
			_out37: cs = 37; goto _out; 
			_out471: cs = 471; goto _out; 
			_out472: cs = 472; goto _out; 
			_out473: cs = 473; goto _out; 
			_out474: cs = 474; goto _out; 
			_out475: cs = 475; goto _out; 
			_out476: cs = 476; goto _out; 
			_out477: cs = 477; goto _out; 
			_out478: cs = 478; goto _out; 
			_out479: cs = 479; goto _out; 
			_out480: cs = 480; goto _out; 
			_out481: cs = 481; goto _out; 
			_out482: cs = 482; goto _out; 
			_out483: cs = 483; goto _out; 
			_out484: cs = 484; goto _out; 
			_out485: cs = 485; goto _out; 
			_out486: cs = 486; goto _out; 
			_out487: cs = 487; goto _out; 
			_out488: cs = 488; goto _out; 
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
			_out116: cs = 116; goto _out; 
			_out117: cs = 117; goto _out; 
			_out118: cs = 118; goto _out; 
			_out119: cs = 119; goto _out; 
			_out120: cs = 120; goto _out; 
			_out121: cs = 121; goto _out; 
			_out122: cs = 122; goto _out; 
			_out123: cs = 123; goto _out; 
			_out124: cs = 124; goto _out; 
			_out125: cs = 125; goto _out; 
			_out126: cs = 126; goto _out; 
			_out127: cs = 127; goto _out; 
			_out128: cs = 128; goto _out; 
			_out129: cs = 129; goto _out; 
			_out130: cs = 130; goto _out; 
			_out131: cs = 131; goto _out; 
			_out132: cs = 132; goto _out; 
			_out133: cs = 133; goto _out; 
			_out134: cs = 134; goto _out; 
			_out135: cs = 135; goto _out; 
			_out136: cs = 136; goto _out; 
			_out137: cs = 137; goto _out; 
			_out138: cs = 138; goto _out; 
			_out139: cs = 139; goto _out; 
			_out140: cs = 140; goto _out; 
			_out141: cs = 141; goto _out; 
			_out142: cs = 142; goto _out; 
			_out143: cs = 143; goto _out; 
			_out144: cs = 144; goto _out; 
			_out145: cs = 145; goto _out; 
			_out146: cs = 146; goto _out; 
			_out147: cs = 147; goto _out; 
			_out148: cs = 148; goto _out; 
			_out149: cs = 149; goto _out; 
			_out150: cs = 150; goto _out; 
			_out151: cs = 151; goto _out; 
			_out152: cs = 152; goto _out; 
			_out153: cs = 153; goto _out; 
			_out154: cs = 154; goto _out; 
			_out155: cs = 155; goto _out; 
			_out156: cs = 156; goto _out; 
			_out157: cs = 157; goto _out; 
			_out158: cs = 158; goto _out; 
			_out159: cs = 159; goto _out; 
			_out160: cs = 160; goto _out; 
			_out161: cs = 161; goto _out; 
			_out162: cs = 162; goto _out; 
			_out163: cs = 163; goto _out; 
			_out164: cs = 164; goto _out; 
			_out165: cs = 165; goto _out; 
			_out166: cs = 166; goto _out; 
			_out167: cs = 167; goto _out; 
			_out168: cs = 168; goto _out; 
			_out169: cs = 169; goto _out; 
			_out170: cs = 170; goto _out; 
			_out171: cs = 171; goto _out; 
			_out172: cs = 172; goto _out; 
			_out173: cs = 173; goto _out; 
			_out174: cs = 174; goto _out; 
			_out175: cs = 175; goto _out; 
			_out176: cs = 176; goto _out; 
			_out177: cs = 177; goto _out; 
			_out178: cs = 178; goto _out; 
			_out179: cs = 179; goto _out; 
			_out180: cs = 180; goto _out; 
			_out181: cs = 181; goto _out; 
			_out182: cs = 182; goto _out; 
			_out183: cs = 183; goto _out; 
			_out184: cs = 184; goto _out; 
			_out185: cs = 185; goto _out; 
			_out186: cs = 186; goto _out; 
			_out187: cs = 187; goto _out; 
			_out188: cs = 188; goto _out; 
			_out189: cs = 189; goto _out; 
			_out190: cs = 190; goto _out; 
			_out191: cs = 191; goto _out; 
			_out192: cs = 192; goto _out; 
			_out193: cs = 193; goto _out; 
			_out194: cs = 194; goto _out; 
			_out195: cs = 195; goto _out; 
			_out196: cs = 196; goto _out; 
			_out197: cs = 197; goto _out; 
			_out198: cs = 198; goto _out; 
			_out199: cs = 199; goto _out; 
			_out200: cs = 200; goto _out; 
			_out201: cs = 201; goto _out; 
			_out202: cs = 202; goto _out; 
			_out203: cs = 203; goto _out; 
			_out204: cs = 204; goto _out; 
			_out205: cs = 205; goto _out; 
			_out206: cs = 206; goto _out; 
			_out207: cs = 207; goto _out; 
			_out208: cs = 208; goto _out; 
			_out209: cs = 209; goto _out; 
			_out210: cs = 210; goto _out; 
			_out211: cs = 211; goto _out; 
			_out212: cs = 212; goto _out; 
			_out213: cs = 213; goto _out; 
			_out214: cs = 214; goto _out; 
			_out215: cs = 215; goto _out; 
			_out216: cs = 216; goto _out; 
			_out217: cs = 217; goto _out; 
			_out218: cs = 218; goto _out; 
			_out219: cs = 219; goto _out; 
			_out220: cs = 220; goto _out; 
			_out221: cs = 221; goto _out; 
			_out222: cs = 222; goto _out; 
			_out223: cs = 223; goto _out; 
			_out224: cs = 224; goto _out; 
			_out225: cs = 225; goto _out; 
			_out226: cs = 226; goto _out; 
			_out227: cs = 227; goto _out; 
			_out228: cs = 228; goto _out; 
			_out489: cs = 489; goto _out; 
			_out490: cs = 490; goto _out; 
			_out491: cs = 491; goto _out; 
			_out492: cs = 492; goto _out; 
			_out493: cs = 493; goto _out; 
			_out494: cs = 494; goto _out; 
			_out495: cs = 495; goto _out; 
			_out496: cs = 496; goto _out; 
			_out497: cs = 497; goto _out; 
			_out498: cs = 498; goto _out; 
			_out499: cs = 499; goto _out; 
			_out500: cs = 500; goto _out; 
			_out501: cs = 501; goto _out; 
			_out502: cs = 502; goto _out; 
			_out503: cs = 503; goto _out; 
			_out504: cs = 504; goto _out; 
			_out505: cs = 505; goto _out; 
			_out506: cs = 506; goto _out; 
			_out507: cs = 507; goto _out; 
			_out508: cs = 508; goto _out; 
			_out509: cs = 509; goto _out; 
			_out510: cs = 510; goto _out; 
			_out511: cs = 511; goto _out; 
			_out229: cs = 229; goto _out; 
			_out230: cs = 230; goto _out; 
			_out231: cs = 231; goto _out; 
			_out232: cs = 232; goto _out; 
			_out233: cs = 233; goto _out; 
			_out234: cs = 234; goto _out; 
			_out235: cs = 235; goto _out; 
			_out236: cs = 236; goto _out; 
			_out237: cs = 237; goto _out; 
			_out238: cs = 238; goto _out; 
			_out239: cs = 239; goto _out; 
			_out240: cs = 240; goto _out; 
			_out241: cs = 241; goto _out; 
			_out242: cs = 242; goto _out; 
			_out512: cs = 512; goto _out; 
			_out513: cs = 513; goto _out; 
			_out243: cs = 243; goto _out; 
			_out244: cs = 244; goto _out; 
			_out514: cs = 514; goto _out; 
			_out515: cs = 515; goto _out; 
			_out516: cs = 516; goto _out; 
			_out517: cs = 517; goto _out; 
			_out518: cs = 518; goto _out; 
			_out519: cs = 519; goto _out; 
			_out245: cs = 245; goto _out; 
			_out246: cs = 246; goto _out; 
			_out247: cs = 247; goto _out; 
			_out248: cs = 248; goto _out; 
			_out249: cs = 249; goto _out; 
			_out250: cs = 250; goto _out; 
			_out251: cs = 251; goto _out; 
			_out252: cs = 252; goto _out; 
			_out520: cs = 520; goto _out; 
			_out253: cs = 253; goto _out; 
			_out254: cs = 254; goto _out; 
			_out521: cs = 521; goto _out; 
			_out255: cs = 255; goto _out; 
			_out256: cs = 256; goto _out; 
			_out257: cs = 257; goto _out; 
			_out522: cs = 522; goto _out; 
			_out523: cs = 523; goto _out; 
			_out258: cs = 258; goto _out; 
			_out259: cs = 259; goto _out; 
			_out524: cs = 524; goto _out; 
			_out525: cs = 525; goto _out; 
			_out526: cs = 526; goto _out; 
			_out527: cs = 527; goto _out; 
			_out528: cs = 528; goto _out; 
			_out529: cs = 529; goto _out; 
			_out530: cs = 530; goto _out; 
			_out531: cs = 531; goto _out; 
			_out532: cs = 532; goto _out; 
			_out533: cs = 533; goto _out; 
			_out534: cs = 534; goto _out; 
			_out535: cs = 535; goto _out; 
			_out536: cs = 536; goto _out; 
			_out537: cs = 537; goto _out; 
			_out538: cs = 538; goto _out; 
			_out539: cs = 539; goto _out; 
			_out540: cs = 540; goto _out; 
			_out541: cs = 541; goto _out; 
			_out260: cs = 260; goto _out; 
			_out261: cs = 261; goto _out; 
			_out262: cs = 262; goto _out; 
			_out263: cs = 263; goto _out; 
			_out264: cs = 264; goto _out; 
			_out265: cs = 265; goto _out; 
			_out266: cs = 266; goto _out; 
			_out267: cs = 267; goto _out; 
			_out268: cs = 268; goto _out; 
			_out269: cs = 269; goto _out; 
			_out270: cs = 270; goto _out; 
			_out271: cs = 271; goto _out; 
			_out272: cs = 272; goto _out; 
			_out273: cs = 273; goto _out; 
			_out274: cs = 274; goto _out; 
			_out275: cs = 275; goto _out; 
			_out276: cs = 276; goto _out; 
			_out277: cs = 277; goto _out; 
			_out278: cs = 278; goto _out; 
			_out279: cs = 279; goto _out; 
			_out280: cs = 280; goto _out; 
			_out281: cs = 281; goto _out; 
			_out282: cs = 282; goto _out; 
			_out283: cs = 283; goto _out; 
			_out284: cs = 284; goto _out; 
			_out285: cs = 285; goto _out; 
			_out286: cs = 286; goto _out; 
			_out287: cs = 287; goto _out; 
			_out288: cs = 288; goto _out; 
			_out289: cs = 289; goto _out; 
			_out290: cs = 290; goto _out; 
			_out291: cs = 291; goto _out; 
			_out292: cs = 292; goto _out; 
			_out293: cs = 293; goto _out; 
			_out294: cs = 294; goto _out; 
			_out295: cs = 295; goto _out; 
			_out296: cs = 296; goto _out; 
			_out297: cs = 297; goto _out; 
			_out298: cs = 298; goto _out; 
			_out299: cs = 299; goto _out; 
			_out300: cs = 300; goto _out; 
			_out301: cs = 301; goto _out; 
			_out302: cs = 302; goto _out; 
			_out303: cs = 303; goto _out; 
			_out304: cs = 304; goto _out; 
			_out305: cs = 305; goto _out; 
			_out306: cs = 306; goto _out; 
			_out307: cs = 307; goto _out; 
			_out308: cs = 308; goto _out; 
			_out309: cs = 309; goto _out; 
			_out310: cs = 310; goto _out; 
			_out311: cs = 311; goto _out; 
			_out312: cs = 312; goto _out; 
			_out313: cs = 313; goto _out; 
			_out314: cs = 314; goto _out; 
			_out315: cs = 315; goto _out; 
			_out316: cs = 316; goto _out; 
			_out317: cs = 317; goto _out; 
			_out318: cs = 318; goto _out; 
			_out319: cs = 319; goto _out; 
			_out320: cs = 320; goto _out; 
			_out321: cs = 321; goto _out; 
			_out322: cs = 322; goto _out; 
			_out323: cs = 323; goto _out; 
			_out324: cs = 324; goto _out; 
			_out325: cs = 325; goto _out; 
			_out326: cs = 326; goto _out; 
			_out327: cs = 327; goto _out; 
			_out328: cs = 328; goto _out; 
			_out329: cs = 329; goto _out; 
			_out330: cs = 330; goto _out; 
			_out331: cs = 331; goto _out; 
			_out332: cs = 332; goto _out; 
			_out333: cs = 333; goto _out; 
			_out334: cs = 334; goto _out; 
			_out335: cs = 335; goto _out; 
			_out336: cs = 336; goto _out; 
			_out337: cs = 337; goto _out; 
			_out338: cs = 338; goto _out; 
			_out339: cs = 339; goto _out; 
			_out340: cs = 340; goto _out; 
			_out341: cs = 341; goto _out; 
			_out342: cs = 342; goto _out; 
			_out343: cs = 343; goto _out; 
			_out344: cs = 344; goto _out; 
			_out345: cs = 345; goto _out; 
			_out346: cs = 346; goto _out; 
			_out347: cs = 347; goto _out; 
			_out348: cs = 348; goto _out; 
			_out349: cs = 349; goto _out; 
			_out350: cs = 350; goto _out; 
			_out351: cs = 351; goto _out; 
			_out352: cs = 352; goto _out; 
			_out353: cs = 353; goto _out; 
			_out354: cs = 354; goto _out; 
			_out355: cs = 355; goto _out; 
			_out356: cs = 356; goto _out; 
			_out357: cs = 357; goto _out; 
			_out358: cs = 358; goto _out; 
			_out359: cs = 359; goto _out; 
			_out360: cs = 360; goto _out; 
			_out361: cs = 361; goto _out; 
			_out362: cs = 362; goto _out; 
			_out363: cs = 363; goto _out; 
			_out364: cs = 364; goto _out; 
			_out365: cs = 365; goto _out; 
			_out366: cs = 366; goto _out; 
			_out367: cs = 367; goto _out; 
			_out368: cs = 368; goto _out; 
			_out369: cs = 369; goto _out; 
			_out370: cs = 370; goto _out; 
			_out371: cs = 371; goto _out; 
			_out372: cs = 372; goto _out; 
			_out373: cs = 373; goto _out; 
			_out374: cs = 374; goto _out; 
			_out375: cs = 375; goto _out; 
			_out376: cs = 376; goto _out; 
			_out377: cs = 377; goto _out; 
			_out378: cs = 378; goto _out; 
			_out379: cs = 379; goto _out; 
			_out380: cs = 380; goto _out; 
			_out381: cs = 381; goto _out; 
			_out382: cs = 382; goto _out; 
			_out383: cs = 383; goto _out; 
			_out384: cs = 384; goto _out; 
			_out385: cs = 385; goto _out; 
			_out386: cs = 386; goto _out; 
			_out387: cs = 387; goto _out; 
			_out388: cs = 388; goto _out; 
			_out389: cs = 389; goto _out; 
			_out390: cs = 390; goto _out; 
			_out391: cs = 391; goto _out; 
			_out392: cs = 392; goto _out; 
			_out393: cs = 393; goto _out; 
			_out394: cs = 394; goto _out; 
			_out395: cs = 395; goto _out; 
			_out396: cs = 396; goto _out; 
			_out397: cs = 397; goto _out; 
			_out398: cs = 398; goto _out; 
			_out399: cs = 399; goto _out; 
			_out400: cs = 400; goto _out; 
			_out401: cs = 401; goto _out; 
			_out402: cs = 402; goto _out; 
			_out403: cs = 403; goto _out; 
			_out404: cs = 404; goto _out; 
			_out405: cs = 405; goto _out; 
			_out406: cs = 406; goto _out; 
			_out407: cs = 407; goto _out; 
			_out408: cs = 408; goto _out; 
			_out409: cs = 409; goto _out; 
			_out410: cs = 410; goto _out; 
			_out411: cs = 411; goto _out; 
			_out412: cs = 412; goto _out; 
			_out413: cs = 413; goto _out; 
			_out414: cs = 414; goto _out; 
			_out415: cs = 415; goto _out; 
			_out416: cs = 416; goto _out; 
			_out417: cs = 417; goto _out; 
			_out418: cs = 418; goto _out; 
			_out419: cs = 419; goto _out; 
			_out420: cs = 420; goto _out; 
			_out421: cs = 421; goto _out; 
			_out422: cs = 422; goto _out; 
			_out423: cs = 423; goto _out; 
			_out424: cs = 424; goto _out; 
			_out425: cs = 425; goto _out; 
			_out426: cs = 426; goto _out; 
			_out427: cs = 427; goto _out; 
			_out428: cs = 428; goto _out; 
			_out429: cs = 429; goto _out; 
			_out430: cs = 430; goto _out; 
			_out431: cs = 431; goto _out; 
			_out432: cs = 432; goto _out; 
			_out433: cs = 433; goto _out; 
			_out434: cs = 434; goto _out; 
			_out435: cs = 435; goto _out; 
			_out436: cs = 436; goto _out; 
			_out437: cs = 437; goto _out; 
			_out438: cs = 438; goto _out; 
			_out439: cs = 439; goto _out; 
			_out440: cs = 440; goto _out; 
			_out441: cs = 441; goto _out; 
			_out442: cs = 442; goto _out; 
			_out443: cs = 443; goto _out; 
			_out444: cs = 444; goto _out; 
			_out445: cs = 445; goto _out; 
			_out446: cs = 446; goto _out; 
			_out447: cs = 447; goto _out; 
			_out448: cs = 448; goto _out; 
			_out449: cs = 449; goto _out; 
			_out450: cs = 450; goto _out; 
			_out542: cs = 542; goto _out; 
			_out543: cs = 543; goto _out; 
			_out544: cs = 544; goto _out; 
			_out545: cs = 545; goto _out; 
			_out546: cs = 546; goto _out; 
			_out547: cs = 547; goto _out; 
			_out548: cs = 548; goto _out; 
			_out549: cs = 549; goto _out; 
			_out550: cs = 550; goto _out; 
			_out551: cs = 551; goto _out; 
			_out552: cs = 552; goto _out; 
			_out553: cs = 553; goto _out; 
			_out554: cs = 554; goto _out; 
			_out555: cs = 555; goto _out; 
			_out556: cs = 556; goto _out; 
			_out557: cs = 557; goto _out; 
			_out558: cs = 558; goto _out; 
			_out559: cs = 559; goto _out; 
			_out560: cs = 560; goto _out; 
			_out: {}
		}
		
#line 142 "/home/Ricardo/ICEY/Ricardo/ricardo/uri.rl"

		if(cs == uri_parser_error) {
			return nullptr;
		} else if(cs >= uri_parser_first_final) {
			return uri;
		}
		return nullptr;
	}
	
	Uri::Uri()
	:m_port(0) {
	}
	
	bool Uri::isDefaultPort() const {
		if(m_port == 0) {
			return true;
		}
		if(m_scheme == "http"
		|| m_scheme == "ws") {
			return m_port == 80;
		} else if(m_scheme == "https"
		|| m_scheme == "wss") {
			return m_port == 443;
		}
		return false;
	}
	
	const std::string& Uri::getPath() const {
		static std::string s_default_path = "/";
		return m_path.empty() ? s_default_path : m_path;
	}
	
	int32_t Uri::getPort() const {
		if(m_port) {
			return m_port;
		}
		if(m_scheme == "http"
		|| m_scheme == "ws") {
			return 80;
		} else if(m_scheme == "https"
		|| m_scheme == "wss") {
			return 443;
		}
		return m_port;
	}
	
	std::ostream& Uri::dump(std::ostream& os) const {
		os << m_scheme << "://"
		<< m_userinfo
		<< (m_userinfo.empty() ? "" : "@")
		<< m_host
		<< (isDefaultPort() ? "" : ":" + std::to_string(m_port))
		<< getPath()
		<< (m_query.empty() ? "" : "?")
		<< m_query
		<< (m_fragment.empty() ? "" : "#")
		<< m_fragment;
		return os;
	}
	
	std::string Uri::toString() const {
		std::stringstream ss;
		dump(ss);
		return ss.str();
	}
	
	Address::ptr Uri::createAddress() const {
		auto addr = Address::LookupAnyIPAddress(m_host);
		if(addr) {
			addr->setPort(getPort());
		}
		return addr;
	}
	
}
