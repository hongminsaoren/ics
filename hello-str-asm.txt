
./testcase/bin/hello-str:     file format elf32-i386


Disassembly of section .text:

00030000 <start>:
   30000:	e9 1a 00 00 00       	jmp    3001f <main>

00030005 <sbrk>:
   30005:	55                   	push   %ebp
   30006:	89 e5                	mov    %esp,%ebp
   30008:	e8 08 01 00 00       	call   30115 <__x86.get_pc_thunk.ax>
   3000d:	05 f3 8f 00 00       	add    $0x8ff3,%eax
   30012:	b8 01 00 00 00       	mov    $0x1,%eax
   30017:	82                   	nemu_trap 
   30018:	b8 00 00 00 00       	mov    $0x0,%eax
   3001d:	5d                   	pop    %ebp
   3001e:	c3                   	ret    

0003001f <main>:
   3001f:	8d 4c 24 04          	lea    0x4(%esp),%ecx
   30023:	83 e4 f0             	and    $0xfffffff0,%esp
   30026:	ff 71 fc             	pushl  -0x4(%ecx)
   30029:	55                   	push   %ebp
   3002a:	89 e5                	mov    %esp,%ebp
   3002c:	53                   	push   %ebx
   3002d:	51                   	push   %ecx
   3002e:	e8 e6 00 00 00       	call   30119 <__x86.get_pc_thunk.bx>
   30033:	81 c3 cd 8f 00 00    	add    $0x8fcd,%ebx
   30039:	83 ec 04             	sub    $0x4,%esp
   3003c:	8d 83 00 e0 ff ff    	lea    -0x2000(%ebx),%eax
   30042:	50                   	push   %eax
   30043:	8d 83 0e e0 ff ff    	lea    -0x1ff2(%ebx),%eax
   30049:	50                   	push   %eax
   3004a:	c7 c0 a0 99 03 00    	mov    $0x399a0,%eax
   30050:	50                   	push   %eax
   30051:	e8 2a 01 00 00       	call   30180 <sprintf>
   30056:	83 c4 10             	add    $0x10,%esp
   30059:	83 ec 08             	sub    $0x8,%esp
   3005c:	8d 83 00 e0 ff ff    	lea    -0x2000(%ebx),%eax
   30062:	50                   	push   %eax
   30063:	c7 c0 a0 99 03 00    	mov    $0x399a0,%eax
   30069:	50                   	push   %eax
   3006a:	e8 81 01 00 00       	call   301f0 <strcmp>
   3006f:	83 c4 10             	add    $0x10,%esp
   30072:	85 c0                	test   %eax,%eax
   30074:	74 06                	je     3007c <main+0x5d>
   30076:	b8 01 00 00 00       	mov    $0x1,%eax
   3007b:	82                   	nemu_trap 
   3007c:	83 ec 0c             	sub    $0xc,%esp
   3007f:	6a 02                	push   $0x2
   30081:	6a 01                	push   $0x1
   30083:	6a 01                	push   $0x1
   30085:	8d 83 11 e0 ff ff    	lea    -0x1fef(%ebx),%eax
   3008b:	50                   	push   %eax
   3008c:	c7 c0 a0 99 03 00    	mov    $0x399a0,%eax
   30092:	50                   	push   %eax
   30093:	e8 e8 00 00 00       	call   30180 <sprintf>
   30098:	83 c4 20             	add    $0x20,%esp
   3009b:	83 ec 08             	sub    $0x8,%esp
   3009e:	8d 83 1f e0 ff ff    	lea    -0x1fe1(%ebx),%eax
   300a4:	50                   	push   %eax
   300a5:	c7 c0 a0 99 03 00    	mov    $0x399a0,%eax
   300ab:	50                   	push   %eax
   300ac:	e8 3f 01 00 00       	call   301f0 <strcmp>
   300b1:	83 c4 10             	add    $0x10,%esp
   300b4:	85 c0                	test   %eax,%eax
   300b6:	74 06                	je     300be <main+0x9f>
   300b8:	b8 01 00 00 00       	mov    $0x1,%eax
   300bd:	82                   	nemu_trap 
   300be:	83 ec 0c             	sub    $0xc,%esp
   300c1:	6a 0c                	push   $0xc
   300c3:	6a 0a                	push   $0xa
   300c5:	6a 02                	push   $0x2
   300c7:	8d 83 11 e0 ff ff    	lea    -0x1fef(%ebx),%eax
   300cd:	50                   	push   %eax
   300ce:	c7 c0 a0 99 03 00    	mov    $0x399a0,%eax
   300d4:	50                   	push   %eax
   300d5:	e8 a6 00 00 00       	call   30180 <sprintf>
   300da:	83 c4 20             	add    $0x20,%esp
   300dd:	83 ec 08             	sub    $0x8,%esp
   300e0:	8d 83 2a e0 ff ff    	lea    -0x1fd6(%ebx),%eax
   300e6:	50                   	push   %eax
   300e7:	c7 c0 a0 99 03 00    	mov    $0x399a0,%eax
   300ed:	50                   	push   %eax
   300ee:	e8 fd 00 00 00       	call   301f0 <strcmp>
   300f3:	83 c4 10             	add    $0x10,%esp
   300f6:	85 c0                	test   %eax,%eax
   300f8:	74 06                	je     30100 <main+0xe1>
   300fa:	b8 01 00 00 00       	mov    $0x1,%eax
   300ff:	82                   	nemu_trap 
   30100:	b8 00 00 00 00       	mov    $0x0,%eax
   30105:	82                   	nemu_trap 
   30106:	b8 00 00 00 00       	mov    $0x0,%eax
   3010b:	8d 65 f8             	lea    -0x8(%ebp),%esp
   3010e:	59                   	pop    %ecx
   3010f:	5b                   	pop    %ebx
   30110:	5d                   	pop    %ebp
   30111:	8d 61 fc             	lea    -0x4(%ecx),%esp
   30114:	c3                   	ret    

00030115 <__x86.get_pc_thunk.ax>:
   30115:	8b 04 24             	mov    (%esp),%eax
   30118:	c3                   	ret    

00030119 <__x86.get_pc_thunk.bx>:
   30119:	8b 1c 24             	mov    (%esp),%ebx
   3011c:	c3                   	ret    
   3011d:	66 90                	xchg   %ax,%ax
   3011f:	90                   	nop

00030120 <_sprintf_r>:
   30120:	55                   	push   %ebp
   30121:	ba 08 02 00 00       	mov    $0x208,%edx
   30126:	89 e5                	mov    %esp,%ebp
   30128:	81 ec 88 00 00 00    	sub    $0x88,%esp
   3012e:	8b 45 0c             	mov    0xc(%ebp),%eax
   30131:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
   30136:	66 89 55 9c          	mov    %dx,-0x64(%ebp)
   3013a:	c7 45 98 ff ff ff 7f 	movl   $0x7fffffff,-0x68(%ebp)
   30141:	c7 45 a4 ff ff ff 7f 	movl   $0x7fffffff,-0x5c(%ebp)
   30148:	89 45 90             	mov    %eax,-0x70(%ebp)
   3014b:	89 45 a0             	mov    %eax,-0x60(%ebp)
   3014e:	8d 45 14             	lea    0x14(%ebp),%eax
   30151:	89 44 24 0c          	mov    %eax,0xc(%esp)
   30155:	8b 45 10             	mov    0x10(%ebp),%eax
   30158:	66 89 4d 9e          	mov    %cx,-0x62(%ebp)
   3015c:	89 44 24 08          	mov    %eax,0x8(%esp)
   30160:	8d 45 90             	lea    -0x70(%ebp),%eax
   30163:	89 44 24 04          	mov    %eax,0x4(%esp)
   30167:	8b 45 08             	mov    0x8(%ebp),%eax
   3016a:	89 04 24             	mov    %eax,(%esp)
   3016d:	e8 ee 00 00 00       	call   30260 <_svfprintf_r>
   30172:	8b 55 90             	mov    -0x70(%ebp),%edx
   30175:	c6 02 00             	movb   $0x0,(%edx)
   30178:	c9                   	leave  
   30179:	c3                   	ret    
   3017a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

00030180 <sprintf>:
   30180:	55                   	push   %ebp
   30181:	ba 08 02 00 00       	mov    $0x208,%edx
   30186:	89 e5                	mov    %esp,%ebp
   30188:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
   3018d:	53                   	push   %ebx
   3018e:	81 ec 84 00 00 00    	sub    $0x84,%esp
   30194:	8b 45 08             	mov    0x8(%ebp),%eax
   30197:	66 89 55 9c          	mov    %dx,-0x64(%ebp)
   3019b:	8d 5d 10             	lea    0x10(%ebp),%ebx
   3019e:	66 89 4d 9e          	mov    %cx,-0x62(%ebp)
   301a2:	c7 45 98 ff ff ff 7f 	movl   $0x7fffffff,-0x68(%ebp)
   301a9:	89 45 90             	mov    %eax,-0x70(%ebp)
   301ac:	89 45 a0             	mov    %eax,-0x60(%ebp)
   301af:	c7 45 a4 ff ff ff 7f 	movl   $0x7fffffff,-0x5c(%ebp)
   301b6:	e8 95 33 00 00       	call   33550 <__getreent>
   301bb:	8b 55 0c             	mov    0xc(%ebp),%edx
   301be:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
   301c2:	89 54 24 08          	mov    %edx,0x8(%esp)
   301c6:	8d 55 90             	lea    -0x70(%ebp),%edx
   301c9:	89 54 24 04          	mov    %edx,0x4(%esp)
   301cd:	89 04 24             	mov    %eax,(%esp)
   301d0:	e8 8b 00 00 00       	call   30260 <_svfprintf_r>
   301d5:	8b 55 90             	mov    -0x70(%ebp),%edx
   301d8:	c6 02 00             	movb   $0x0,(%edx)
   301db:	81 c4 84 00 00 00    	add    $0x84,%esp
   301e1:	5b                   	pop    %ebx
   301e2:	5d                   	pop    %ebp
   301e3:	c3                   	ret    
   301e4:	66 90                	xchg   %ax,%ax
   301e6:	66 90                	xchg   %ax,%ax
   301e8:	66 90                	xchg   %ax,%ax
   301ea:	66 90                	xchg   %ax,%ax
   301ec:	66 90                	xchg   %ax,%ax
   301ee:	66 90                	xchg   %ax,%ax

000301f0 <strcmp>:
   301f0:	55                   	push   %ebp
   301f1:	89 e5                	mov    %esp,%ebp
   301f3:	8b 45 08             	mov    0x8(%ebp),%eax
   301f6:	8b 55 0c             	mov    0xc(%ebp),%edx
   301f9:	53                   	push   %ebx
   301fa:	89 c1                	mov    %eax,%ecx
   301fc:	09 d1                	or     %edx,%ecx
   301fe:	83 e1 03             	and    $0x3,%ecx
   30201:	75 17                	jne    3021a <strcmp+0x2a>
   30203:	8b 08                	mov    (%eax),%ecx
   30205:	3b 0a                	cmp    (%edx),%ecx
   30207:	74 33                	je     3023c <strcmp+0x4c>
   30209:	eb 0f                	jmp    3021a <strcmp+0x2a>
   3020b:	90                   	nop
   3020c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   30210:	3a 0a                	cmp    (%edx),%cl
   30212:	75 0d                	jne    30221 <strcmp+0x31>
   30214:	83 c0 01             	add    $0x1,%eax
   30217:	83 c2 01             	add    $0x1,%edx
   3021a:	0f b6 08             	movzbl (%eax),%ecx
   3021d:	84 c9                	test   %cl,%cl
   3021f:	75 ef                	jne    30210 <strcmp+0x20>
   30221:	0f b6 00             	movzbl (%eax),%eax
   30224:	0f b6 12             	movzbl (%edx),%edx
   30227:	5b                   	pop    %ebx
   30228:	5d                   	pop    %ebp
   30229:	29 d0                	sub    %edx,%eax
   3022b:	c3                   	ret    
   3022c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   30230:	83 c0 04             	add    $0x4,%eax
   30233:	83 c2 04             	add    $0x4,%edx
   30236:	8b 08                	mov    (%eax),%ecx
   30238:	3b 0a                	cmp    (%edx),%ecx
   3023a:	75 de                	jne    3021a <strcmp+0x2a>
   3023c:	8d 99 ff fe fe fe    	lea    -0x1010101(%ecx),%ebx
   30242:	f7 d1                	not    %ecx
   30244:	21 cb                	and    %ecx,%ebx
   30246:	81 e3 80 80 80 80    	and    $0x80808080,%ebx
   3024c:	74 e2                	je     30230 <strcmp+0x40>
   3024e:	31 c0                	xor    %eax,%eax
   30250:	5b                   	pop    %ebx
   30251:	5d                   	pop    %ebp
   30252:	c3                   	ret    
   30253:	66 90                	xchg   %ax,%ax
   30255:	66 90                	xchg   %ax,%ax
   30257:	66 90                	xchg   %ax,%ax
   30259:	66 90                	xchg   %ax,%ax
   3025b:	66 90                	xchg   %ax,%ax
   3025d:	66 90                	xchg   %ax,%ax
   3025f:	90                   	nop

00030260 <_svfprintf_r>:
   30260:	55                   	push   %ebp
   30261:	89 e5                	mov    %esp,%ebp
   30263:	57                   	push   %edi
   30264:	56                   	push   %esi
   30265:	53                   	push   %ebx
   30266:	81 ec 1c 01 00 00    	sub    $0x11c,%esp
   3026c:	8b 45 08             	mov    0x8(%ebp),%eax
   3026f:	89 04 24             	mov    %eax,(%esp)
   30272:	e8 99 33 00 00       	call   33610 <_localeconv_r>
   30277:	8b 00                	mov    (%eax),%eax
   30279:	89 04 24             	mov    %eax,(%esp)
   3027c:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
   30282:	e8 b9 4a 00 00       	call   34d40 <strlen>
   30287:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
   3028d:	8b 45 0c             	mov    0xc(%ebp),%eax
   30290:	f6 40 0c 80          	testb  $0x80,0xc(%eax)
   30294:	74 0b                	je     302a1 <_svfprintf_r+0x41>
   30296:	8b 40 10             	mov    0x10(%eax),%eax
   30299:	85 c0                	test   %eax,%eax
   3029b:	0f 84 62 18 00 00    	je     31b03 <_svfprintf_r+0x18a3>
   302a1:	8d 45 a8             	lea    -0x58(%ebp),%eax
   302a4:	8d 55 a7             	lea    -0x59(%ebp),%edx
   302a7:	89 c7                	mov    %eax,%edi
   302a9:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
   302af:	d9 ee                	fldz   
   302b1:	29 d0                	sub    %edx,%eax
   302b3:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
   302ba:	00 00 00 
   302bd:	dd 9d 10 ff ff ff    	fstpl  -0xf0(%ebp)
   302c3:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
   302ca:	00 00 00 
   302cd:	c7 85 1c ff ff ff 00 	movl   $0x0,-0xe4(%ebp)
   302d4:	00 00 00 
   302d7:	c7 85 18 ff ff ff 00 	movl   $0x0,-0xe8(%ebp)
   302de:	00 00 00 
   302e1:	c7 85 04 ff ff ff 00 	movl   $0x0,-0xfc(%ebp)
   302e8:	00 00 00 
   302eb:	c7 85 34 ff ff ff 00 	movl   $0x0,-0xcc(%ebp)
   302f2:	00 00 00 
   302f5:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
   302fb:	8b 45 10             	mov    0x10(%ebp),%eax
   302fe:	8b 5d 10             	mov    0x10(%ebp),%ebx
   30301:	0f b6 00             	movzbl (%eax),%eax
   30304:	3c 25                	cmp    $0x25,%al
   30306:	74 4d                	je     30355 <_svfprintf_r+0xf5>
   30308:	84 c0                	test   %al,%al
   3030a:	75 08                	jne    30314 <_svfprintf_r+0xb4>
   3030c:	eb 47                	jmp    30355 <_svfprintf_r+0xf5>
   3030e:	66 90                	xchg   %ax,%ax
   30310:	84 c0                	test   %al,%al
   30312:	74 0a                	je     3031e <_svfprintf_r+0xbe>
   30314:	83 c3 01             	add    $0x1,%ebx
   30317:	0f b6 03             	movzbl (%ebx),%eax
   3031a:	3c 25                	cmp    $0x25,%al
   3031c:	75 f2                	jne    30310 <_svfprintf_r+0xb0>
   3031e:	89 de                	mov    %ebx,%esi
   30320:	2b 75 10             	sub    0x10(%ebp),%esi
   30323:	74 30                	je     30355 <_svfprintf_r+0xf5>
   30325:	8b 45 10             	mov    0x10(%ebp),%eax
   30328:	83 c7 08             	add    $0x8,%edi
   3032b:	89 77 fc             	mov    %esi,-0x4(%edi)
   3032e:	01 b5 7c ff ff ff    	add    %esi,-0x84(%ebp)
   30334:	89 47 f8             	mov    %eax,-0x8(%edi)
   30337:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3033d:	83 c0 01             	add    $0x1,%eax
   30340:	83 f8 07             	cmp    $0x7,%eax
   30343:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   30349:	0f 8f 91 00 00 00    	jg     303e0 <_svfprintf_r+0x180>
   3034f:	01 b5 34 ff ff ff    	add    %esi,-0xcc(%ebp)
   30355:	80 3b 00             	cmpb   $0x0,(%ebx)
   30358:	0f 84 aa 00 00 00    	je     30408 <_svfprintf_r+0x1a8>
   3035e:	8d 43 01             	lea    0x1(%ebx),%eax
   30361:	be 20 00 00 00       	mov    $0x20,%esi
   30366:	c6 85 59 ff ff ff 00 	movb   $0x0,-0xa7(%ebp)
   3036d:	31 db                	xor    %ebx,%ebx
   3036f:	c7 85 44 ff ff ff ff 	movl   $0xffffffff,-0xbc(%ebp)
   30376:	ff ff ff 
   30379:	c7 85 40 ff ff ff 00 	movl   $0x0,-0xc0(%ebp)
   30380:	00 00 00 
   30383:	c7 85 4c ff ff ff 00 	movl   $0x0,-0xb4(%ebp)
   3038a:	00 00 00 
   3038d:	8d 48 01             	lea    0x1(%eax),%ecx
   30390:	0f be 00             	movsbl (%eax),%eax
   30393:	8d 50 e0             	lea    -0x20(%eax),%edx
   30396:	83 fa 58             	cmp    $0x58,%edx
   30399:	0f 87 8f 07 00 00    	ja     30b2e <_svfprintf_r+0x8ce>
   3039f:	ff 24 95 74 70 03 00 	jmp    *0x37074(,%edx,4)
   303a6:	66 90                	xchg   %ax,%ax
   303a8:	83 8d 4c ff ff ff 10 	orl    $0x10,-0xb4(%ebp)
   303af:	89 c8                	mov    %ecx,%eax
   303b1:	eb da                	jmp    3038d <_svfprintf_r+0x12d>
   303b3:	8b 45 14             	mov    0x14(%ebp),%eax
   303b6:	8b 55 14             	mov    0x14(%ebp),%edx
   303b9:	8b 00                	mov    (%eax),%eax
   303bb:	83 c2 04             	add    $0x4,%edx
   303be:	89 55 14             	mov    %edx,0x14(%ebp)
   303c1:	85 c0                	test   %eax,%eax
   303c3:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
   303c9:	79 e4                	jns    303af <_svfprintf_r+0x14f>
   303cb:	f7 9d 40 ff ff ff    	negl   -0xc0(%ebp)
   303d1:	83 8d 4c ff ff ff 04 	orl    $0x4,-0xb4(%ebp)
   303d8:	89 c8                	mov    %ecx,%eax
   303da:	eb b1                	jmp    3038d <_svfprintf_r+0x12d>
   303dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   303e0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   303e6:	89 44 24 08          	mov    %eax,0x8(%esp)
   303ea:	8b 45 0c             	mov    0xc(%ebp),%eax
   303ed:	89 44 24 04          	mov    %eax,0x4(%esp)
   303f1:	8b 45 08             	mov    0x8(%ebp),%eax
   303f4:	89 04 24             	mov    %eax,(%esp)
   303f7:	e8 c4 49 00 00       	call   34dc0 <__ssprint_r>
   303fc:	85 c0                	test   %eax,%eax
   303fe:	75 30                	jne    30430 <_svfprintf_r+0x1d0>
   30400:	8d 7d a8             	lea    -0x58(%ebp),%edi
   30403:	e9 47 ff ff ff       	jmp    3034f <_svfprintf_r+0xef>
   30408:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
   3040e:	85 c0                	test   %eax,%eax
   30410:	74 1e                	je     30430 <_svfprintf_r+0x1d0>
   30412:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   30418:	89 44 24 08          	mov    %eax,0x8(%esp)
   3041c:	8b 45 0c             	mov    0xc(%ebp),%eax
   3041f:	89 44 24 04          	mov    %eax,0x4(%esp)
   30423:	8b 45 08             	mov    0x8(%ebp),%eax
   30426:	89 04 24             	mov    %eax,(%esp)
   30429:	e8 92 49 00 00       	call   34dc0 <__ssprint_r>
   3042e:	66 90                	xchg   %ax,%ax
   30430:	8b 55 0c             	mov    0xc(%ebp),%edx
   30433:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   30438:	f6 42 0c 40          	testb  $0x40,0xc(%edx)
   3043c:	0f 44 85 34 ff ff ff 	cmove  -0xcc(%ebp),%eax
   30443:	81 c4 1c 01 00 00    	add    $0x11c,%esp
   30449:	5b                   	pop    %ebx
   3044a:	5e                   	pop    %esi
   3044b:	5f                   	pop    %edi
   3044c:	5d                   	pop    %ebp
   3044d:	c3                   	ret    
   3044e:	bb 2b 00 00 00       	mov    $0x2b,%ebx
   30453:	89 c8                	mov    %ecx,%eax
   30455:	e9 33 ff ff ff       	jmp    3038d <_svfprintf_r+0x12d>
   3045a:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   30460:	8b 45 14             	mov    0x14(%ebp),%eax
   30463:	89 4d 10             	mov    %ecx,0x10(%ebp)
   30466:	c6 85 59 ff ff ff 00 	movb   $0x0,-0xa7(%ebp)
   3046d:	8d 70 04             	lea    0x4(%eax),%esi
   30470:	8b 00                	mov    (%eax),%eax
   30472:	85 c0                	test   %eax,%eax
   30474:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   3047a:	0f 84 7f 18 00 00    	je     31cff <_svfprintf_r+0x1a9f>
   30480:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   30486:	85 c0                	test   %eax,%eax
   30488:	0f 88 b6 17 00 00    	js     31c44 <_svfprintf_r+0x19e4>
   3048e:	89 44 24 08          	mov    %eax,0x8(%esp)
   30492:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   30498:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   3049f:	00 
   304a0:	89 04 24             	mov    %eax,(%esp)
   304a3:	e8 08 39 00 00       	call   33db0 <memchr>
   304a8:	85 c0                	test   %eax,%eax
   304aa:	0f 84 a0 19 00 00    	je     31e50 <_svfprintf_r+0x1bf0>
   304b0:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   304b6:	2b 85 28 ff ff ff    	sub    -0xd8(%ebp),%eax
   304bc:	39 d0                	cmp    %edx,%eax
   304be:	0f 4f c2             	cmovg  %edx,%eax
   304c1:	89 c2                	mov    %eax,%edx
   304c3:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   304ca:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   304d0:	31 c0                	xor    %eax,%eax
   304d2:	85 d2                	test   %edx,%edx
   304d4:	0f 49 c2             	cmovns %edx,%eax
   304d7:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   304dd:	89 75 14             	mov    %esi,0x14(%ebp)
   304e0:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   304e7:	00 00 00 
   304ea:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   304f1:	00 00 00 
   304f4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   304f8:	84 db                	test   %bl,%bl
   304fa:	74 07                	je     30503 <_svfprintf_r+0x2a3>
   304fc:	83 85 48 ff ff ff 01 	addl   $0x1,-0xb8(%ebp)
   30503:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
   30509:	8b b5 4c ff ff ff    	mov    -0xb4(%ebp),%esi
   3050f:	89 c8                	mov    %ecx,%eax
   30511:	89 f2                	mov    %esi,%edx
   30513:	83 c0 02             	add    $0x2,%eax
   30516:	83 e2 02             	and    $0x2,%edx
   30519:	89 95 30 ff ff ff    	mov    %edx,-0xd0(%ebp)
   3051f:	89 f2                	mov    %esi,%edx
   30521:	0f 44 c1             	cmove  %ecx,%eax
   30524:	81 e2 84 00 00 00    	and    $0x84,%edx
   3052a:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   30530:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
   30536:	0f 85 1c 06 00 00    	jne    30b58 <_svfprintf_r+0x8f8>
   3053c:	8b b5 40 ff ff ff    	mov    -0xc0(%ebp),%esi
   30542:	2b b5 48 ff ff ff    	sub    -0xb8(%ebp),%esi
   30548:	85 f6                	test   %esi,%esi
   3054a:	0f 8e 08 06 00 00    	jle    30b58 <_svfprintf_r+0x8f8>
   30550:	83 fe 10             	cmp    $0x10,%esi
   30553:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   30559:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3055f:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   30565:	7f 11                	jg     30578 <_svfprintf_r+0x318>
   30567:	eb 6b                	jmp    305d4 <_svfprintf_r+0x374>
   30569:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   30570:	83 ee 10             	sub    $0x10,%esi
   30573:	83 fe 10             	cmp    $0x10,%esi
   30576:	7e 5c                	jle    305d4 <_svfprintf_r+0x374>
   30578:	83 c0 01             	add    $0x1,%eax
   3057b:	83 c1 10             	add    $0x10,%ecx
   3057e:	c7 07 e8 71 03 00    	movl   $0x371e8,(%edi)
   30584:	83 c7 08             	add    $0x8,%edi
   30587:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   3058e:	83 f8 07             	cmp    $0x7,%eax
   30591:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   30597:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3059d:	7e d1                	jle    30570 <_svfprintf_r+0x310>
   3059f:	8b 45 0c             	mov    0xc(%ebp),%eax
   305a2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   305a6:	89 44 24 04          	mov    %eax,0x4(%esp)
   305aa:	8b 45 08             	mov    0x8(%ebp),%eax
   305ad:	89 04 24             	mov    %eax,(%esp)
   305b0:	e8 0b 48 00 00       	call   34dc0 <__ssprint_r>
   305b5:	85 c0                	test   %eax,%eax
   305b7:	0f 85 73 fe ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   305bd:	83 ee 10             	sub    $0x10,%esi
   305c0:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   305c6:	83 fe 10             	cmp    $0x10,%esi
   305c9:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   305cf:	8d 7d a8             	lea    -0x58(%ebp),%edi
   305d2:	7f a4                	jg     30578 <_svfprintf_r+0x318>
   305d4:	83 c0 01             	add    $0x1,%eax
   305d7:	01 f1                	add    %esi,%ecx
   305d9:	83 f8 07             	cmp    $0x7,%eax
   305dc:	c7 07 e8 71 03 00    	movl   $0x371e8,(%edi)
   305e2:	89 77 04             	mov    %esi,0x4(%edi)
   305e5:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   305eb:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   305f1:	0f 8f 16 0e 00 00    	jg     3140d <_svfprintf_r+0x11ad>
   305f7:	83 c7 08             	add    $0x8,%edi
   305fa:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   30601:	e9 58 05 00 00       	jmp    30b5e <_svfprintf_r+0x8fe>
   30606:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   3060d:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   30613:	8b 45 14             	mov    0x14(%ebp),%eax
   30616:	89 4d 10             	mov    %ecx,0x10(%ebp)
   30619:	0f 85 fd 04 00 00    	jne    30b1c <_svfprintf_r+0x8bc>
   3061f:	f6 85 4c ff ff ff 40 	testb  $0x40,-0xb4(%ebp)
   30626:	0f 84 f0 04 00 00    	je     30b1c <_svfprintf_r+0x8bc>
   3062c:	0f b7 08             	movzwl (%eax),%ecx
   3062f:	83 c0 04             	add    $0x4,%eax
   30632:	89 45 14             	mov    %eax,0x14(%ebp)
   30635:	b8 01 00 00 00       	mov    $0x1,%eax
   3063a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   30640:	c6 85 59 ff ff ff 00 	movb   $0x0,-0xa7(%ebp)
   30647:	31 db                	xor    %ebx,%ebx
   30649:	8b b5 4c ff ff ff    	mov    -0xb4(%ebp),%esi
   3064f:	89 f2                	mov    %esi,%edx
   30651:	80 e2 7f             	and    $0x7f,%dl
   30654:	83 bd 44 ff ff ff 00 	cmpl   $0x0,-0xbc(%ebp)
   3065b:	0f 48 d6             	cmovs  %esi,%edx
   3065e:	89 95 4c ff ff ff    	mov    %edx,-0xb4(%ebp)
   30664:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   3066a:	85 d2                	test   %edx,%edx
   3066c:	75 08                	jne    30676 <_svfprintf_r+0x416>
   3066e:	85 c9                	test   %ecx,%ecx
   30670:	0f 84 ea 08 00 00    	je     30f60 <_svfprintf_r+0xd00>
   30676:	3c 01                	cmp    $0x1,%al
   30678:	0f 84 6a 0d 00 00    	je     313e8 <_svfprintf_r+0x1188>
   3067e:	3c 02                	cmp    $0x2,%al
   30680:	8d 45 a8             	lea    -0x58(%ebp),%eax
   30683:	0f 85 bf 0b 00 00    	jne    31248 <_svfprintf_r+0xfe8>
   30689:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
   3068f:	90                   	nop
   30690:	89 ca                	mov    %ecx,%edx
   30692:	83 e8 01             	sub    $0x1,%eax
   30695:	83 e2 0f             	and    $0xf,%edx
   30698:	0f b6 14 16          	movzbl (%esi,%edx,1),%edx
   3069c:	c1 e9 04             	shr    $0x4,%ecx
   3069f:	85 c9                	test   %ecx,%ecx
   306a1:	88 10                	mov    %dl,(%eax)
   306a3:	75 eb                	jne    30690 <_svfprintf_r+0x430>
   306a5:	8d 55 a8             	lea    -0x58(%ebp),%edx
   306a8:	29 c2                	sub    %eax,%edx
   306aa:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   306b0:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   306b6:	66 90                	xchg   %ax,%ax
   306b8:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   306be:	8b 95 38 ff ff ff    	mov    -0xc8(%ebp),%edx
   306c4:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   306cb:	00 00 00 
   306ce:	39 c2                	cmp    %eax,%edx
   306d0:	0f 4d c2             	cmovge %edx,%eax
   306d3:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   306d9:	e9 1a fe ff ff       	jmp    304f8 <_svfprintf_r+0x298>
   306de:	84 db                	test   %bl,%bl
   306e0:	89 c8                	mov    %ecx,%eax
   306e2:	0f 44 de             	cmove  %esi,%ebx
   306e5:	e9 a3 fc ff ff       	jmp    3038d <_svfprintf_r+0x12d>
   306ea:	83 8d 4c ff ff ff 01 	orl    $0x1,-0xb4(%ebp)
   306f1:	89 c8                	mov    %ecx,%eax
   306f3:	e9 95 fc ff ff       	jmp    3038d <_svfprintf_r+0x12d>
   306f8:	81 8d 4c ff ff ff 80 	orl    $0x80,-0xb4(%ebp)
   306ff:	00 00 00 
   30702:	89 c8                	mov    %ecx,%eax
   30704:	e9 84 fc ff ff       	jmp    3038d <_svfprintf_r+0x12d>
   30709:	89 bd 48 ff ff ff    	mov    %edi,-0xb8(%ebp)
   3070f:	8d 50 d0             	lea    -0x30(%eax),%edx
   30712:	31 ff                	xor    %edi,%edi
   30714:	c7 85 40 ff ff ff 00 	movl   $0x0,-0xc0(%ebp)
   3071b:	00 00 00 
   3071e:	66 90                	xchg   %ax,%ax
   30720:	8d 04 bf             	lea    (%edi,%edi,4),%eax
   30723:	83 c1 01             	add    $0x1,%ecx
   30726:	8d 3c 42             	lea    (%edx,%eax,2),%edi
   30729:	0f be 41 ff          	movsbl -0x1(%ecx),%eax
   3072d:	8d 50 d0             	lea    -0x30(%eax),%edx
   30730:	83 fa 09             	cmp    $0x9,%edx
   30733:	76 eb                	jbe    30720 <_svfprintf_r+0x4c0>
   30735:	89 bd 40 ff ff ff    	mov    %edi,-0xc0(%ebp)
   3073b:	8b bd 48 ff ff ff    	mov    -0xb8(%ebp),%edi
   30741:	e9 4d fc ff ff       	jmp    30393 <_svfprintf_r+0x133>
   30746:	83 8d 4c ff ff ff 10 	orl    $0x10,-0xb4(%ebp)
   3074d:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   30754:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   3075a:	8b 45 14             	mov    0x14(%ebp),%eax
   3075d:	89 4d 10             	mov    %ecx,0x10(%ebp)
   30760:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   30766:	0f 85 61 02 00 00    	jne    309cd <_svfprintf_r+0x76d>
   3076c:	f6 85 4c ff ff ff 40 	testb  $0x40,-0xb4(%ebp)
   30773:	0f 84 54 02 00 00    	je     309cd <_svfprintf_r+0x76d>
   30779:	0f bf 08             	movswl (%eax),%ecx
   3077c:	83 c0 04             	add    $0x4,%eax
   3077f:	89 45 14             	mov    %eax,0x14(%ebp)
   30782:	85 c9                	test   %ecx,%ecx
   30784:	0f 88 53 02 00 00    	js     309dd <_svfprintf_r+0x77d>
   3078a:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   30791:	b8 01 00 00 00       	mov    $0x1,%eax
   30796:	e9 ae fe ff ff       	jmp    30649 <_svfprintf_r+0x3e9>
   3079b:	f6 85 4c ff ff ff 08 	testb  $0x8,-0xb4(%ebp)
   307a2:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   307a8:	8b 45 14             	mov    0x14(%ebp),%eax
   307ab:	89 4d 10             	mov    %ecx,0x10(%ebp)
   307ae:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   307b4:	0f 84 15 10 00 00    	je     317cf <_svfprintf_r+0x156f>
   307ba:	db 28                	fldt   (%eax)
   307bc:	83 c0 0c             	add    $0xc,%eax
   307bf:	89 45 14             	mov    %eax,0x14(%ebp)
   307c2:	dd 9d 10 ff ff ff    	fstpl  -0xf0(%ebp)
   307c8:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   307ce:	dd 1c 24             	fstpl  (%esp)
   307d1:	e8 fa 44 00 00       	call   34cd0 <__fpclassifyd>
   307d6:	83 f8 01             	cmp    $0x1,%eax
   307d9:	0f 85 82 0f 00 00    	jne    31761 <_svfprintf_r+0x1501>
   307df:	d9 ee                	fldz   
   307e1:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   307e7:	d9 c9                	fxch   %st(1)
   307e9:	df e9                	fucomip %st(1),%st
   307eb:	dd d8                	fstp   %st(0)
   307ed:	0f 87 59 15 00 00    	ja     31d4c <_svfprintf_r+0x1aec>
   307f3:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   307fa:	83 bd 24 ff ff ff 47 	cmpl   $0x47,-0xdc(%ebp)
   30801:	ba 37 70 03 00       	mov    $0x37037,%edx
   30806:	b8 3b 70 03 00       	mov    $0x3703b,%eax
   3080b:	c7 85 48 ff ff ff 03 	movl   $0x3,-0xb8(%ebp)
   30812:	00 00 00 
   30815:	0f 4e c2             	cmovle %edx,%eax
   30818:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   3081e:	81 a5 4c ff ff ff 7f 	andl   $0xffffff7f,-0xb4(%ebp)
   30825:	ff ff ff 
   30828:	c7 85 38 ff ff ff 03 	movl   $0x3,-0xc8(%ebp)
   3082f:	00 00 00 
   30832:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   30839:	00 00 00 
   3083c:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   30843:	00 00 00 
   30846:	e9 ad fc ff ff       	jmp    304f8 <_svfprintf_r+0x298>
   3084b:	8d 41 01             	lea    0x1(%ecx),%eax
   3084e:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   30854:	0f be 01             	movsbl (%ecx),%eax
   30857:	83 f8 2a             	cmp    $0x2a,%eax
   3085a:	0f 84 84 18 00 00    	je     320e4 <_svfprintf_r+0x1e84>
   30860:	8d 50 d0             	lea    -0x30(%eax),%edx
   30863:	31 c9                	xor    %ecx,%ecx
   30865:	83 fa 09             	cmp    $0x9,%edx
   30868:	0f 87 a8 16 00 00    	ja     31f16 <_svfprintf_r+0x1cb6>
   3086e:	89 bd 44 ff ff ff    	mov    %edi,-0xbc(%ebp)
   30874:	8b bd 48 ff ff ff    	mov    -0xb8(%ebp),%edi
   3087a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   30880:	8d 04 89             	lea    (%ecx,%ecx,4),%eax
   30883:	83 c7 01             	add    $0x1,%edi
   30886:	8d 0c 42             	lea    (%edx,%eax,2),%ecx
   30889:	0f be 47 ff          	movsbl -0x1(%edi),%eax
   3088d:	8d 50 d0             	lea    -0x30(%eax),%edx
   30890:	83 fa 09             	cmp    $0x9,%edx
   30893:	76 eb                	jbe    30880 <_svfprintf_r+0x620>
   30895:	85 c9                	test   %ecx,%ecx
   30897:	89 ca                	mov    %ecx,%edx
   30899:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
   3089e:	0f 48 d1             	cmovs  %ecx,%edx
   308a1:	89 bd 48 ff ff ff    	mov    %edi,-0xb8(%ebp)
   308a7:	8b bd 44 ff ff ff    	mov    -0xbc(%ebp),%edi
   308ad:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
   308b3:	89 95 44 ff ff ff    	mov    %edx,-0xbc(%ebp)
   308b9:	e9 d5 fa ff ff       	jmp    30393 <_svfprintf_r+0x133>
   308be:	8b 45 14             	mov    0x14(%ebp),%eax
   308c1:	89 4d 10             	mov    %ecx,0x10(%ebp)
   308c4:	83 8d 4c ff ff ff 02 	orl    $0x2,-0xb4(%ebp)
   308cb:	8b 08                	mov    (%eax),%ecx
   308cd:	83 c0 04             	add    $0x4,%eax
   308d0:	89 45 14             	mov    %eax,0x14(%ebp)
   308d3:	b8 02 00 00 00       	mov    $0x2,%eax
   308d8:	c6 85 5a ff ff ff 30 	movb   $0x30,-0xa6(%ebp)
   308df:	c6 85 5b ff ff ff 78 	movb   $0x78,-0xa5(%ebp)
   308e6:	c7 85 18 ff ff ff 58 	movl   $0x37058,-0xe8(%ebp)
   308ed:	70 03 00 
   308f0:	c7 85 24 ff ff ff 78 	movl   $0x78,-0xdc(%ebp)
   308f7:	00 00 00 
   308fa:	e9 41 fd ff ff       	jmp    30640 <_svfprintf_r+0x3e0>
   308ff:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   30906:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   3090c:	8b 45 14             	mov    0x14(%ebp),%eax
   3090f:	89 4d 10             	mov    %ecx,0x10(%ebp)
   30912:	0f 85 87 00 00 00    	jne    3099f <_svfprintf_r+0x73f>
   30918:	f6 85 4c ff ff ff 40 	testb  $0x40,-0xb4(%ebp)
   3091f:	74 7e                	je     3099f <_svfprintf_r+0x73f>
   30921:	0f b7 08             	movzwl (%eax),%ecx
   30924:	83 c0 04             	add    $0x4,%eax
   30927:	89 45 14             	mov    %eax,0x14(%ebp)
   3092a:	31 c0                	xor    %eax,%eax
   3092c:	e9 0f fd ff ff       	jmp    30640 <_svfprintf_r+0x3e0>
   30931:	83 8d 4c ff ff ff 08 	orl    $0x8,-0xb4(%ebp)
   30938:	89 c8                	mov    %ecx,%eax
   3093a:	e9 4e fa ff ff       	jmp    3038d <_svfprintf_r+0x12d>
   3093f:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   30946:	89 4d 10             	mov    %ecx,0x10(%ebp)
   30949:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   3094f:	0f 85 97 0b 00 00    	jne    314ec <_svfprintf_r+0x128c>
   30955:	f6 85 4c ff ff ff 40 	testb  $0x40,-0xb4(%ebp)
   3095c:	0f 84 8a 0b 00 00    	je     314ec <_svfprintf_r+0x128c>
   30962:	8b 45 14             	mov    0x14(%ebp),%eax
   30965:	0f b7 95 34 ff ff ff 	movzwl -0xcc(%ebp),%edx
   3096c:	8b 00                	mov    (%eax),%eax
   3096e:	66 89 10             	mov    %dx,(%eax)
   30971:	8b 45 14             	mov    0x14(%ebp),%eax
   30974:	83 c0 04             	add    $0x4,%eax
   30977:	89 45 14             	mov    %eax,0x14(%ebp)
   3097a:	e9 7c f9 ff ff       	jmp    302fb <_svfprintf_r+0x9b>
   3097f:	83 8d 4c ff ff ff 10 	orl    $0x10,-0xb4(%ebp)
   30986:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   3098d:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   30993:	8b 45 14             	mov    0x14(%ebp),%eax
   30996:	89 4d 10             	mov    %ecx,0x10(%ebp)
   30999:	0f 84 79 ff ff ff    	je     30918 <_svfprintf_r+0x6b8>
   3099f:	8b 08                	mov    (%eax),%ecx
   309a1:	83 c0 04             	add    $0x4,%eax
   309a4:	89 45 14             	mov    %eax,0x14(%ebp)
   309a7:	31 c0                	xor    %eax,%eax
   309a9:	e9 92 fc ff ff       	jmp    30640 <_svfprintf_r+0x3e0>
   309ae:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   309b5:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   309bb:	8b 45 14             	mov    0x14(%ebp),%eax
   309be:	89 4d 10             	mov    %ecx,0x10(%ebp)
   309c1:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   309c7:	0f 84 9f fd ff ff    	je     3076c <_svfprintf_r+0x50c>
   309cd:	8b 08                	mov    (%eax),%ecx
   309cf:	83 c0 04             	add    $0x4,%eax
   309d2:	89 45 14             	mov    %eax,0x14(%ebp)
   309d5:	85 c9                	test   %ecx,%ecx
   309d7:	0f 89 ad fd ff ff    	jns    3078a <_svfprintf_r+0x52a>
   309dd:	f7 d9                	neg    %ecx
   309df:	bb 2d 00 00 00       	mov    $0x2d,%ebx
   309e4:	c6 85 59 ff ff ff 2d 	movb   $0x2d,-0xa7(%ebp)
   309eb:	b8 01 00 00 00       	mov    $0x1,%eax
   309f0:	e9 54 fc ff ff       	jmp    30649 <_svfprintf_r+0x3e9>
   309f5:	83 8d 4c ff ff ff 40 	orl    $0x40,-0xb4(%ebp)
   309fc:	89 c8                	mov    %ecx,%eax
   309fe:	e9 8a f9 ff ff       	jmp    3038d <_svfprintf_r+0x12d>
   30a03:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   30a0a:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   30a10:	8b 45 14             	mov    0x14(%ebp),%eax
   30a13:	89 4d 10             	mov    %ecx,0x10(%ebp)
   30a16:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   30a1c:	c7 85 18 ff ff ff 58 	movl   $0x37058,-0xe8(%ebp)
   30a23:	70 03 00 
   30a26:	75 71                	jne    30a99 <_svfprintf_r+0x839>
   30a28:	f6 85 4c ff ff ff 40 	testb  $0x40,-0xb4(%ebp)
   30a2f:	74 68                	je     30a99 <_svfprintf_r+0x839>
   30a31:	0f b7 08             	movzwl (%eax),%ecx
   30a34:	83 c0 04             	add    $0x4,%eax
   30a37:	89 45 14             	mov    %eax,0x14(%ebp)
   30a3a:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   30a41:	b8 02 00 00 00       	mov    $0x2,%eax
   30a46:	0f 84 f4 fb ff ff    	je     30640 <_svfprintf_r+0x3e0>
   30a4c:	85 c9                	test   %ecx,%ecx
   30a4e:	0f 84 ec fb ff ff    	je     30640 <_svfprintf_r+0x3e0>
   30a54:	0f b6 95 24 ff ff ff 	movzbl -0xdc(%ebp),%edx
   30a5b:	c6 85 5a ff ff ff 30 	movb   $0x30,-0xa6(%ebp)
   30a62:	83 8d 4c ff ff ff 02 	orl    $0x2,-0xb4(%ebp)
   30a69:	88 95 5b ff ff ff    	mov    %dl,-0xa5(%ebp)
   30a6f:	e9 cc fb ff ff       	jmp    30640 <_svfprintf_r+0x3e0>
   30a74:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   30a7b:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   30a81:	8b 45 14             	mov    0x14(%ebp),%eax
   30a84:	89 4d 10             	mov    %ecx,0x10(%ebp)
   30a87:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   30a8d:	c7 85 18 ff ff ff 47 	movl   $0x37047,-0xe8(%ebp)
   30a94:	70 03 00 
   30a97:	74 8f                	je     30a28 <_svfprintf_r+0x7c8>
   30a99:	8b 08                	mov    (%eax),%ecx
   30a9b:	83 c0 04             	add    $0x4,%eax
   30a9e:	89 45 14             	mov    %eax,0x14(%ebp)
   30aa1:	eb 97                	jmp    30a3a <_svfprintf_r+0x7da>
   30aa3:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   30aa9:	8b 45 14             	mov    0x14(%ebp),%eax
   30aac:	89 4d 10             	mov    %ecx,0x10(%ebp)
   30aaf:	c6 85 59 ff ff ff 00 	movb   $0x0,-0xa7(%ebp)
   30ab6:	8b 00                	mov    (%eax),%eax
   30ab8:	88 45 80             	mov    %al,-0x80(%ebp)
   30abb:	8b 45 14             	mov    0x14(%ebp),%eax
   30abe:	83 c0 04             	add    $0x4,%eax
   30ac1:	89 45 14             	mov    %eax,0x14(%ebp)
   30ac4:	8d 45 80             	lea    -0x80(%ebp),%eax
   30ac7:	31 db                	xor    %ebx,%ebx
   30ac9:	c7 85 48 ff ff ff 01 	movl   $0x1,-0xb8(%ebp)
   30ad0:	00 00 00 
   30ad3:	c7 85 38 ff ff ff 01 	movl   $0x1,-0xc8(%ebp)
   30ada:	00 00 00 
   30add:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   30ae4:	00 00 00 
   30ae7:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   30aee:	00 00 00 
   30af1:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   30af7:	e9 07 fa ff ff       	jmp    30503 <_svfprintf_r+0x2a3>
   30afc:	83 8d 4c ff ff ff 10 	orl    $0x10,-0xb4(%ebp)
   30b03:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   30b0a:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   30b10:	8b 45 14             	mov    0x14(%ebp),%eax
   30b13:	89 4d 10             	mov    %ecx,0x10(%ebp)
   30b16:	0f 84 03 fb ff ff    	je     3061f <_svfprintf_r+0x3bf>
   30b1c:	8b 08                	mov    (%eax),%ecx
   30b1e:	83 c0 04             	add    $0x4,%eax
   30b21:	89 45 14             	mov    %eax,0x14(%ebp)
   30b24:	b8 01 00 00 00       	mov    $0x1,%eax
   30b29:	e9 12 fb ff ff       	jmp    30640 <_svfprintf_r+0x3e0>
   30b2e:	85 c0                	test   %eax,%eax
   30b30:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   30b36:	89 4d 10             	mov    %ecx,0x10(%ebp)
   30b39:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   30b3f:	0f 84 c3 f8 ff ff    	je     30408 <_svfprintf_r+0x1a8>
   30b45:	88 45 80             	mov    %al,-0x80(%ebp)
   30b48:	c6 85 59 ff ff ff 00 	movb   $0x0,-0xa7(%ebp)
   30b4f:	e9 70 ff ff ff       	jmp    30ac4 <_svfprintf_r+0x864>
   30b54:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   30b58:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   30b5e:	84 db                	test   %bl,%bl
   30b60:	74 33                	je     30b95 <_svfprintf_r+0x935>
   30b62:	8d 85 59 ff ff ff    	lea    -0xa7(%ebp),%eax
   30b68:	83 c1 01             	add    $0x1,%ecx
   30b6b:	89 07                	mov    %eax,(%edi)
   30b6d:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   30b73:	83 c7 08             	add    $0x8,%edi
   30b76:	c7 47 fc 01 00 00 00 	movl   $0x1,-0x4(%edi)
   30b7d:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   30b83:	83 c0 01             	add    $0x1,%eax
   30b86:	83 f8 07             	cmp    $0x7,%eax
   30b89:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   30b8f:	0f 8f 7b 06 00 00    	jg     31210 <_svfprintf_r+0xfb0>
   30b95:	8b 9d 30 ff ff ff    	mov    -0xd0(%ebp),%ebx
   30b9b:	85 db                	test   %ebx,%ebx
   30b9d:	74 33                	je     30bd2 <_svfprintf_r+0x972>
   30b9f:	8d 85 5a ff ff ff    	lea    -0xa6(%ebp),%eax
   30ba5:	83 c1 02             	add    $0x2,%ecx
   30ba8:	89 07                	mov    %eax,(%edi)
   30baa:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   30bb0:	83 c7 08             	add    $0x8,%edi
   30bb3:	c7 47 fc 02 00 00 00 	movl   $0x2,-0x4(%edi)
   30bba:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   30bc0:	83 c0 01             	add    $0x1,%eax
   30bc3:	83 f8 07             	cmp    $0x7,%eax
   30bc6:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   30bcc:	0f 8f 06 06 00 00    	jg     311d8 <_svfprintf_r+0xf78>
   30bd2:	81 bd 2c ff ff ff 80 	cmpl   $0x80,-0xd4(%ebp)
   30bd9:	00 00 00 
   30bdc:	0f 84 c6 03 00 00    	je     30fa8 <_svfprintf_r+0xd48>
   30be2:	8b b5 44 ff ff ff    	mov    -0xbc(%ebp),%esi
   30be8:	2b b5 38 ff ff ff    	sub    -0xc8(%ebp),%esi
   30bee:	85 f6                	test   %esi,%esi
   30bf0:	0f 8e d2 00 00 00    	jle    30cc8 <_svfprintf_r+0xa68>
   30bf6:	83 fe 10             	cmp    $0x10,%esi
   30bf9:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   30bff:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   30c05:	7f 11                	jg     30c18 <_svfprintf_r+0x9b8>
   30c07:	eb 6b                	jmp    30c74 <_svfprintf_r+0xa14>
   30c09:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   30c10:	83 ee 10             	sub    $0x10,%esi
   30c13:	83 fe 10             	cmp    $0x10,%esi
   30c16:	7e 5c                	jle    30c74 <_svfprintf_r+0xa14>
   30c18:	83 c0 01             	add    $0x1,%eax
   30c1b:	83 c1 10             	add    $0x10,%ecx
   30c1e:	c7 07 d8 71 03 00    	movl   $0x371d8,(%edi)
   30c24:	83 c7 08             	add    $0x8,%edi
   30c27:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   30c2e:	83 f8 07             	cmp    $0x7,%eax
   30c31:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   30c37:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   30c3d:	7e d1                	jle    30c10 <_svfprintf_r+0x9b0>
   30c3f:	8b 45 0c             	mov    0xc(%ebp),%eax
   30c42:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   30c46:	89 44 24 04          	mov    %eax,0x4(%esp)
   30c4a:	8b 45 08             	mov    0x8(%ebp),%eax
   30c4d:	89 04 24             	mov    %eax,(%esp)
   30c50:	e8 6b 41 00 00       	call   34dc0 <__ssprint_r>
   30c55:	85 c0                	test   %eax,%eax
   30c57:	0f 85 d3 f7 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   30c5d:	83 ee 10             	sub    $0x10,%esi
   30c60:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   30c66:	83 fe 10             	cmp    $0x10,%esi
   30c69:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   30c6f:	8d 7d a8             	lea    -0x58(%ebp),%edi
   30c72:	7f a4                	jg     30c18 <_svfprintf_r+0x9b8>
   30c74:	83 c0 01             	add    $0x1,%eax
   30c77:	01 f1                	add    %esi,%ecx
   30c79:	c7 07 d8 71 03 00    	movl   $0x371d8,(%edi)
   30c7f:	83 c7 08             	add    $0x8,%edi
   30c82:	89 77 fc             	mov    %esi,-0x4(%edi)
   30c85:	83 f8 07             	cmp    $0x7,%eax
   30c88:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   30c8e:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   30c94:	7e 32                	jle    30cc8 <_svfprintf_r+0xa68>
   30c96:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   30c9c:	89 44 24 08          	mov    %eax,0x8(%esp)
   30ca0:	8b 45 0c             	mov    0xc(%ebp),%eax
   30ca3:	89 44 24 04          	mov    %eax,0x4(%esp)
   30ca7:	8b 45 08             	mov    0x8(%ebp),%eax
   30caa:	89 04 24             	mov    %eax,(%esp)
   30cad:	e8 0e 41 00 00       	call   34dc0 <__ssprint_r>
   30cb2:	85 c0                	test   %eax,%eax
   30cb4:	0f 85 76 f7 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   30cba:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   30cc0:	8d 7d a8             	lea    -0x58(%ebp),%edi
   30cc3:	90                   	nop
   30cc4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   30cc8:	f7 85 4c ff ff ff 00 	testl  $0x100,-0xb4(%ebp)
   30ccf:	01 00 00 
   30cd2:	0f 85 50 01 00 00    	jne    30e28 <_svfprintf_r+0xbc8>
   30cd8:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   30cde:	89 07                	mov    %eax,(%edi)
   30ce0:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
   30ce6:	01 c1                	add    %eax,%ecx
   30ce8:	89 47 04             	mov    %eax,0x4(%edi)
   30ceb:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   30cf1:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   30cf7:	83 c0 01             	add    $0x1,%eax
   30cfa:	83 f8 07             	cmp    $0x7,%eax
   30cfd:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   30d03:	0f 8f 6a 04 00 00    	jg     31173 <_svfprintf_r+0xf13>
   30d09:	83 c7 08             	add    $0x8,%edi
   30d0c:	f6 85 4c ff ff ff 04 	testb  $0x4,-0xb4(%ebp)
   30d13:	0f 84 d7 00 00 00    	je     30df0 <_svfprintf_r+0xb90>
   30d19:	8b b5 40 ff ff ff    	mov    -0xc0(%ebp),%esi
   30d1f:	2b b5 48 ff ff ff    	sub    -0xb8(%ebp),%esi
   30d25:	85 f6                	test   %esi,%esi
   30d27:	0f 8e c3 00 00 00    	jle    30df0 <_svfprintf_r+0xb90>
   30d2d:	83 fe 10             	cmp    $0x10,%esi
   30d30:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   30d36:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   30d3c:	7f 0a                	jg     30d48 <_svfprintf_r+0xae8>
   30d3e:	eb 64                	jmp    30da4 <_svfprintf_r+0xb44>
   30d40:	83 ee 10             	sub    $0x10,%esi
   30d43:	83 fe 10             	cmp    $0x10,%esi
   30d46:	7e 5c                	jle    30da4 <_svfprintf_r+0xb44>
   30d48:	83 c0 01             	add    $0x1,%eax
   30d4b:	83 c1 10             	add    $0x10,%ecx
   30d4e:	c7 07 e8 71 03 00    	movl   $0x371e8,(%edi)
   30d54:	83 c7 08             	add    $0x8,%edi
   30d57:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   30d5e:	83 f8 07             	cmp    $0x7,%eax
   30d61:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   30d67:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   30d6d:	7e d1                	jle    30d40 <_svfprintf_r+0xae0>
   30d6f:	8b 45 0c             	mov    0xc(%ebp),%eax
   30d72:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   30d76:	89 44 24 04          	mov    %eax,0x4(%esp)
   30d7a:	8b 45 08             	mov    0x8(%ebp),%eax
   30d7d:	89 04 24             	mov    %eax,(%esp)
   30d80:	e8 3b 40 00 00       	call   34dc0 <__ssprint_r>
   30d85:	85 c0                	test   %eax,%eax
   30d87:	0f 85 a3 f6 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   30d8d:	83 ee 10             	sub    $0x10,%esi
   30d90:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   30d96:	83 fe 10             	cmp    $0x10,%esi
   30d99:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   30d9f:	8d 7d a8             	lea    -0x58(%ebp),%edi
   30da2:	7f a4                	jg     30d48 <_svfprintf_r+0xae8>
   30da4:	83 c0 01             	add    $0x1,%eax
   30da7:	01 f1                	add    %esi,%ecx
   30da9:	83 f8 07             	cmp    $0x7,%eax
   30dac:	c7 07 e8 71 03 00    	movl   $0x371e8,(%edi)
   30db2:	89 77 04             	mov    %esi,0x4(%edi)
   30db5:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   30dbb:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   30dc1:	7e 2d                	jle    30df0 <_svfprintf_r+0xb90>
   30dc3:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   30dc9:	89 44 24 08          	mov    %eax,0x8(%esp)
   30dcd:	8b 45 0c             	mov    0xc(%ebp),%eax
   30dd0:	89 44 24 04          	mov    %eax,0x4(%esp)
   30dd4:	8b 45 08             	mov    0x8(%ebp),%eax
   30dd7:	89 04 24             	mov    %eax,(%esp)
   30dda:	e8 e1 3f 00 00       	call   34dc0 <__ssprint_r>
   30ddf:	85 c0                	test   %eax,%eax
   30de1:	0f 85 49 f6 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   30de7:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   30ded:	8d 76 00             	lea    0x0(%esi),%esi
   30df0:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
   30df6:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
   30dfc:	39 c2                	cmp    %eax,%edx
   30dfe:	0f 4d c2             	cmovge %edx,%eax
   30e01:	01 85 34 ff ff ff    	add    %eax,-0xcc(%ebp)
   30e07:	85 c9                	test   %ecx,%ecx
   30e09:	0f 85 99 03 00 00    	jne    311a8 <_svfprintf_r+0xf48>
   30e0f:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
   30e16:	00 00 00 
   30e19:	8d 7d a8             	lea    -0x58(%ebp),%edi
   30e1c:	e9 da f4 ff ff       	jmp    302fb <_svfprintf_r+0x9b>
   30e21:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   30e28:	83 bd 24 ff ff ff 65 	cmpl   $0x65,-0xdc(%ebp)
   30e2f:	0f 8e 5b 02 00 00    	jle    31090 <_svfprintf_r+0xe30>
   30e35:	d9 ee                	fldz   
   30e37:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   30e3d:	df e9                	fucomip %st(1),%st
   30e3f:	dd d8                	fstp   %st(0)
   30e41:	0f 8a 59 04 00 00    	jp     312a0 <_svfprintf_r+0x1040>
   30e47:	0f 85 53 04 00 00    	jne    312a0 <_svfprintf_r+0x1040>
   30e4d:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   30e53:	83 c1 01             	add    $0x1,%ecx
   30e56:	83 c7 08             	add    $0x8,%edi
   30e59:	c7 47 f8 70 70 03 00 	movl   $0x37070,-0x8(%edi)
   30e60:	c7 47 fc 01 00 00 00 	movl   $0x1,-0x4(%edi)
   30e67:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   30e6d:	83 c0 01             	add    $0x1,%eax
   30e70:	83 f8 07             	cmp    $0x7,%eax
   30e73:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   30e79:	0f 8f 63 09 00 00    	jg     317e2 <_svfprintf_r+0x1582>
   30e7f:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
   30e85:	39 85 5c ff ff ff    	cmp    %eax,-0xa4(%ebp)
   30e8b:	7c 0d                	jl     30e9a <_svfprintf_r+0xc3a>
   30e8d:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   30e94:	0f 84 72 fe ff ff    	je     30d0c <_svfprintf_r+0xaac>
   30e9a:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
   30ea0:	83 c7 08             	add    $0x8,%edi
   30ea3:	89 47 f8             	mov    %eax,-0x8(%edi)
   30ea6:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
   30eac:	89 47 fc             	mov    %eax,-0x4(%edi)
   30eaf:	01 c1                	add    %eax,%ecx
   30eb1:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   30eb7:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   30ebd:	83 c0 01             	add    $0x1,%eax
   30ec0:	83 f8 07             	cmp    $0x7,%eax
   30ec3:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   30ec9:	0f 8f dc 0b 00 00    	jg     31aab <_svfprintf_r+0x184b>
   30ecf:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
   30ed5:	8d 70 ff             	lea    -0x1(%eax),%esi
   30ed8:	85 f6                	test   %esi,%esi
   30eda:	0f 8e 2c fe ff ff    	jle    30d0c <_svfprintf_r+0xaac>
   30ee0:	83 fe 10             	cmp    $0x10,%esi
   30ee3:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   30ee9:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   30eef:	7f 13                	jg     30f04 <_svfprintf_r+0xca4>
   30ef1:	e9 e6 05 00 00       	jmp    314dc <_svfprintf_r+0x127c>
   30ef6:	66 90                	xchg   %ax,%ax
   30ef8:	83 ee 10             	sub    $0x10,%esi
   30efb:	83 fe 10             	cmp    $0x10,%esi
   30efe:	0f 8e d8 05 00 00    	jle    314dc <_svfprintf_r+0x127c>
   30f04:	83 c0 01             	add    $0x1,%eax
   30f07:	83 c1 10             	add    $0x10,%ecx
   30f0a:	c7 07 d8 71 03 00    	movl   $0x371d8,(%edi)
   30f10:	83 c7 08             	add    $0x8,%edi
   30f13:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   30f1a:	83 f8 07             	cmp    $0x7,%eax
   30f1d:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   30f23:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   30f29:	7e cd                	jle    30ef8 <_svfprintf_r+0xc98>
   30f2b:	8b 45 0c             	mov    0xc(%ebp),%eax
   30f2e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   30f32:	89 44 24 04          	mov    %eax,0x4(%esp)
   30f36:	8b 45 08             	mov    0x8(%ebp),%eax
   30f39:	89 04 24             	mov    %eax,(%esp)
   30f3c:	e8 7f 3e 00 00       	call   34dc0 <__ssprint_r>
   30f41:	85 c0                	test   %eax,%eax
   30f43:	0f 85 e7 f4 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   30f49:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   30f4f:	8d 7d a8             	lea    -0x58(%ebp),%edi
   30f52:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   30f58:	eb 9e                	jmp    30ef8 <_svfprintf_r+0xc98>
   30f5a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   30f60:	84 c0                	test   %al,%al
   30f62:	75 2c                	jne    30f90 <_svfprintf_r+0xd30>
   30f64:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   30f6b:	74 23                	je     30f90 <_svfprintf_r+0xd30>
   30f6d:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
   30f73:	c6 45 a7 30          	movb   $0x30,-0x59(%ebp)
   30f77:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   30f7d:	8d 45 a7             	lea    -0x59(%ebp),%eax
   30f80:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   30f86:	e9 2d f7 ff ff       	jmp    306b8 <_svfprintf_r+0x458>
   30f8b:	90                   	nop
   30f8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   30f90:	8d 45 a8             	lea    -0x58(%ebp),%eax
   30f93:	c7 85 38 ff ff ff 00 	movl   $0x0,-0xc8(%ebp)
   30f9a:	00 00 00 
   30f9d:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   30fa3:	e9 10 f7 ff ff       	jmp    306b8 <_svfprintf_r+0x458>
   30fa8:	8b b5 40 ff ff ff    	mov    -0xc0(%ebp),%esi
   30fae:	2b b5 48 ff ff ff    	sub    -0xb8(%ebp),%esi
   30fb4:	85 f6                	test   %esi,%esi
   30fb6:	0f 8e 26 fc ff ff    	jle    30be2 <_svfprintf_r+0x982>
   30fbc:	83 fe 10             	cmp    $0x10,%esi
   30fbf:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   30fc5:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   30fcb:	7f 0b                	jg     30fd8 <_svfprintf_r+0xd78>
   30fcd:	eb 65                	jmp    31034 <_svfprintf_r+0xdd4>
   30fcf:	90                   	nop
   30fd0:	83 ee 10             	sub    $0x10,%esi
   30fd3:	83 fe 10             	cmp    $0x10,%esi
   30fd6:	7e 5c                	jle    31034 <_svfprintf_r+0xdd4>
   30fd8:	83 c0 01             	add    $0x1,%eax
   30fdb:	83 c1 10             	add    $0x10,%ecx
   30fde:	c7 07 d8 71 03 00    	movl   $0x371d8,(%edi)
   30fe4:	83 c7 08             	add    $0x8,%edi
   30fe7:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   30fee:	83 f8 07             	cmp    $0x7,%eax
   30ff1:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   30ff7:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   30ffd:	7e d1                	jle    30fd0 <_svfprintf_r+0xd70>
   30fff:	8b 45 0c             	mov    0xc(%ebp),%eax
   31002:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   31006:	89 44 24 04          	mov    %eax,0x4(%esp)
   3100a:	8b 45 08             	mov    0x8(%ebp),%eax
   3100d:	89 04 24             	mov    %eax,(%esp)
   31010:	e8 ab 3d 00 00       	call   34dc0 <__ssprint_r>
   31015:	85 c0                	test   %eax,%eax
   31017:	0f 85 13 f4 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   3101d:	83 ee 10             	sub    $0x10,%esi
   31020:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   31026:	83 fe 10             	cmp    $0x10,%esi
   31029:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3102f:	8d 7d a8             	lea    -0x58(%ebp),%edi
   31032:	7f a4                	jg     30fd8 <_svfprintf_r+0xd78>
   31034:	83 c0 01             	add    $0x1,%eax
   31037:	01 f1                	add    %esi,%ecx
   31039:	c7 07 d8 71 03 00    	movl   $0x371d8,(%edi)
   3103f:	83 c7 08             	add    $0x8,%edi
   31042:	89 77 fc             	mov    %esi,-0x4(%edi)
   31045:	83 f8 07             	cmp    $0x7,%eax
   31048:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   3104e:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   31054:	0f 8e 88 fb ff ff    	jle    30be2 <_svfprintf_r+0x982>
   3105a:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   31060:	89 44 24 08          	mov    %eax,0x8(%esp)
   31064:	8b 45 0c             	mov    0xc(%ebp),%eax
   31067:	89 44 24 04          	mov    %eax,0x4(%esp)
   3106b:	8b 45 08             	mov    0x8(%ebp),%eax
   3106e:	89 04 24             	mov    %eax,(%esp)
   31071:	e8 4a 3d 00 00       	call   34dc0 <__ssprint_r>
   31076:	85 c0                	test   %eax,%eax
   31078:	0f 85 b2 f3 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   3107e:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   31084:	8d 7d a8             	lea    -0x58(%ebp),%edi
   31087:	e9 56 fb ff ff       	jmp    30be2 <_svfprintf_r+0x982>
   3108c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   31090:	83 bd 1c ff ff ff 01 	cmpl   $0x1,-0xe4(%ebp)
   31097:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   3109d:	0f 8e df 05 00 00    	jle    31682 <_svfprintf_r+0x1422>
   310a3:	89 07                	mov    %eax,(%edi)
   310a5:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   310ab:	8d 51 01             	lea    0x1(%ecx),%edx
   310ae:	c7 47 04 01 00 00 00 	movl   $0x1,0x4(%edi)
   310b5:	83 c7 08             	add    $0x8,%edi
   310b8:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   310be:	83 c0 01             	add    $0x1,%eax
   310c1:	83 f8 07             	cmp    $0x7,%eax
   310c4:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   310ca:	0f 8f 59 06 00 00    	jg     31729 <_svfprintf_r+0x14c9>
   310d0:	8b 9d 0c ff ff ff    	mov    -0xf4(%ebp),%ebx
   310d6:	83 c0 01             	add    $0x1,%eax
   310d9:	83 c7 08             	add    $0x8,%edi
   310dc:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   310e2:	89 5f f8             	mov    %ebx,-0x8(%edi)
   310e5:	8b 9d 08 ff ff ff    	mov    -0xf8(%ebp),%ebx
   310eb:	89 5f fc             	mov    %ebx,-0x4(%edi)
   310ee:	01 da                	add    %ebx,%edx
   310f0:	83 f8 07             	cmp    $0x7,%eax
   310f3:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   310f9:	0f 8f f2 05 00 00    	jg     316f1 <_svfprintf_r+0x1491>
   310ff:	d9 ee                	fldz   
   31101:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   31107:	df e9                	fucomip %st(1),%st
   31109:	dd d8                	fstp   %st(0)
   3110b:	7a 06                	jp     31113 <_svfprintf_r+0xeb3>
   3110d:	0f 84 33 03 00 00    	je     31446 <_svfprintf_r+0x11e6>
   31113:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
   31119:	8b 9d 1c ff ff ff    	mov    -0xe4(%ebp),%ebx
   3111f:	83 c1 01             	add    $0x1,%ecx
   31122:	89 0f                	mov    %ecx,(%edi)
   31124:	8d 4b ff             	lea    -0x1(%ebx),%ecx
   31127:	89 4f 04             	mov    %ecx,0x4(%edi)
   3112a:	01 ca                	add    %ecx,%edx
   3112c:	83 c0 01             	add    $0x1,%eax
   3112f:	83 f8 07             	cmp    $0x7,%eax
   31132:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   31138:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3113e:	0f 8f 75 05 00 00    	jg     316b9 <_svfprintf_r+0x1459>
   31144:	83 c7 08             	add    $0x8,%edi
   31147:	8b 9d 04 ff ff ff    	mov    -0xfc(%ebp),%ebx
   3114d:	8d 8d 65 ff ff ff    	lea    -0x9b(%ebp),%ecx
   31153:	89 0f                	mov    %ecx,(%edi)
   31155:	89 5f 04             	mov    %ebx,0x4(%edi)
   31158:	8d 0c 1a             	lea    (%edx,%ebx,1),%ecx
   3115b:	83 c0 01             	add    $0x1,%eax
   3115e:	83 f8 07             	cmp    $0x7,%eax
   31161:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   31167:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3116d:	0f 8e 96 fb ff ff    	jle    30d09 <_svfprintf_r+0xaa9>
   31173:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   31179:	89 44 24 08          	mov    %eax,0x8(%esp)
   3117d:	8b 45 0c             	mov    0xc(%ebp),%eax
   31180:	89 44 24 04          	mov    %eax,0x4(%esp)
   31184:	8b 45 08             	mov    0x8(%ebp),%eax
   31187:	89 04 24             	mov    %eax,(%esp)
   3118a:	e8 31 3c 00 00       	call   34dc0 <__ssprint_r>
   3118f:	85 c0                	test   %eax,%eax
   31191:	0f 85 99 f2 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   31197:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   3119d:	8d 7d a8             	lea    -0x58(%ebp),%edi
   311a0:	e9 67 fb ff ff       	jmp    30d0c <_svfprintf_r+0xaac>
   311a5:	8d 76 00             	lea    0x0(%esi),%esi
   311a8:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   311ae:	89 44 24 08          	mov    %eax,0x8(%esp)
   311b2:	8b 45 0c             	mov    0xc(%ebp),%eax
   311b5:	89 44 24 04          	mov    %eax,0x4(%esp)
   311b9:	8b 45 08             	mov    0x8(%ebp),%eax
   311bc:	89 04 24             	mov    %eax,(%esp)
   311bf:	e8 fc 3b 00 00       	call   34dc0 <__ssprint_r>
   311c4:	85 c0                	test   %eax,%eax
   311c6:	0f 84 43 fc ff ff    	je     30e0f <_svfprintf_r+0xbaf>
   311cc:	e9 5f f2 ff ff       	jmp    30430 <_svfprintf_r+0x1d0>
   311d1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   311d8:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   311de:	89 44 24 08          	mov    %eax,0x8(%esp)
   311e2:	8b 45 0c             	mov    0xc(%ebp),%eax
   311e5:	89 44 24 04          	mov    %eax,0x4(%esp)
   311e9:	8b 45 08             	mov    0x8(%ebp),%eax
   311ec:	89 04 24             	mov    %eax,(%esp)
   311ef:	e8 cc 3b 00 00       	call   34dc0 <__ssprint_r>
   311f4:	85 c0                	test   %eax,%eax
   311f6:	0f 85 34 f2 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   311fc:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   31202:	8d 7d a8             	lea    -0x58(%ebp),%edi
   31205:	e9 c8 f9 ff ff       	jmp    30bd2 <_svfprintf_r+0x972>
   3120a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   31210:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   31216:	89 44 24 08          	mov    %eax,0x8(%esp)
   3121a:	8b 45 0c             	mov    0xc(%ebp),%eax
   3121d:	89 44 24 04          	mov    %eax,0x4(%esp)
   31221:	8b 45 08             	mov    0x8(%ebp),%eax
   31224:	89 04 24             	mov    %eax,(%esp)
   31227:	e8 94 3b 00 00       	call   34dc0 <__ssprint_r>
   3122c:	85 c0                	test   %eax,%eax
   3122e:	0f 85 fc f1 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   31234:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   3123a:	8d 7d a8             	lea    -0x58(%ebp),%edi
   3123d:	e9 53 f9 ff ff       	jmp    30b95 <_svfprintf_r+0x935>
   31242:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   31248:	89 c2                	mov    %eax,%edx
   3124a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   31250:	89 c8                	mov    %ecx,%eax
   31252:	83 ea 01             	sub    $0x1,%edx
   31255:	83 e0 07             	and    $0x7,%eax
   31258:	c1 e9 03             	shr    $0x3,%ecx
   3125b:	83 c0 30             	add    $0x30,%eax
   3125e:	85 c9                	test   %ecx,%ecx
   31260:	88 02                	mov    %al,(%edx)
   31262:	75 ec                	jne    31250 <_svfprintf_r+0xff0>
   31264:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   3126b:	89 95 28 ff ff ff    	mov    %edx,-0xd8(%ebp)
   31271:	0f 84 5b 01 00 00    	je     313d2 <_svfprintf_r+0x1172>
   31277:	3c 30                	cmp    $0x30,%al
   31279:	74 0b                	je     31286 <_svfprintf_r+0x1026>
   3127b:	83 ad 28 ff ff ff 01 	subl   $0x1,-0xd8(%ebp)
   31282:	c6 42 ff 30          	movb   $0x30,-0x1(%edx)
   31286:	8d 45 a8             	lea    -0x58(%ebp),%eax
   31289:	2b 85 28 ff ff ff    	sub    -0xd8(%ebp),%eax
   3128f:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   31295:	e9 1e f4 ff ff       	jmp    306b8 <_svfprintf_r+0x458>
   3129a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   312a0:	8b 9d 5c ff ff ff    	mov    -0xa4(%ebp),%ebx
   312a6:	85 db                	test   %ebx,%ebx
   312a8:	0f 8e 66 05 00 00    	jle    31814 <_svfprintf_r+0x15b4>
   312ae:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
   312b4:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
   312ba:	01 d0                	add    %edx,%eax
   312bc:	89 c3                	mov    %eax,%ebx
   312be:	29 d3                	sub    %edx,%ebx
   312c0:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
   312c6:	89 d0                	mov    %edx,%eax
   312c8:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
   312ce:	39 d3                	cmp    %edx,%ebx
   312d0:	0f 4f da             	cmovg  %edx,%ebx
   312d3:	85 db                	test   %ebx,%ebx
   312d5:	7e 28                	jle    312ff <_svfprintf_r+0x109f>
   312d7:	89 07                	mov    %eax,(%edi)
   312d9:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   312df:	01 d9                	add    %ebx,%ecx
   312e1:	89 5f 04             	mov    %ebx,0x4(%edi)
   312e4:	83 c7 08             	add    $0x8,%edi
   312e7:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   312ed:	83 c0 01             	add    $0x1,%eax
   312f0:	83 f8 07             	cmp    $0x7,%eax
   312f3:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   312f9:	0f 8f 58 09 00 00    	jg     31c57 <_svfprintf_r+0x19f7>
   312ff:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
   31305:	31 c0                	xor    %eax,%eax
   31307:	85 db                	test   %ebx,%ebx
   31309:	0f 49 c3             	cmovns %ebx,%eax
   3130c:	29 c6                	sub    %eax,%esi
   3130e:	85 f6                	test   %esi,%esi
   31310:	0f 8e 40 02 00 00    	jle    31556 <_svfprintf_r+0x12f6>
   31316:	83 fe 10             	cmp    $0x10,%esi
   31319:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3131f:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   31325:	7f 15                	jg     3133c <_svfprintf_r+0x10dc>
   31327:	e9 db 01 00 00       	jmp    31507 <_svfprintf_r+0x12a7>
   3132c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   31330:	83 ee 10             	sub    $0x10,%esi
   31333:	83 fe 10             	cmp    $0x10,%esi
   31336:	0f 8e cb 01 00 00    	jle    31507 <_svfprintf_r+0x12a7>
   3133c:	83 c0 01             	add    $0x1,%eax
   3133f:	83 c1 10             	add    $0x10,%ecx
   31342:	c7 07 d8 71 03 00    	movl   $0x371d8,(%edi)
   31348:	83 c7 08             	add    $0x8,%edi
   3134b:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   31352:	83 f8 07             	cmp    $0x7,%eax
   31355:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   3135b:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   31361:	7e cd                	jle    31330 <_svfprintf_r+0x10d0>
   31363:	8b 45 0c             	mov    0xc(%ebp),%eax
   31366:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   3136a:	89 44 24 04          	mov    %eax,0x4(%esp)
   3136e:	8b 45 08             	mov    0x8(%ebp),%eax
   31371:	89 04 24             	mov    %eax,(%esp)
   31374:	e8 47 3a 00 00       	call   34dc0 <__ssprint_r>
   31379:	85 c0                	test   %eax,%eax
   3137b:	0f 85 af f0 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   31381:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   31387:	8d 7d a8             	lea    -0x58(%ebp),%edi
   3138a:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   31390:	eb 9e                	jmp    31330 <_svfprintf_r+0x10d0>
   31392:	8d 45 a8             	lea    -0x58(%ebp),%eax
   31395:	be cd cc cc cc       	mov    $0xcccccccd,%esi
   3139a:	89 bd 48 ff ff ff    	mov    %edi,-0xb8(%ebp)
   313a0:	89 c7                	mov    %eax,%edi
   313a2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   313a8:	89 c8                	mov    %ecx,%eax
   313aa:	83 ef 01             	sub    $0x1,%edi
   313ad:	f7 e6                	mul    %esi
   313af:	c1 ea 03             	shr    $0x3,%edx
   313b2:	8d 04 92             	lea    (%edx,%edx,4),%eax
   313b5:	01 c0                	add    %eax,%eax
   313b7:	29 c1                	sub    %eax,%ecx
   313b9:	83 c1 30             	add    $0x30,%ecx
   313bc:	85 d2                	test   %edx,%edx
   313be:	88 0f                	mov    %cl,(%edi)
   313c0:	89 d1                	mov    %edx,%ecx
   313c2:	75 e4                	jne    313a8 <_svfprintf_r+0x1148>
   313c4:	89 fa                	mov    %edi,%edx
   313c6:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
   313cc:	8b bd 48 ff ff ff    	mov    -0xb8(%ebp),%edi
   313d2:	8d 45 a8             	lea    -0x58(%ebp),%eax
   313d5:	29 d0                	sub    %edx,%eax
   313d7:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   313dd:	e9 d6 f2 ff ff       	jmp    306b8 <_svfprintf_r+0x458>
   313e2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   313e8:	83 f9 09             	cmp    $0x9,%ecx
   313eb:	77 a5                	ja     31392 <_svfprintf_r+0x1132>
   313ed:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
   313f3:	83 c1 30             	add    $0x30,%ecx
   313f6:	88 4d a7             	mov    %cl,-0x59(%ebp)
   313f9:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   313ff:	8d 45 a7             	lea    -0x59(%ebp),%eax
   31402:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   31408:	e9 ab f2 ff ff       	jmp    306b8 <_svfprintf_r+0x458>
   3140d:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   31413:	89 44 24 08          	mov    %eax,0x8(%esp)
   31417:	8b 45 0c             	mov    0xc(%ebp),%eax
   3141a:	89 44 24 04          	mov    %eax,0x4(%esp)
   3141e:	8b 45 08             	mov    0x8(%ebp),%eax
   31421:	89 04 24             	mov    %eax,(%esp)
   31424:	e8 97 39 00 00       	call   34dc0 <__ssprint_r>
   31429:	85 c0                	test   %eax,%eax
   3142b:	0f 85 ff ef ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   31431:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   31438:	8d 7d a8             	lea    -0x58(%ebp),%edi
   3143b:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   31441:	e9 18 f7 ff ff       	jmp    30b5e <_svfprintf_r+0x8fe>
   31446:	8b 9d 1c ff ff ff    	mov    -0xe4(%ebp),%ebx
   3144c:	8d 73 ff             	lea    -0x1(%ebx),%esi
   3144f:	85 f6                	test   %esi,%esi
   31451:	0f 8e f0 fc ff ff    	jle    31147 <_svfprintf_r+0xee7>
   31457:	83 fe 10             	cmp    $0x10,%esi
   3145a:	7e 70                	jle    314cc <_svfprintf_r+0x126c>
   3145c:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   31462:	eb 0c                	jmp    31470 <_svfprintf_r+0x1210>
   31464:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   31468:	83 ee 10             	sub    $0x10,%esi
   3146b:	83 fe 10             	cmp    $0x10,%esi
   3146e:	7e 5c                	jle    314cc <_svfprintf_r+0x126c>
   31470:	83 c0 01             	add    $0x1,%eax
   31473:	83 c2 10             	add    $0x10,%edx
   31476:	c7 07 d8 71 03 00    	movl   $0x371d8,(%edi)
   3147c:	83 c7 08             	add    $0x8,%edi
   3147f:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   31486:	83 f8 07             	cmp    $0x7,%eax
   31489:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   3148f:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   31495:	7e d1                	jle    31468 <_svfprintf_r+0x1208>
   31497:	8b 45 0c             	mov    0xc(%ebp),%eax
   3149a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   3149e:	89 44 24 04          	mov    %eax,0x4(%esp)
   314a2:	8b 45 08             	mov    0x8(%ebp),%eax
   314a5:	89 04 24             	mov    %eax,(%esp)
   314a8:	e8 13 39 00 00       	call   34dc0 <__ssprint_r>
   314ad:	85 c0                	test   %eax,%eax
   314af:	0f 85 7b ef ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   314b5:	83 ee 10             	sub    $0x10,%esi
   314b8:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   314be:	83 fe 10             	cmp    $0x10,%esi
   314c1:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   314c7:	8d 7d a8             	lea    -0x58(%ebp),%edi
   314ca:	7f a4                	jg     31470 <_svfprintf_r+0x1210>
   314cc:	c7 07 d8 71 03 00    	movl   $0x371d8,(%edi)
   314d2:	01 f2                	add    %esi,%edx
   314d4:	89 77 04             	mov    %esi,0x4(%edi)
   314d7:	e9 50 fc ff ff       	jmp    3112c <_svfprintf_r+0xecc>
   314dc:	c7 07 d8 71 03 00    	movl   $0x371d8,(%edi)
   314e2:	01 f1                	add    %esi,%ecx
   314e4:	89 77 04             	mov    %esi,0x4(%edi)
   314e7:	e9 6f fc ff ff       	jmp    3115b <_svfprintf_r+0xefb>
   314ec:	8b 45 14             	mov    0x14(%ebp),%eax
   314ef:	8b 95 34 ff ff ff    	mov    -0xcc(%ebp),%edx
   314f5:	8b 00                	mov    (%eax),%eax
   314f7:	89 10                	mov    %edx,(%eax)
   314f9:	8b 45 14             	mov    0x14(%ebp),%eax
   314fc:	83 c0 04             	add    $0x4,%eax
   314ff:	89 45 14             	mov    %eax,0x14(%ebp)
   31502:	e9 f4 ed ff ff       	jmp    302fb <_svfprintf_r+0x9b>
   31507:	83 c0 01             	add    $0x1,%eax
   3150a:	01 f1                	add    %esi,%ecx
   3150c:	c7 07 d8 71 03 00    	movl   $0x371d8,(%edi)
   31512:	83 c7 08             	add    $0x8,%edi
   31515:	89 77 fc             	mov    %esi,-0x4(%edi)
   31518:	83 f8 07             	cmp    $0x7,%eax
   3151b:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   31521:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   31527:	7e 2d                	jle    31556 <_svfprintf_r+0x12f6>
   31529:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3152f:	89 44 24 08          	mov    %eax,0x8(%esp)
   31533:	8b 45 0c             	mov    0xc(%ebp),%eax
   31536:	89 44 24 04          	mov    %eax,0x4(%esp)
   3153a:	8b 45 08             	mov    0x8(%ebp),%eax
   3153d:	89 04 24             	mov    %eax,(%esp)
   31540:	e8 7b 38 00 00       	call   34dc0 <__ssprint_r>
   31545:	85 c0                	test   %eax,%eax
   31547:	0f 85 e3 ee ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   3154d:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   31553:	8d 7d a8             	lea    -0x58(%ebp),%edi
   31556:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   3155c:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
   31562:	03 85 20 ff ff ff    	add    -0xe0(%ebp),%eax
   31568:	3b 95 1c ff ff ff    	cmp    -0xe4(%ebp),%edx
   3156e:	89 c6                	mov    %eax,%esi
   31570:	7c 0d                	jl     3157f <_svfprintf_r+0x131f>
   31572:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   31579:	0f 84 5e 05 00 00    	je     31add <_svfprintf_r+0x187d>
   3157f:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
   31585:	89 07                	mov    %eax,(%edi)
   31587:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
   3158d:	01 c1                	add    %eax,%ecx
   3158f:	89 47 04             	mov    %eax,0x4(%edi)
   31592:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   31598:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   3159e:	83 c0 01             	add    $0x1,%eax
   315a1:	83 f8 07             	cmp    $0x7,%eax
   315a4:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   315aa:	0f 8f d9 06 00 00    	jg     31c89 <_svfprintf_r+0x1a29>
   315b0:	83 c7 08             	add    $0x8,%edi
   315b3:	89 d0                	mov    %edx,%eax
   315b5:	8b 9d 44 ff ff ff    	mov    -0xbc(%ebp),%ebx
   315bb:	89 f2                	mov    %esi,%edx
   315bd:	29 f3                	sub    %esi,%ebx
   315bf:	8b b5 1c ff ff ff    	mov    -0xe4(%ebp),%esi
   315c5:	29 c6                	sub    %eax,%esi
   315c7:	39 de                	cmp    %ebx,%esi
   315c9:	0f 4e de             	cmovle %esi,%ebx
   315cc:	85 db                	test   %ebx,%ebx
   315ce:	7e 29                	jle    315f9 <_svfprintf_r+0x1399>
   315d0:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   315d6:	01 d9                	add    %ebx,%ecx
   315d8:	83 c7 08             	add    $0x8,%edi
   315db:	89 57 f8             	mov    %edx,-0x8(%edi)
   315de:	89 5f fc             	mov    %ebx,-0x4(%edi)
   315e1:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   315e7:	83 c0 01             	add    $0x1,%eax
   315ea:	83 f8 07             	cmp    $0x7,%eax
   315ed:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   315f3:	0f 8f c8 06 00 00    	jg     31cc1 <_svfprintf_r+0x1a61>
   315f9:	31 c0                	xor    %eax,%eax
   315fb:	85 db                	test   %ebx,%ebx
   315fd:	0f 49 c3             	cmovns %ebx,%eax
   31600:	29 c6                	sub    %eax,%esi
   31602:	85 f6                	test   %esi,%esi
   31604:	0f 8e 02 f7 ff ff    	jle    30d0c <_svfprintf_r+0xaac>
   3160a:	83 fe 10             	cmp    $0x10,%esi
   3160d:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   31613:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   31619:	7f 11                	jg     3162c <_svfprintf_r+0x13cc>
   3161b:	e9 bc fe ff ff       	jmp    314dc <_svfprintf_r+0x127c>
   31620:	83 ee 10             	sub    $0x10,%esi
   31623:	83 fe 10             	cmp    $0x10,%esi
   31626:	0f 8e b0 fe ff ff    	jle    314dc <_svfprintf_r+0x127c>
   3162c:	83 c0 01             	add    $0x1,%eax
   3162f:	83 c1 10             	add    $0x10,%ecx
   31632:	c7 07 d8 71 03 00    	movl   $0x371d8,(%edi)
   31638:	83 c7 08             	add    $0x8,%edi
   3163b:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   31642:	83 f8 07             	cmp    $0x7,%eax
   31645:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   3164b:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   31651:	7e cd                	jle    31620 <_svfprintf_r+0x13c0>
   31653:	8b 45 0c             	mov    0xc(%ebp),%eax
   31656:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   3165a:	89 44 24 04          	mov    %eax,0x4(%esp)
   3165e:	8b 45 08             	mov    0x8(%ebp),%eax
   31661:	89 04 24             	mov    %eax,(%esp)
   31664:	e8 57 37 00 00       	call   34dc0 <__ssprint_r>
   31669:	85 c0                	test   %eax,%eax
   3166b:	0f 85 bf ed ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   31671:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   31677:	8d 7d a8             	lea    -0x58(%ebp),%edi
   3167a:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   31680:	eb 9e                	jmp    31620 <_svfprintf_r+0x13c0>
   31682:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   31689:	0f 85 14 fa ff ff    	jne    310a3 <_svfprintf_r+0xe43>
   3168f:	89 07                	mov    %eax,(%edi)
   31691:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   31697:	8d 51 01             	lea    0x1(%ecx),%edx
   3169a:	c7 47 04 01 00 00 00 	movl   $0x1,0x4(%edi)
   316a1:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   316a7:	83 c0 01             	add    $0x1,%eax
   316aa:	83 f8 07             	cmp    $0x7,%eax
   316ad:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   316b3:	0f 8e 8b fa ff ff    	jle    31144 <_svfprintf_r+0xee4>
   316b9:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   316bf:	89 44 24 08          	mov    %eax,0x8(%esp)
   316c3:	8b 45 0c             	mov    0xc(%ebp),%eax
   316c6:	89 44 24 04          	mov    %eax,0x4(%esp)
   316ca:	8b 45 08             	mov    0x8(%ebp),%eax
   316cd:	89 04 24             	mov    %eax,(%esp)
   316d0:	e8 eb 36 00 00       	call   34dc0 <__ssprint_r>
   316d5:	85 c0                	test   %eax,%eax
   316d7:	0f 85 53 ed ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   316dd:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   316e3:	8d 7d a8             	lea    -0x58(%ebp),%edi
   316e6:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   316ec:	e9 56 fa ff ff       	jmp    31147 <_svfprintf_r+0xee7>
   316f1:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   316f7:	89 44 24 08          	mov    %eax,0x8(%esp)
   316fb:	8b 45 0c             	mov    0xc(%ebp),%eax
   316fe:	89 44 24 04          	mov    %eax,0x4(%esp)
   31702:	8b 45 08             	mov    0x8(%ebp),%eax
   31705:	89 04 24             	mov    %eax,(%esp)
   31708:	e8 b3 36 00 00       	call   34dc0 <__ssprint_r>
   3170d:	85 c0                	test   %eax,%eax
   3170f:	0f 85 1b ed ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   31715:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   3171b:	8d 7d a8             	lea    -0x58(%ebp),%edi
   3171e:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   31724:	e9 d6 f9 ff ff       	jmp    310ff <_svfprintf_r+0xe9f>
   31729:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3172f:	89 44 24 08          	mov    %eax,0x8(%esp)
   31733:	8b 45 0c             	mov    0xc(%ebp),%eax
   31736:	89 44 24 04          	mov    %eax,0x4(%esp)
   3173a:	8b 45 08             	mov    0x8(%ebp),%eax
   3173d:	89 04 24             	mov    %eax,(%esp)
   31740:	e8 7b 36 00 00       	call   34dc0 <__ssprint_r>
   31745:	85 c0                	test   %eax,%eax
   31747:	0f 85 e3 ec ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   3174d:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   31753:	8d 7d a8             	lea    -0x58(%ebp),%edi
   31756:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3175c:	e9 6f f9 ff ff       	jmp    310d0 <_svfprintf_r+0xe70>
   31761:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   31767:	dd 1c 24             	fstpl  (%esp)
   3176a:	e8 61 35 00 00       	call   34cd0 <__fpclassifyd>
   3176f:	85 c0                	test   %eax,%eax
   31771:	0f 85 a3 01 00 00    	jne    3191a <_svfprintf_r+0x16ba>
   31777:	83 bd 24 ff ff ff 47 	cmpl   $0x47,-0xdc(%ebp)
   3177e:	ba 3f 70 03 00       	mov    $0x3703f,%edx
   31783:	b8 43 70 03 00       	mov    $0x37043,%eax
   31788:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   3178f:	c7 85 48 ff ff ff 03 	movl   $0x3,-0xb8(%ebp)
   31796:	00 00 00 
   31799:	0f 4e c2             	cmovle %edx,%eax
   3179c:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   317a2:	81 a5 4c ff ff ff 7f 	andl   $0xffffff7f,-0xb4(%ebp)
   317a9:	ff ff ff 
   317ac:	c7 85 38 ff ff ff 03 	movl   $0x3,-0xc8(%ebp)
   317b3:	00 00 00 
   317b6:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   317bd:	00 00 00 
   317c0:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   317c7:	00 00 00 
   317ca:	e9 29 ed ff ff       	jmp    304f8 <_svfprintf_r+0x298>
   317cf:	dd 00                	fldl   (%eax)
   317d1:	83 c0 08             	add    $0x8,%eax
   317d4:	dd 9d 10 ff ff ff    	fstpl  -0xf0(%ebp)
   317da:	89 45 14             	mov    %eax,0x14(%ebp)
   317dd:	e9 e6 ef ff ff       	jmp    307c8 <_svfprintf_r+0x568>
   317e2:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   317e8:	89 44 24 08          	mov    %eax,0x8(%esp)
   317ec:	8b 45 0c             	mov    0xc(%ebp),%eax
   317ef:	89 44 24 04          	mov    %eax,0x4(%esp)
   317f3:	8b 45 08             	mov    0x8(%ebp),%eax
   317f6:	89 04 24             	mov    %eax,(%esp)
   317f9:	e8 c2 35 00 00       	call   34dc0 <__ssprint_r>
   317fe:	85 c0                	test   %eax,%eax
   31800:	0f 85 2a ec ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   31806:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   3180c:	8d 7d a8             	lea    -0x58(%ebp),%edi
   3180f:	e9 6b f6 ff ff       	jmp    30e7f <_svfprintf_r+0xc1f>
   31814:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3181a:	83 c1 01             	add    $0x1,%ecx
   3181d:	83 c7 08             	add    $0x8,%edi
   31820:	c7 47 f8 70 70 03 00 	movl   $0x37070,-0x8(%edi)
   31827:	c7 47 fc 01 00 00 00 	movl   $0x1,-0x4(%edi)
   3182e:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   31834:	83 c0 01             	add    $0x1,%eax
   31837:	83 f8 07             	cmp    $0x7,%eax
   3183a:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   31840:	0f 8f ef 02 00 00    	jg     31b35 <_svfprintf_r+0x18d5>
   31846:	85 db                	test   %ebx,%ebx
   31848:	75 17                	jne    31861 <_svfprintf_r+0x1601>
   3184a:	8b 95 1c ff ff ff    	mov    -0xe4(%ebp),%edx
   31850:	85 d2                	test   %edx,%edx
   31852:	75 0d                	jne    31861 <_svfprintf_r+0x1601>
   31854:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   3185b:	0f 84 ab f4 ff ff    	je     30d0c <_svfprintf_r+0xaac>
   31861:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
   31867:	83 c7 08             	add    $0x8,%edi
   3186a:	89 47 f8             	mov    %eax,-0x8(%edi)
   3186d:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
   31873:	89 47 fc             	mov    %eax,-0x4(%edi)
   31876:	8d 14 01             	lea    (%ecx,%eax,1),%edx
   31879:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3187f:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   31885:	83 c0 01             	add    $0x1,%eax
   31888:	83 f8 07             	cmp    $0x7,%eax
   3188b:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   31891:	0f 8f 60 03 00 00    	jg     31bf7 <_svfprintf_r+0x1997>
   31897:	f7 db                	neg    %ebx
   31899:	85 db                	test   %ebx,%ebx
   3189b:	0f 8e 21 03 00 00    	jle    31bc2 <_svfprintf_r+0x1962>
   318a1:	83 fb 10             	cmp    $0x10,%ebx
   318a4:	0f 8e c3 02 00 00    	jle    31b6d <_svfprintf_r+0x190d>
   318aa:	8d b5 74 ff ff ff    	lea    -0x8c(%ebp),%esi
   318b0:	eb 12                	jmp    318c4 <_svfprintf_r+0x1664>
   318b2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   318b8:	83 eb 10             	sub    $0x10,%ebx
   318bb:	83 fb 10             	cmp    $0x10,%ebx
   318be:	0f 8e a9 02 00 00    	jle    31b6d <_svfprintf_r+0x190d>
   318c4:	83 c0 01             	add    $0x1,%eax
   318c7:	83 c2 10             	add    $0x10,%edx
   318ca:	c7 07 d8 71 03 00    	movl   $0x371d8,(%edi)
   318d0:	83 c7 08             	add    $0x8,%edi
   318d3:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   318da:	83 f8 07             	cmp    $0x7,%eax
   318dd:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   318e3:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   318e9:	7e cd                	jle    318b8 <_svfprintf_r+0x1658>
   318eb:	8b 45 0c             	mov    0xc(%ebp),%eax
   318ee:	89 74 24 08          	mov    %esi,0x8(%esp)
   318f2:	89 44 24 04          	mov    %eax,0x4(%esp)
   318f6:	8b 45 08             	mov    0x8(%ebp),%eax
   318f9:	89 04 24             	mov    %eax,(%esp)
   318fc:	e8 bf 34 00 00       	call   34dc0 <__ssprint_r>
   31901:	85 c0                	test   %eax,%eax
   31903:	0f 85 27 eb ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   31909:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   3190f:	8d 7d a8             	lea    -0x58(%ebp),%edi
   31912:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   31918:	eb 9e                	jmp    318b8 <_svfprintf_r+0x1658>
   3191a:	8b 9d 24 ff ff ff    	mov    -0xdc(%ebp),%ebx
   31920:	83 e3 df             	and    $0xffffffdf,%ebx
   31923:	83 bd 44 ff ff ff ff 	cmpl   $0xffffffff,-0xbc(%ebp)
   3192a:	0f 84 05 03 00 00    	je     31c35 <_svfprintf_r+0x19d5>
   31930:	83 fb 47             	cmp    $0x47,%ebx
   31933:	75 16                	jne    3194b <_svfprintf_r+0x16eb>
   31935:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   3193b:	b8 01 00 00 00       	mov    $0x1,%eax
   31940:	85 d2                	test   %edx,%edx
   31942:	0f 45 c2             	cmovne %edx,%eax
   31945:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
   3194b:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
   31951:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   31957:	dd 95 38 ff ff ff    	fstl   -0xc8(%ebp)
   3195d:	80 cc 01             	or     $0x1,%ah
   31960:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
   31966:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
   3196c:	c6 85 48 ff ff ff 00 	movb   $0x0,-0xb8(%ebp)
   31973:	85 c0                	test   %eax,%eax
   31975:	0f 88 ba 05 00 00    	js     31f35 <_svfprintf_r+0x1cd5>
   3197b:	83 fb 46             	cmp    $0x46,%ebx
   3197e:	0f 94 c0             	sete   %al
   31981:	89 c6                	mov    %eax,%esi
   31983:	0f 84 d4 03 00 00    	je     31d5d <_svfprintf_r+0x1afd>
   31989:	83 fb 45             	cmp    $0x45,%ebx
   3198c:	0f 85 99 05 00 00    	jne    31f2b <_svfprintf_r+0x1ccb>
   31992:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   31998:	dd 54 24 04          	fstl   0x4(%esp)
   3199c:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
   319a3:	00 
   319a4:	dd 9d 38 ff ff ff    	fstpl  -0xc8(%ebp)
   319aa:	8d 70 01             	lea    0x1(%eax),%esi
   319ad:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
   319b3:	89 44 24 1c          	mov    %eax,0x1c(%esp)
   319b7:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
   319bd:	89 44 24 18          	mov    %eax,0x18(%esp)
   319c1:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
   319c7:	89 44 24 14          	mov    %eax,0x14(%esp)
   319cb:	8b 45 08             	mov    0x8(%ebp),%eax
   319ce:	89 74 24 10          	mov    %esi,0x10(%esp)
   319d2:	89 04 24             	mov    %eax,(%esp)
   319d5:	e8 56 09 00 00       	call   32330 <_dtoa_r>
   319da:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   319e0:	8d 0c 30             	lea    (%eax,%esi,1),%ecx
   319e3:	dd 85 38 ff ff ff    	fldl   -0xc8(%ebp)
   319e9:	d9 ee                	fldz   
   319eb:	d9 c9                	fxch   %st(1)
   319ed:	df e9                	fucomip %st(1),%st
   319ef:	dd d8                	fstp   %st(0)
   319f1:	0f 8a fd 00 00 00    	jp     31af4 <_svfprintf_r+0x1894>
   319f7:	89 c8                	mov    %ecx,%eax
   319f9:	0f 85 f5 00 00 00    	jne    31af4 <_svfprintf_r+0x1894>
   319ff:	2b 85 28 ff ff ff    	sub    -0xd8(%ebp),%eax
   31a05:	83 fb 47             	cmp    $0x47,%ebx
   31a08:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
   31a0e:	0f 84 1e 04 00 00    	je     31e32 <_svfprintf_r+0x1bd2>
   31a14:	83 bd 24 ff ff ff 65 	cmpl   $0x65,-0xdc(%ebp)
   31a1b:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   31a21:	0f 8e 65 04 00 00    	jle    31e8c <_svfprintf_r+0x1c2c>
   31a27:	83 bd 24 ff ff ff 66 	cmpl   $0x66,-0xdc(%ebp)
   31a2e:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
   31a34:	0f 84 3c 05 00 00    	je     31f76 <_svfprintf_r+0x1d16>
   31a3a:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
   31a40:	39 85 1c ff ff ff    	cmp    %eax,-0xe4(%ebp)
   31a46:	0f 8f f7 04 00 00    	jg     31f43 <_svfprintf_r+0x1ce3>
   31a4c:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
   31a52:	83 e0 01             	and    $0x1,%eax
   31a55:	0f 85 e2 05 00 00    	jne    3203d <_svfprintf_r+0x1ddd>
   31a5b:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
   31a61:	c7 85 24 ff ff ff 67 	movl   $0x67,-0xdc(%ebp)
   31a68:	00 00 00 
   31a6b:	85 d2                	test   %edx,%edx
   31a6d:	0f 49 c2             	cmovns %edx,%eax
   31a70:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   31a76:	80 bd 48 ff ff ff 00 	cmpb   $0x0,-0xb8(%ebp)
   31a7d:	0f 85 68 03 00 00    	jne    31deb <_svfprintf_r+0x1b8b>
   31a83:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   31a89:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
   31a8f:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   31a96:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   31a9d:	00 00 00 
   31aa0:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
   31aa6:	e9 4d ea ff ff       	jmp    304f8 <_svfprintf_r+0x298>
   31aab:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   31ab1:	89 44 24 08          	mov    %eax,0x8(%esp)
   31ab5:	8b 45 0c             	mov    0xc(%ebp),%eax
   31ab8:	89 44 24 04          	mov    %eax,0x4(%esp)
   31abc:	8b 45 08             	mov    0x8(%ebp),%eax
   31abf:	89 04 24             	mov    %eax,(%esp)
   31ac2:	e8 f9 32 00 00       	call   34dc0 <__ssprint_r>
   31ac7:	85 c0                	test   %eax,%eax
   31ac9:	0f 85 61 e9 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   31acf:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   31ad5:	8d 7d a8             	lea    -0x58(%ebp),%edi
   31ad8:	e9 f2 f3 ff ff       	jmp    30ecf <_svfprintf_r+0xc6f>
   31add:	89 d0                	mov    %edx,%eax
   31adf:	e9 d1 fa ff ff       	jmp    315b5 <_svfprintf_r+0x1355>
   31ae4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   31ae8:	8d 50 01             	lea    0x1(%eax),%edx
   31aeb:	89 95 6c ff ff ff    	mov    %edx,-0x94(%ebp)
   31af1:	c6 00 30             	movb   $0x30,(%eax)
   31af4:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
   31afa:	39 c1                	cmp    %eax,%ecx
   31afc:	77 ea                	ja     31ae8 <_svfprintf_r+0x1888>
   31afe:	e9 fc fe ff ff       	jmp    319ff <_svfprintf_r+0x179f>
   31b03:	8b 45 08             	mov    0x8(%ebp),%eax
   31b06:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
   31b0d:	00 
   31b0e:	89 04 24             	mov    %eax,(%esp)
   31b11:	e8 5a 1b 00 00       	call   33670 <_malloc_r>
   31b16:	8b 55 0c             	mov    0xc(%ebp),%edx
   31b19:	85 c0                	test   %eax,%eax
   31b1b:	89 02                	mov    %eax,(%edx)
   31b1d:	89 42 10             	mov    %eax,0x10(%edx)
   31b20:	0f 84 15 06 00 00    	je     3213b <_svfprintf_r+0x1edb>
   31b26:	8b 45 0c             	mov    0xc(%ebp),%eax
   31b29:	c7 40 14 40 00 00 00 	movl   $0x40,0x14(%eax)
   31b30:	e9 6c e7 ff ff       	jmp    302a1 <_svfprintf_r+0x41>
   31b35:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   31b3b:	89 44 24 08          	mov    %eax,0x8(%esp)
   31b3f:	8b 45 0c             	mov    0xc(%ebp),%eax
   31b42:	89 44 24 04          	mov    %eax,0x4(%esp)
   31b46:	8b 45 08             	mov    0x8(%ebp),%eax
   31b49:	89 04 24             	mov    %eax,(%esp)
   31b4c:	e8 6f 32 00 00       	call   34dc0 <__ssprint_r>
   31b51:	85 c0                	test   %eax,%eax
   31b53:	0f 85 d7 e8 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   31b59:	8b 9d 5c ff ff ff    	mov    -0xa4(%ebp),%ebx
   31b5f:	8d 7d a8             	lea    -0x58(%ebp),%edi
   31b62:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   31b68:	e9 d9 fc ff ff       	jmp    31846 <_svfprintf_r+0x15e6>
   31b6d:	83 c0 01             	add    $0x1,%eax
   31b70:	01 da                	add    %ebx,%edx
   31b72:	c7 07 d8 71 03 00    	movl   $0x371d8,(%edi)
   31b78:	83 c7 08             	add    $0x8,%edi
   31b7b:	89 5f fc             	mov    %ebx,-0x4(%edi)
   31b7e:	83 f8 07             	cmp    $0x7,%eax
   31b81:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   31b87:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   31b8d:	7e 33                	jle    31bc2 <_svfprintf_r+0x1962>
   31b8f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   31b95:	89 44 24 08          	mov    %eax,0x8(%esp)
   31b99:	8b 45 0c             	mov    0xc(%ebp),%eax
   31b9c:	89 44 24 04          	mov    %eax,0x4(%esp)
   31ba0:	8b 45 08             	mov    0x8(%ebp),%eax
   31ba3:	89 04 24             	mov    %eax,(%esp)
   31ba6:	e8 15 32 00 00       	call   34dc0 <__ssprint_r>
   31bab:	85 c0                	test   %eax,%eax
   31bad:	0f 85 7d e8 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   31bb3:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   31bb9:	8d 7d a8             	lea    -0x58(%ebp),%edi
   31bbc:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   31bc2:	8b 9d 28 ff ff ff    	mov    -0xd8(%ebp),%ebx
   31bc8:	83 c0 01             	add    $0x1,%eax
   31bcb:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   31bd1:	89 1f                	mov    %ebx,(%edi)
   31bd3:	8b 9d 1c ff ff ff    	mov    -0xe4(%ebp),%ebx
   31bd9:	01 da                	add    %ebx,%edx
   31bdb:	83 f8 07             	cmp    $0x7,%eax
   31bde:	89 5f 04             	mov    %ebx,0x4(%edi)
   31be1:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   31be7:	0f 8f 86 f5 ff ff    	jg     31173 <_svfprintf_r+0xf13>
   31bed:	83 c7 08             	add    $0x8,%edi
   31bf0:	89 d1                	mov    %edx,%ecx
   31bf2:	e9 15 f1 ff ff       	jmp    30d0c <_svfprintf_r+0xaac>
   31bf7:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   31bfd:	89 44 24 08          	mov    %eax,0x8(%esp)
   31c01:	8b 45 0c             	mov    0xc(%ebp),%eax
   31c04:	89 44 24 04          	mov    %eax,0x4(%esp)
   31c08:	8b 45 08             	mov    0x8(%ebp),%eax
   31c0b:	89 04 24             	mov    %eax,(%esp)
   31c0e:	e8 ad 31 00 00       	call   34dc0 <__ssprint_r>
   31c13:	85 c0                	test   %eax,%eax
   31c15:	0f 85 15 e8 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   31c1b:	8b 9d 5c ff ff ff    	mov    -0xa4(%ebp),%ebx
   31c21:	8d 7d a8             	lea    -0x58(%ebp),%edi
   31c24:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   31c2a:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   31c30:	e9 62 fc ff ff       	jmp    31897 <_svfprintf_r+0x1637>
   31c35:	c7 85 44 ff ff ff 06 	movl   $0x6,-0xbc(%ebp)
   31c3c:	00 00 00 
   31c3f:	e9 07 fd ff ff       	jmp    3194b <_svfprintf_r+0x16eb>
   31c44:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   31c4a:	89 04 24             	mov    %eax,(%esp)
   31c4d:	e8 ee 30 00 00       	call   34d40 <strlen>
   31c52:	e9 6a e8 ff ff       	jmp    304c1 <_svfprintf_r+0x261>
   31c57:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   31c5d:	89 44 24 08          	mov    %eax,0x8(%esp)
   31c61:	8b 45 0c             	mov    0xc(%ebp),%eax
   31c64:	89 44 24 04          	mov    %eax,0x4(%esp)
   31c68:	8b 45 08             	mov    0x8(%ebp),%eax
   31c6b:	89 04 24             	mov    %eax,(%esp)
   31c6e:	e8 4d 31 00 00       	call   34dc0 <__ssprint_r>
   31c73:	85 c0                	test   %eax,%eax
   31c75:	0f 85 b5 e7 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   31c7b:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   31c81:	8d 7d a8             	lea    -0x58(%ebp),%edi
   31c84:	e9 76 f6 ff ff       	jmp    312ff <_svfprintf_r+0x109f>
   31c89:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   31c8f:	89 44 24 08          	mov    %eax,0x8(%esp)
   31c93:	8b 45 0c             	mov    0xc(%ebp),%eax
   31c96:	89 44 24 04          	mov    %eax,0x4(%esp)
   31c9a:	8b 45 08             	mov    0x8(%ebp),%eax
   31c9d:	89 04 24             	mov    %eax,(%esp)
   31ca0:	e8 1b 31 00 00       	call   34dc0 <__ssprint_r>
   31ca5:	85 c0                	test   %eax,%eax
   31ca7:	0f 85 83 e7 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   31cad:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   31cb3:	8d 7d a8             	lea    -0x58(%ebp),%edi
   31cb6:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   31cbc:	e9 f4 f8 ff ff       	jmp    315b5 <_svfprintf_r+0x1355>
   31cc1:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   31cc7:	89 44 24 08          	mov    %eax,0x8(%esp)
   31ccb:	8b 45 0c             	mov    0xc(%ebp),%eax
   31cce:	89 44 24 04          	mov    %eax,0x4(%esp)
   31cd2:	8b 45 08             	mov    0x8(%ebp),%eax
   31cd5:	89 04 24             	mov    %eax,(%esp)
   31cd8:	e8 e3 30 00 00       	call   34dc0 <__ssprint_r>
   31cdd:	85 c0                	test   %eax,%eax
   31cdf:	0f 85 4b e7 ff ff    	jne    30430 <_svfprintf_r+0x1d0>
   31ce5:	8b b5 1c ff ff ff    	mov    -0xe4(%ebp),%esi
   31ceb:	8d 7d a8             	lea    -0x58(%ebp),%edi
   31cee:	2b b5 5c ff ff ff    	sub    -0xa4(%ebp),%esi
   31cf4:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   31cfa:	e9 fa f8 ff ff       	jmp    315f9 <_svfprintf_r+0x1399>
   31cff:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   31d05:	b0 06                	mov    $0x6,%al
   31d07:	89 75 14             	mov    %esi,0x14(%ebp)
   31d0a:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   31d11:	00 00 00 
   31d14:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   31d1b:	00 00 00 
   31d1e:	83 fa 06             	cmp    $0x6,%edx
   31d21:	0f 46 c2             	cmovbe %edx,%eax
   31d24:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
   31d2a:	85 c0                	test   %eax,%eax
   31d2c:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   31d32:	c7 85 28 ff ff ff 69 	movl   $0x37069,-0xd8(%ebp)
   31d39:	70 03 00 
   31d3c:	0f 49 d0             	cmovns %eax,%edx
   31d3f:	31 db                	xor    %ebx,%ebx
   31d41:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
   31d47:	e9 b7 e7 ff ff       	jmp    30503 <_svfprintf_r+0x2a3>
   31d4c:	c6 85 59 ff ff ff 2d 	movb   $0x2d,-0xa7(%ebp)
   31d53:	bb 2d 00 00 00       	mov    $0x2d,%ebx
   31d58:	e9 9d ea ff ff       	jmp    307fa <_svfprintf_r+0x59a>
   31d5d:	ba 03 00 00 00       	mov    $0x3,%edx
   31d62:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
   31d68:	89 44 24 1c          	mov    %eax,0x1c(%esp)
   31d6c:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
   31d72:	89 44 24 18          	mov    %eax,0x18(%esp)
   31d76:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
   31d7c:	89 44 24 14          	mov    %eax,0x14(%esp)
   31d80:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   31d86:	dd 54 24 04          	fstl   0x4(%esp)
   31d8a:	89 54 24 0c          	mov    %edx,0xc(%esp)
   31d8e:	dd 9d 38 ff ff ff    	fstpl  -0xc8(%ebp)
   31d94:	89 44 24 10          	mov    %eax,0x10(%esp)
   31d98:	8b 45 08             	mov    0x8(%ebp),%eax
   31d9b:	89 04 24             	mov    %eax,(%esp)
   31d9e:	e8 8d 05 00 00       	call   32330 <_dtoa_r>
   31da3:	83 fb 47             	cmp    $0x47,%ebx
   31da6:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   31dac:	dd 85 38 ff ff ff    	fldl   -0xc8(%ebp)
   31db2:	75 09                	jne    31dbd <_svfprintf_r+0x1b5d>
   31db4:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   31dbb:	74 5b                	je     31e18 <_svfprintf_r+0x1bb8>
   31dbd:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
   31dc3:	89 f0                	mov    %esi,%eax
   31dc5:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
   31dcb:	01 d1                	add    %edx,%ecx
   31dcd:	84 c0                	test   %al,%al
   31dcf:	0f 84 14 fc ff ff    	je     319e9 <_svfprintf_r+0x1789>
   31dd5:	80 3a 30             	cmpb   $0x30,(%edx)
   31dd8:	0f 84 37 02 00 00    	je     32015 <_svfprintf_r+0x1db5>
   31dde:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   31de4:	01 c1                	add    %eax,%ecx
   31de6:	e9 fe fb ff ff       	jmp    319e9 <_svfprintf_r+0x1789>
   31deb:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   31df1:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
   31df7:	bb 2d 00 00 00       	mov    $0x2d,%ebx
   31dfc:	c6 85 59 ff ff ff 2d 	movb   $0x2d,-0xa7(%ebp)
   31e03:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   31e0a:	00 00 00 
   31e0d:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
   31e13:	e9 e4 e6 ff ff       	jmp    304fc <_svfprintf_r+0x29c>
   31e18:	dd d8                	fstp   %st(0)
   31e1a:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
   31e20:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
   31e26:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   31e2c:	29 85 1c ff ff ff    	sub    %eax,-0xe4(%ebp)
   31e32:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   31e38:	83 f8 fd             	cmp    $0xfffffffd,%eax
   31e3b:	7c 48                	jl     31e85 <_svfprintf_r+0x1c25>
   31e3d:	39 85 44 ff ff ff    	cmp    %eax,-0xbc(%ebp)
   31e43:	7c 40                	jl     31e85 <_svfprintf_r+0x1c25>
   31e45:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
   31e4b:	e9 ea fb ff ff       	jmp    31a3a <_svfprintf_r+0x17da>
   31e50:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   31e56:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   31e5d:	89 75 14             	mov    %esi,0x14(%ebp)
   31e60:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   31e67:	00 00 00 
   31e6a:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   31e70:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   31e76:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   31e7d:	00 00 00 
   31e80:	e9 73 e6 ff ff       	jmp    304f8 <_svfprintf_r+0x298>
   31e85:	83 ad 24 ff ff ff 02 	subl   $0x2,-0xdc(%ebp)
   31e8c:	8d 48 ff             	lea    -0x1(%eax),%ecx
   31e8f:	0f b6 85 24 ff ff ff 	movzbl -0xdc(%ebp),%eax
   31e96:	85 c9                	test   %ecx,%ecx
   31e98:	89 8d 5c ff ff ff    	mov    %ecx,-0xa4(%ebp)
   31e9e:	88 85 65 ff ff ff    	mov    %al,-0x9b(%ebp)
   31ea4:	0f 88 2c 02 00 00    	js     320d6 <_svfprintf_r+0x1e76>
   31eaa:	c6 85 66 ff ff ff 2b 	movb   $0x2b,-0x9a(%ebp)
   31eb1:	83 f9 09             	cmp    $0x9,%ecx
   31eb4:	0f 8f ea 00 00 00    	jg     31fa4 <_svfprintf_r+0x1d44>
   31eba:	83 c1 30             	add    $0x30,%ecx
   31ebd:	c6 85 67 ff ff ff 30 	movb   $0x30,-0x99(%ebp)
   31ec4:	8d 85 69 ff ff ff    	lea    -0x97(%ebp),%eax
   31eca:	88 8d 68 ff ff ff    	mov    %cl,-0x98(%ebp)
   31ed0:	8b 9d 1c ff ff ff    	mov    -0xe4(%ebp),%ebx
   31ed6:	8d 95 65 ff ff ff    	lea    -0x9b(%ebp),%edx
   31edc:	29 d0                	sub    %edx,%eax
   31ede:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
   31ee4:	89 da                	mov    %ebx,%edx
   31ee6:	01 c2                	add    %eax,%edx
   31ee8:	83 fb 01             	cmp    $0x1,%ebx
   31eeb:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   31ef1:	0f 8e 21 02 00 00    	jle    32118 <_svfprintf_r+0x1eb8>
   31ef7:	31 c0                	xor    %eax,%eax
   31ef9:	83 85 38 ff ff ff 01 	addl   $0x1,-0xc8(%ebp)
   31f00:	0f 49 85 38 ff ff ff 	cmovns -0xc8(%ebp),%eax
   31f07:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   31f0e:	00 00 00 
   31f11:	e9 60 fb ff ff       	jmp    31a76 <_svfprintf_r+0x1816>
   31f16:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
   31f1c:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   31f23:	00 00 00 
   31f26:	e9 68 e4 ff ff       	jmp    30393 <_svfprintf_r+0x133>
   31f2b:	ba 02 00 00 00       	mov    $0x2,%edx
   31f30:	e9 2d fe ff ff       	jmp    31d62 <_svfprintf_r+0x1b02>
   31f35:	d9 e0                	fchs   
   31f37:	c6 85 48 ff ff ff 2d 	movb   $0x2d,-0xb8(%ebp)
   31f3e:	e9 38 fa ff ff       	jmp    3197b <_svfprintf_r+0x171b>
   31f43:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
   31f49:	ba 01 00 00 00       	mov    $0x1,%edx
   31f4e:	85 c9                	test   %ecx,%ecx
   31f50:	0f 8e 5a 01 00 00    	jle    320b0 <_svfprintf_r+0x1e50>
   31f56:	31 c0                	xor    %eax,%eax
   31f58:	03 95 1c ff ff ff    	add    -0xe4(%ebp),%edx
   31f5e:	c7 85 24 ff ff ff 67 	movl   $0x67,-0xdc(%ebp)
   31f65:	00 00 00 
   31f68:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   31f6e:	0f 49 c2             	cmovns %edx,%eax
   31f71:	e9 00 fb ff ff       	jmp    31a76 <_svfprintf_r+0x1816>
   31f76:	85 c0                	test   %eax,%eax
   31f78:	0f 8e 06 01 00 00    	jle    32084 <_svfprintf_r+0x1e24>
   31f7e:	8b b5 44 ff ff ff    	mov    -0xbc(%ebp),%esi
   31f84:	85 f6                	test   %esi,%esi
   31f86:	0f 85 d4 00 00 00    	jne    32060 <_svfprintf_r+0x1e00>
   31f8c:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   31f93:	0f 85 c7 00 00 00    	jne    32060 <_svfprintf_r+0x1e00>
   31f99:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   31f9f:	e9 d2 fa ff ff       	jmp    31a76 <_svfprintf_r+0x1816>
   31fa4:	8d b5 73 ff ff ff    	lea    -0x8d(%ebp),%esi
   31faa:	89 f3                	mov    %esi,%ebx
   31fac:	b8 67 66 66 66       	mov    $0x66666667,%eax
   31fb1:	83 eb 01             	sub    $0x1,%ebx
   31fb4:	f7 e9                	imul   %ecx
   31fb6:	89 c8                	mov    %ecx,%eax
   31fb8:	c1 f8 1f             	sar    $0x1f,%eax
   31fbb:	c1 fa 02             	sar    $0x2,%edx
   31fbe:	29 c2                	sub    %eax,%edx
   31fc0:	8d 04 92             	lea    (%edx,%edx,4),%eax
   31fc3:	01 c0                	add    %eax,%eax
   31fc5:	29 c1                	sub    %eax,%ecx
   31fc7:	83 fa 09             	cmp    $0x9,%edx
   31fca:	8d 41 30             	lea    0x30(%ecx),%eax
   31fcd:	89 d1                	mov    %edx,%ecx
   31fcf:	88 03                	mov    %al,(%ebx)
   31fd1:	7f d9                	jg     31fac <_svfprintf_r+0x1d4c>
   31fd3:	8d 43 ff             	lea    -0x1(%ebx),%eax
   31fd6:	83 c1 30             	add    $0x30,%ecx
   31fd9:	39 f0                	cmp    %esi,%eax
   31fdb:	88 4b ff             	mov    %cl,-0x1(%ebx)
   31fde:	0f 83 6a 01 00 00    	jae    3214e <_svfprintf_r+0x1eee>
   31fe4:	8d 95 67 ff ff ff    	lea    -0x99(%ebp),%edx
   31fea:	eb 07                	jmp    31ff3 <_svfprintf_r+0x1d93>
   31fec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   31ff0:	0f b6 08             	movzbl (%eax),%ecx
   31ff3:	83 c0 01             	add    $0x1,%eax
   31ff6:	83 c2 01             	add    $0x1,%edx
   31ff9:	39 f0                	cmp    %esi,%eax
   31ffb:	88 4a ff             	mov    %cl,-0x1(%edx)
   31ffe:	75 f0                	jne    31ff0 <_svfprintf_r+0x1d90>
   32000:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   32006:	29 d8                	sub    %ebx,%eax
   32008:	8d 95 67 ff ff ff    	lea    -0x99(%ebp),%edx
   3200e:	01 d0                	add    %edx,%eax
   32010:	e9 bb fe ff ff       	jmp    31ed0 <_svfprintf_r+0x1c70>
   32015:	d9 ee                	fldz   
   32017:	d9 c9                	fxch   %st(1)
   32019:	db e9                	fucomi %st(1),%st
   3201b:	dd d9                	fstp   %st(1)
   3201d:	7a 06                	jp     32025 <_svfprintf_r+0x1dc5>
   3201f:	0f 84 b9 fd ff ff    	je     31dde <_svfprintf_r+0x1b7e>
   32025:	b8 01 00 00 00       	mov    $0x1,%eax
   3202a:	2b 85 44 ff ff ff    	sub    -0xbc(%ebp),%eax
   32030:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
   32036:	01 c1                	add    %eax,%ecx
   32038:	e9 ac f9 ff ff       	jmp    319e9 <_svfprintf_r+0x1789>
   3203d:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
   32043:	31 c0                	xor    %eax,%eax
   32045:	c7 85 24 ff ff ff 67 	movl   $0x67,-0xdc(%ebp)
   3204c:	00 00 00 
   3204f:	83 c2 01             	add    $0x1,%edx
   32052:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   32058:	0f 49 c2             	cmovns %edx,%eax
   3205b:	e9 16 fa ff ff       	jmp    31a76 <_svfprintf_r+0x1816>
   32060:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
   32066:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   3206c:	8d 44 10 01          	lea    0x1(%eax,%edx,1),%eax
   32070:	89 c2                	mov    %eax,%edx
   32072:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   32078:	31 c0                	xor    %eax,%eax
   3207a:	85 d2                	test   %edx,%edx
   3207c:	0f 49 c2             	cmovns %edx,%eax
   3207f:	e9 f2 f9 ff ff       	jmp    31a76 <_svfprintf_r+0x1816>
   32084:	8b 9d 44 ff ff ff    	mov    -0xbc(%ebp),%ebx
   3208a:	85 db                	test   %ebx,%ebx
   3208c:	75 2f                	jne    320bd <_svfprintf_r+0x1e5d>
   3208e:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   32095:	75 26                	jne    320bd <_svfprintf_r+0x1e5d>
   32097:	b8 01 00 00 00       	mov    $0x1,%eax
   3209c:	c7 85 38 ff ff ff 01 	movl   $0x1,-0xc8(%ebp)
   320a3:	00 00 00 
   320a6:	e9 cb f9 ff ff       	jmp    31a76 <_svfprintf_r+0x1816>
   320ab:	90                   	nop
   320ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   320b0:	b2 02                	mov    $0x2,%dl
   320b2:	2b 95 20 ff ff ff    	sub    -0xe0(%ebp),%edx
   320b8:	e9 99 fe ff ff       	jmp    31f56 <_svfprintf_r+0x1cf6>
   320bd:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   320c3:	31 c0                	xor    %eax,%eax
   320c5:	83 c2 02             	add    $0x2,%edx
   320c8:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   320ce:	0f 49 c2             	cmovns %edx,%eax
   320d1:	e9 a0 f9 ff ff       	jmp    31a76 <_svfprintf_r+0x1816>
   320d6:	f7 d9                	neg    %ecx
   320d8:	c6 85 66 ff ff ff 2d 	movb   $0x2d,-0x9a(%ebp)
   320df:	e9 cd fd ff ff       	jmp    31eb1 <_svfprintf_r+0x1c51>
   320e4:	8b 55 14             	mov    0x14(%ebp),%edx
   320e7:	8b 45 14             	mov    0x14(%ebp),%eax
   320ea:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
   320f0:	8b 12                	mov    (%edx),%edx
   320f2:	83 c0 04             	add    $0x4,%eax
   320f5:	89 45 14             	mov    %eax,0x14(%ebp)
   320f8:	85 d2                	test   %edx,%edx
   320fa:	89 95 44 ff ff ff    	mov    %edx,-0xbc(%ebp)
   32100:	0f 89 a9 e2 ff ff    	jns    303af <_svfprintf_r+0x14f>
   32106:	c7 85 44 ff ff ff ff 	movl   $0xffffffff,-0xbc(%ebp)
   3210d:	ff ff ff 
   32110:	89 c8                	mov    %ecx,%eax
   32112:	e9 76 e2 ff ff       	jmp    3038d <_svfprintf_r+0x12d>
   32117:	90                   	nop
   32118:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
   3211e:	83 e0 01             	and    $0x1,%eax
   32121:	0f 85 d0 fd ff ff    	jne    31ef7 <_svfprintf_r+0x1c97>
   32127:	85 d2                	test   %edx,%edx
   32129:	0f 49 c2             	cmovns %edx,%eax
   3212c:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   32133:	00 00 00 
   32136:	e9 3b f9 ff ff       	jmp    31a76 <_svfprintf_r+0x1816>
   3213b:	8b 45 08             	mov    0x8(%ebp),%eax
   3213e:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
   32144:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   32149:	e9 f5 e2 ff ff       	jmp    30443 <_svfprintf_r+0x1e3>
   3214e:	8d 85 67 ff ff ff    	lea    -0x99(%ebp),%eax
   32154:	e9 77 fd ff ff       	jmp    31ed0 <_svfprintf_r+0x1c70>
   32159:	66 90                	xchg   %ax,%ax
   3215b:	66 90                	xchg   %ax,%ax
   3215d:	66 90                	xchg   %ax,%ax
   3215f:	90                   	nop

00032160 <quorem>:
   32160:	55                   	push   %ebp
   32161:	89 c1                	mov    %eax,%ecx
   32163:	89 e5                	mov    %esp,%ebp
   32165:	57                   	push   %edi
   32166:	89 d7                	mov    %edx,%edi
   32168:	56                   	push   %esi
   32169:	53                   	push   %ebx
   3216a:	83 ec 3c             	sub    $0x3c,%esp
   3216d:	89 45 d0             	mov    %eax,-0x30(%ebp)
   32170:	8b 42 10             	mov    0x10(%edx),%eax
   32173:	3b 41 10             	cmp    0x10(%ecx),%eax
   32176:	89 55 c8             	mov    %edx,-0x38(%ebp)
   32179:	89 ca                	mov    %ecx,%edx
   3217b:	0f 8f 9f 01 00 00    	jg     32320 <quorem+0x1c0>
   32181:	83 e8 01             	sub    $0x1,%eax
   32184:	83 c7 14             	add    $0x14,%edi
   32187:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   3218a:	c1 e0 02             	shl    $0x2,%eax
   3218d:	83 c2 14             	add    $0x14,%edx
   32190:	8d 1c 07             	lea    (%edi,%eax,1),%ebx
   32193:	01 d0                	add    %edx,%eax
   32195:	89 55 d8             	mov    %edx,-0x28(%ebp)
   32198:	8b 13                	mov    (%ebx),%edx
   3219a:	89 45 c4             	mov    %eax,-0x3c(%ebp)
   3219d:	8b 00                	mov    (%eax),%eax
   3219f:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
   321a2:	8d 4a 01             	lea    0x1(%edx),%ecx
   321a5:	31 d2                	xor    %edx,%edx
   321a7:	f7 f1                	div    %ecx
   321a9:	85 c0                	test   %eax,%eax
   321ab:	89 45 e0             	mov    %eax,-0x20(%ebp)
   321ae:	89 45 cc             	mov    %eax,-0x34(%ebp)
   321b1:	0f 84 b5 00 00 00    	je     3226c <quorem+0x10c>
   321b7:	8b 45 d8             	mov    -0x28(%ebp),%eax
   321ba:	31 f6                	xor    %esi,%esi
   321bc:	89 fa                	mov    %edi,%edx
   321be:	89 7d c0             	mov    %edi,-0x40(%ebp)
   321c1:	89 f7                	mov    %esi,%edi
   321c3:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
   321ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   321d0:	83 c2 04             	add    $0x4,%edx
   321d3:	8b 72 fc             	mov    -0x4(%edx),%esi
   321d6:	83 c0 04             	add    $0x4,%eax
   321d9:	0f b7 ce             	movzwl %si,%ecx
   321dc:	0f af 4d e0          	imul   -0x20(%ebp),%ecx
   321e0:	03 4d dc             	add    -0x24(%ebp),%ecx
   321e3:	c1 ee 10             	shr    $0x10,%esi
   321e6:	0f af 75 e0          	imul   -0x20(%ebp),%esi
   321ea:	89 cb                	mov    %ecx,%ebx
   321ec:	0f b7 c9             	movzwl %cx,%ecx
   321ef:	c1 eb 10             	shr    $0x10,%ebx
   321f2:	29 cf                	sub    %ecx,%edi
   321f4:	01 f3                	add    %esi,%ebx
   321f6:	89 de                	mov    %ebx,%esi
   321f8:	0f b7 db             	movzwl %bx,%ebx
   321fb:	c1 ee 10             	shr    $0x10,%esi
   321fe:	89 75 dc             	mov    %esi,-0x24(%ebp)
   32201:	8b 70 fc             	mov    -0x4(%eax),%esi
   32204:	0f b7 ce             	movzwl %si,%ecx
   32207:	01 f9                	add    %edi,%ecx
   32209:	c1 ee 10             	shr    $0x10,%esi
   3220c:	29 de                	sub    %ebx,%esi
   3220e:	89 cb                	mov    %ecx,%ebx
   32210:	c1 fb 10             	sar    $0x10,%ebx
   32213:	0f b7 c9             	movzwl %cx,%ecx
   32216:	01 de                	add    %ebx,%esi
   32218:	89 f7                	mov    %esi,%edi
   3221a:	c1 e6 10             	shl    $0x10,%esi
   3221d:	09 ce                	or     %ecx,%esi
   3221f:	c1 ff 10             	sar    $0x10,%edi
   32222:	39 55 e4             	cmp    %edx,-0x1c(%ebp)
   32225:	89 70 fc             	mov    %esi,-0x4(%eax)
   32228:	73 a6                	jae    321d0 <quorem+0x70>
   3222a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
   3222d:	8b 7d c0             	mov    -0x40(%ebp),%edi
   32230:	8b 10                	mov    (%eax),%edx
   32232:	85 d2                	test   %edx,%edx
   32234:	75 36                	jne    3226c <quorem+0x10c>
   32236:	8b 4d d8             	mov    -0x28(%ebp),%ecx
   32239:	89 c2                	mov    %eax,%edx
   3223b:	83 e8 04             	sub    $0x4,%eax
   3223e:	39 c1                	cmp    %eax,%ecx
   32240:	73 21                	jae    32263 <quorem+0x103>
   32242:	8b 72 fc             	mov    -0x4(%edx),%esi
   32245:	85 f6                	test   %esi,%esi
   32247:	75 1a                	jne    32263 <quorem+0x103>
   32249:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   3224c:	eb 08                	jmp    32256 <quorem+0xf6>
   3224e:	66 90                	xchg   %ax,%ax
   32250:	8b 18                	mov    (%eax),%ebx
   32252:	85 db                	test   %ebx,%ebx
   32254:	75 0a                	jne    32260 <quorem+0x100>
   32256:	83 e8 04             	sub    $0x4,%eax
   32259:	83 ea 01             	sub    $0x1,%edx
   3225c:	39 c1                	cmp    %eax,%ecx
   3225e:	72 f0                	jb     32250 <quorem+0xf0>
   32260:	89 55 d4             	mov    %edx,-0x2c(%ebp)
   32263:	8b 45 d0             	mov    -0x30(%ebp),%eax
   32266:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   32269:	89 50 10             	mov    %edx,0x10(%eax)
   3226c:	8b 45 c8             	mov    -0x38(%ebp),%eax
   3226f:	89 44 24 04          	mov    %eax,0x4(%esp)
   32273:	8b 45 d0             	mov    -0x30(%ebp),%eax
   32276:	89 04 24             	mov    %eax,(%esp)
   32279:	e8 f2 23 00 00       	call   34670 <__mcmp>
   3227e:	85 c0                	test   %eax,%eax
   32280:	0f 88 8e 00 00 00    	js     32314 <quorem+0x1b4>
   32286:	8b 45 e0             	mov    -0x20(%ebp),%eax
   32289:	31 f6                	xor    %esi,%esi
   3228b:	83 c0 01             	add    $0x1,%eax
   3228e:	89 45 cc             	mov    %eax,-0x34(%ebp)
   32291:	8b 45 d8             	mov    -0x28(%ebp),%eax
   32294:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32298:	83 c7 04             	add    $0x4,%edi
   3229b:	8b 4f fc             	mov    -0x4(%edi),%ecx
   3229e:	83 c0 04             	add    $0x4,%eax
   322a1:	8b 58 fc             	mov    -0x4(%eax),%ebx
   322a4:	0f b7 d1             	movzwl %cx,%edx
   322a7:	29 d6                	sub    %edx,%esi
   322a9:	0f b7 d3             	movzwl %bx,%edx
   322ac:	01 f2                	add    %esi,%edx
   322ae:	c1 e9 10             	shr    $0x10,%ecx
   322b1:	c1 eb 10             	shr    $0x10,%ebx
   322b4:	29 cb                	sub    %ecx,%ebx
   322b6:	89 d1                	mov    %edx,%ecx
   322b8:	c1 f9 10             	sar    $0x10,%ecx
   322bb:	0f b7 d2             	movzwl %dx,%edx
   322be:	01 cb                	add    %ecx,%ebx
   322c0:	89 de                	mov    %ebx,%esi
   322c2:	c1 e3 10             	shl    $0x10,%ebx
   322c5:	09 d3                	or     %edx,%ebx
   322c7:	c1 fe 10             	sar    $0x10,%esi
   322ca:	39 7d e4             	cmp    %edi,-0x1c(%ebp)
   322cd:	89 58 fc             	mov    %ebx,-0x4(%eax)
   322d0:	73 c6                	jae    32298 <quorem+0x138>
   322d2:	8b 45 d8             	mov    -0x28(%ebp),%eax
   322d5:	8b 7d d4             	mov    -0x2c(%ebp),%edi
   322d8:	8d 14 b8             	lea    (%eax,%edi,4),%edx
   322db:	8b 02                	mov    (%edx),%eax
   322dd:	85 c0                	test   %eax,%eax
   322df:	75 33                	jne    32314 <quorem+0x1b4>
   322e1:	8b 4d d8             	mov    -0x28(%ebp),%ecx
   322e4:	8d 42 fc             	lea    -0x4(%edx),%eax
   322e7:	39 c1                	cmp    %eax,%ecx
   322e9:	73 20                	jae    3230b <quorem+0x1ab>
   322eb:	8b 72 fc             	mov    -0x4(%edx),%esi
   322ee:	85 f6                	test   %esi,%esi
   322f0:	75 19                	jne    3230b <quorem+0x1ab>
   322f2:	89 fa                	mov    %edi,%edx
   322f4:	eb 08                	jmp    322fe <quorem+0x19e>
   322f6:	66 90                	xchg   %ax,%ax
   322f8:	8b 18                	mov    (%eax),%ebx
   322fa:	85 db                	test   %ebx,%ebx
   322fc:	75 0a                	jne    32308 <quorem+0x1a8>
   322fe:	83 e8 04             	sub    $0x4,%eax
   32301:	83 ea 01             	sub    $0x1,%edx
   32304:	39 c1                	cmp    %eax,%ecx
   32306:	72 f0                	jb     322f8 <quorem+0x198>
   32308:	89 55 d4             	mov    %edx,-0x2c(%ebp)
   3230b:	8b 45 d0             	mov    -0x30(%ebp),%eax
   3230e:	8b 7d d4             	mov    -0x2c(%ebp),%edi
   32311:	89 78 10             	mov    %edi,0x10(%eax)
   32314:	8b 45 cc             	mov    -0x34(%ebp),%eax
   32317:	83 c4 3c             	add    $0x3c,%esp
   3231a:	5b                   	pop    %ebx
   3231b:	5e                   	pop    %esi
   3231c:	5f                   	pop    %edi
   3231d:	5d                   	pop    %ebp
   3231e:	c3                   	ret    
   3231f:	90                   	nop
   32320:	83 c4 3c             	add    $0x3c,%esp
   32323:	31 c0                	xor    %eax,%eax
   32325:	5b                   	pop    %ebx
   32326:	5e                   	pop    %esi
   32327:	5f                   	pop    %edi
   32328:	5d                   	pop    %ebp
   32329:	c3                   	ret    
   3232a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

00032330 <_dtoa_r>:
   32330:	55                   	push   %ebp
   32331:	89 e5                	mov    %esp,%ebp
   32333:	57                   	push   %edi
   32334:	56                   	push   %esi
   32335:	53                   	push   %ebx
   32336:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
   3233c:	8b 75 08             	mov    0x8(%ebp),%esi
   3233f:	dd 45 0c             	fldl   0xc(%ebp)
   32342:	8b 5d 20             	mov    0x20(%ebp),%ebx
   32345:	dd 5d c0             	fstpl  -0x40(%ebp)
   32348:	8b 46 40             	mov    0x40(%esi),%eax
   3234b:	85 c0                	test   %eax,%eax
   3234d:	74 23                	je     32372 <_dtoa_r+0x42>
   3234f:	8b 4e 44             	mov    0x44(%esi),%ecx
   32352:	ba 01 00 00 00       	mov    $0x1,%edx
   32357:	d3 e2                	shl    %cl,%edx
   32359:	89 48 04             	mov    %ecx,0x4(%eax)
   3235c:	89 50 08             	mov    %edx,0x8(%eax)
   3235f:	89 44 24 04          	mov    %eax,0x4(%esp)
   32363:	89 34 24             	mov    %esi,(%esp)
   32366:	e8 e5 1b 00 00       	call   33f50 <_Bfree>
   3236b:	c7 46 40 00 00 00 00 	movl   $0x0,0x40(%esi)
   32372:	8b 7d c4             	mov    -0x3c(%ebp),%edi
   32375:	85 ff                	test   %edi,%edi
   32377:	0f 88 3b 02 00 00    	js     325b8 <_dtoa_r+0x288>
   3237d:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
   32383:	89 f8                	mov    %edi,%eax
   32385:	25 00 00 f0 7f       	and    $0x7ff00000,%eax
   3238a:	3d 00 00 f0 7f       	cmp    $0x7ff00000,%eax
   3238f:	0f 84 e3 01 00 00    	je     32578 <_dtoa_r+0x248>
   32395:	dd 45 c0             	fldl   -0x40(%ebp)
   32398:	d9 ee                	fldz   
   3239a:	d9 c9                	fxch   %st(1)
   3239c:	db e9                	fucomi %st(1),%st
   3239e:	dd d9                	fstp   %st(1)
   323a0:	7a 36                	jp     323d8 <_dtoa_r+0xa8>
   323a2:	75 34                	jne    323d8 <_dtoa_r+0xa8>
   323a4:	dd d8                	fstp   %st(0)
   323a6:	8b 4d 24             	mov    0x24(%ebp),%ecx
   323a9:	8b 45 1c             	mov    0x1c(%ebp),%eax
   323ac:	85 c9                	test   %ecx,%ecx
   323ae:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
   323b4:	0f 84 4e 02 00 00    	je     32608 <_dtoa_r+0x2d8>
   323ba:	8b 45 24             	mov    0x24(%ebp),%eax
   323bd:	c7 00 71 70 03 00    	movl   $0x37071,(%eax)
   323c3:	b8 70 70 03 00       	mov    $0x37070,%eax
   323c8:	81 c4 8c 00 00 00    	add    $0x8c,%esp
   323ce:	5b                   	pop    %ebx
   323cf:	5e                   	pop    %esi
   323d0:	5f                   	pop    %edi
   323d1:	5d                   	pop    %ebp
   323d2:	c3                   	ret    
   323d3:	90                   	nop
   323d4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   323d8:	8d 45 e0             	lea    -0x20(%ebp),%eax
   323db:	89 fb                	mov    %edi,%ebx
   323dd:	89 44 24 10          	mov    %eax,0x10(%esp)
   323e1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
   323e4:	dd 54 24 04          	fstl   0x4(%esp)
   323e8:	89 44 24 0c          	mov    %eax,0xc(%esp)
   323ec:	dd 5d b8             	fstpl  -0x48(%ebp)
   323ef:	89 34 24             	mov    %esi,(%esp)
   323f2:	c1 eb 14             	shr    $0x14,%ebx
   323f5:	e8 c6 25 00 00       	call   349c0 <__d2b>
   323fa:	85 db                	test   %ebx,%ebx
   323fc:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   323ff:	0f 85 db 01 00 00    	jne    325e0 <_dtoa_r+0x2b0>
   32405:	8b 45 e0             	mov    -0x20(%ebp),%eax
   32408:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
   3240b:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   3240e:	01 c3                	add    %eax,%ebx
   32410:	81 fb ef fb ff ff    	cmp    $0xfffffbef,%ebx
   32416:	0f 8c ec 07 00 00    	jl     32c08 <_dtoa_r+0x8d8>
   3241c:	8b 55 c0             	mov    -0x40(%ebp),%edx
   3241f:	b9 0e fc ff ff       	mov    $0xfffffc0e,%ecx
   32424:	89 f8                	mov    %edi,%eax
   32426:	29 d9                	sub    %ebx,%ecx
   32428:	d3 e0                	shl    %cl,%eax
   3242a:	8d 8b 12 04 00 00    	lea    0x412(%ebx),%ecx
   32430:	d3 ea                	shr    %cl,%edx
   32432:	09 d0                	or     %edx,%eax
   32434:	31 d2                	xor    %edx,%edx
   32436:	83 eb 01             	sub    $0x1,%ebx
   32439:	89 55 cc             	mov    %edx,-0x34(%ebp)
   3243c:	8b 55 b4             	mov    -0x4c(%ebp),%edx
   3243f:	89 45 c8             	mov    %eax,-0x38(%ebp)
   32442:	df 6d c8             	fildll -0x38(%ebp)
   32445:	dd 5d b8             	fstpl  -0x48(%ebp)
   32448:	81 6d bc 00 00 f0 01 	subl   $0x1f00000,-0x44(%ebp)
   3244f:	c7 45 8c 01 00 00 00 	movl   $0x1,-0x74(%ebp)
   32456:	dd 45 b8             	fldl   -0x48(%ebp)
   32459:	d8 25 08 72 03 00    	fsubs  0x37208
   3245f:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
   32462:	d9 7d d2             	fnstcw -0x2e(%ebp)
   32465:	dc 0d 20 72 03 00    	fmull  0x37220
   3246b:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
   3246f:	b4 0c                	mov    $0xc,%ah
   32471:	dc 05 28 72 03 00    	faddl  0x37228
   32477:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
   3247b:	db 45 d4             	fildl  -0x2c(%ebp)
   3247e:	dc 0d 30 72 03 00    	fmull  0x37230
   32484:	de c1                	faddp  %st,%st(1)
   32486:	d9 6d d0             	fldcw  -0x30(%ebp)
   32489:	db 55 b8             	fistl  -0x48(%ebp)
   3248c:	d9 6d d2             	fldcw  -0x2e(%ebp)
   3248f:	d9 ee                	fldz   
   32491:	df e9                	fucomip %st(1),%st
   32493:	0f 87 27 07 00 00    	ja     32bc0 <_dtoa_r+0x890>
   32499:	dd d8                	fstp   %st(0)
   3249b:	83 7d b8 16          	cmpl   $0x16,-0x48(%ebp)
   3249f:	c7 45 9c 01 00 00 00 	movl   $0x1,-0x64(%ebp)
   324a6:	77 24                	ja     324cc <_dtoa_r+0x19c>
   324a8:	8b 45 b8             	mov    -0x48(%ebp),%eax
   324ab:	dd 04 c5 00 73 03 00 	fldl   0x37300(,%eax,8)
   324b2:	dd 45 c0             	fldl   -0x40(%ebp)
   324b5:	d9 c9                	fxch   %st(1)
   324b7:	df e9                	fucomip %st(1),%st
   324b9:	dd d8                	fstp   %st(0)
   324bb:	0f 86 5f 07 00 00    	jbe    32c20 <_dtoa_r+0x8f0>
   324c1:	83 6d b8 01          	subl   $0x1,-0x48(%ebp)
   324c5:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
   324cc:	89 d0                	mov    %edx,%eax
   324ce:	29 d8                	sub    %ebx,%eax
   324d0:	83 e8 01             	sub    $0x1,%eax
   324d3:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
   324da:	89 45 ac             	mov    %eax,-0x54(%ebp)
   324dd:	0f 88 0d 07 00 00    	js     32bf0 <_dtoa_r+0x8c0>
   324e3:	8b 45 b8             	mov    -0x48(%ebp),%eax
   324e6:	85 c0                	test   %eax,%eax
   324e8:	0f 88 ea 06 00 00    	js     32bd8 <_dtoa_r+0x8a8>
   324ee:	01 45 ac             	add    %eax,-0x54(%ebp)
   324f1:	89 45 94             	mov    %eax,-0x6c(%ebp)
   324f4:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
   324fb:	83 7d 14 09          	cmpl   $0x9,0x14(%ebp)
   324ff:	0f 87 0b 03 00 00    	ja     32810 <_dtoa_r+0x4e0>
   32505:	83 7d 14 05          	cmpl   $0x5,0x14(%ebp)
   32509:	0f 8e 23 10 00 00    	jle    33532 <_dtoa_r+0x1202>
   3250f:	83 6d 14 04          	subl   $0x4,0x14(%ebp)
   32513:	31 c0                	xor    %eax,%eax
   32515:	83 7d 14 03          	cmpl   $0x3,0x14(%ebp)
   32519:	0f 84 43 0d 00 00    	je     33262 <_dtoa_r+0xf32>
   3251f:	0f 8e f3 00 00 00    	jle    32618 <_dtoa_r+0x2e8>
   32525:	83 7d 14 04          	cmpl   $0x4,0x14(%ebp)
   32529:	c7 45 98 01 00 00 00 	movl   $0x1,-0x68(%ebp)
   32530:	0f 84 f3 00 00 00    	je     32629 <_dtoa_r+0x2f9>
   32536:	83 7d 14 05          	cmpl   $0x5,0x14(%ebp)
   3253a:	0f 85 d7 02 00 00    	jne    32817 <_dtoa_r+0x4e7>
   32540:	8b 5d b8             	mov    -0x48(%ebp),%ebx
   32543:	03 5d 18             	add    0x18(%ebp),%ebx
   32546:	89 5d 90             	mov    %ebx,-0x70(%ebp)
   32549:	83 c3 01             	add    $0x1,%ebx
   3254c:	83 fb 0e             	cmp    $0xe,%ebx
   3254f:	0f 96 c2             	setbe  %dl
   32552:	85 db                	test   %ebx,%ebx
   32554:	89 5d a8             	mov    %ebx,-0x58(%ebp)
   32557:	0f 8e a7 08 00 00    	jle    32e04 <_dtoa_r+0xad4>
   3255d:	8b 5d a8             	mov    -0x58(%ebp),%ebx
   32560:	83 fb 0e             	cmp    $0xe,%ebx
   32563:	89 df                	mov    %ebx,%edi
   32565:	0f 96 45 b4          	setbe  -0x4c(%ebp)
   32569:	20 45 b4             	and    %al,-0x4c(%ebp)
   3256c:	e9 d6 00 00 00       	jmp    32647 <_dtoa_r+0x317>
   32571:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   32578:	8b 55 c0             	mov    -0x40(%ebp),%edx
   3257b:	8b 45 1c             	mov    0x1c(%ebp),%eax
   3257e:	85 d2                	test   %edx,%edx
   32580:	c7 00 0f 27 00 00    	movl   $0x270f,(%eax)
   32586:	b8 01 72 03 00       	mov    $0x37201,%eax
   3258b:	74 43                	je     325d0 <_dtoa_r+0x2a0>
   3258d:	8b 5d 24             	mov    0x24(%ebp),%ebx
   32590:	85 db                	test   %ebx,%ebx
   32592:	0f 84 30 fe ff ff    	je     323c8 <_dtoa_r+0x98>
   32598:	8b 75 24             	mov    0x24(%ebp),%esi
   3259b:	8d 50 08             	lea    0x8(%eax),%edx
   3259e:	80 78 03 00          	cmpb   $0x0,0x3(%eax)
   325a2:	8d 48 03             	lea    0x3(%eax),%ecx
   325a5:	0f 44 d1             	cmove  %ecx,%edx
   325a8:	89 16                	mov    %edx,(%esi)
   325aa:	81 c4 8c 00 00 00    	add    $0x8c,%esp
   325b0:	5b                   	pop    %ebx
   325b1:	5e                   	pop    %esi
   325b2:	5f                   	pop    %edi
   325b3:	5d                   	pop    %ebp
   325b4:	c3                   	ret    
   325b5:	8d 76 00             	lea    0x0(%esi),%esi
   325b8:	81 e7 ff ff ff 7f    	and    $0x7fffffff,%edi
   325be:	c7 03 01 00 00 00    	movl   $0x1,(%ebx)
   325c4:	89 7d c4             	mov    %edi,-0x3c(%ebp)
   325c7:	e9 b7 fd ff ff       	jmp    32383 <_dtoa_r+0x53>
   325cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   325d0:	81 e7 ff ff 0f 00    	and    $0xfffff,%edi
   325d6:	ba f8 71 03 00       	mov    $0x371f8,%edx
   325db:	0f 44 c2             	cmove  %edx,%eax
   325de:	eb ad                	jmp    3258d <_dtoa_r+0x25d>
   325e0:	8b 45 bc             	mov    -0x44(%ebp),%eax
   325e3:	81 eb ff 03 00 00    	sub    $0x3ff,%ebx
   325e9:	8b 55 e0             	mov    -0x20(%ebp),%edx
   325ec:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
   325f3:	25 ff ff 0f 00       	and    $0xfffff,%eax
   325f8:	0d 00 00 f0 3f       	or     $0x3ff00000,%eax
   325fd:	89 45 bc             	mov    %eax,-0x44(%ebp)
   32600:	e9 51 fe ff ff       	jmp    32456 <_dtoa_r+0x126>
   32605:	8d 76 00             	lea    0x0(%esi),%esi
   32608:	b8 70 70 03 00       	mov    $0x37070,%eax
   3260d:	e9 b6 fd ff ff       	jmp    323c8 <_dtoa_r+0x98>
   32612:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32618:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
   3261c:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
   32623:	0f 85 ee 01 00 00    	jne    32817 <_dtoa_r+0x4e7>
   32629:	8b 55 18             	mov    0x18(%ebp),%edx
   3262c:	85 d2                	test   %edx,%edx
   3262e:	0f 8e b6 07 00 00    	jle    32dea <_dtoa_r+0xaba>
   32634:	8b 7d 18             	mov    0x18(%ebp),%edi
   32637:	83 ff 0e             	cmp    $0xe,%edi
   3263a:	0f 96 45 b4          	setbe  -0x4c(%ebp)
   3263e:	20 45 b4             	and    %al,-0x4c(%ebp)
   32641:	89 7d 90             	mov    %edi,-0x70(%ebp)
   32644:	89 7d a8             	mov    %edi,-0x58(%ebp)
   32647:	83 ff 17             	cmp    $0x17,%edi
   3264a:	c7 46 44 00 00 00 00 	movl   $0x0,0x44(%esi)
   32651:	0f 86 e5 0e 00 00    	jbe    3353c <_dtoa_r+0x120c>
   32657:	b9 01 00 00 00       	mov    $0x1,%ecx
   3265c:	b8 04 00 00 00       	mov    $0x4,%eax
   32661:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   32668:	01 c0                	add    %eax,%eax
   3266a:	89 ca                	mov    %ecx,%edx
   3266c:	8d 58 14             	lea    0x14(%eax),%ebx
   3266f:	39 fb                	cmp    %edi,%ebx
   32671:	8d 49 01             	lea    0x1(%ecx),%ecx
   32674:	76 f2                	jbe    32668 <_dtoa_r+0x338>
   32676:	89 56 44             	mov    %edx,0x44(%esi)
   32679:	89 54 24 04          	mov    %edx,0x4(%esp)
   3267d:	89 34 24             	mov    %esi,(%esp)
   32680:	e8 2b 18 00 00       	call   33eb0 <_Balloc>
   32685:	80 7d b4 00          	cmpb   $0x0,-0x4c(%ebp)
   32689:	89 c7                	mov    %eax,%edi
   3268b:	89 46 40             	mov    %eax,0x40(%esi)
   3268e:	0f 84 bb 01 00 00    	je     3284f <_dtoa_r+0x51f>
   32694:	8b 5d b8             	mov    -0x48(%ebp),%ebx
   32697:	dd 45 c0             	fldl   -0x40(%ebp)
   3269a:	85 db                	test   %ebx,%ebx
   3269c:	0f 8e de 07 00 00    	jle    32e80 <_dtoa_r+0xb50>
   326a2:	89 d8                	mov    %ebx,%eax
   326a4:	83 e0 0f             	and    $0xf,%eax
   326a7:	dd 04 c5 00 73 03 00 	fldl   0x37300(,%eax,8)
   326ae:	89 d8                	mov    %ebx,%eax
   326b0:	c1 f8 04             	sar    $0x4,%eax
   326b3:	a8 10                	test   $0x10,%al
   326b5:	0f 84 cd 05 00 00    	je     32c88 <_dtoa_r+0x958>
   326bb:	dd 05 e0 72 03 00    	fldl   0x372e0
   326c1:	83 e0 0f             	and    $0xf,%eax
   326c4:	b9 03 00 00 00       	mov    $0x3,%ecx
   326c9:	d8 fa                	fdivr  %st(2),%st
   326cb:	85 c0                	test   %eax,%eax
   326cd:	74 22                	je     326f1 <_dtoa_r+0x3c1>
   326cf:	31 d2                	xor    %edx,%edx
   326d1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   326d8:	a8 01                	test   $0x1,%al
   326da:	74 0e                	je     326ea <_dtoa_r+0x3ba>
   326dc:	d9 c9                	fxch   %st(1)
   326de:	dc 0c d5 c0 72 03 00 	fmull  0x372c0(,%edx,8)
   326e5:	d9 c9                	fxch   %st(1)
   326e7:	83 c1 01             	add    $0x1,%ecx
   326ea:	83 c2 01             	add    $0x1,%edx
   326ed:	d1 f8                	sar    %eax
   326ef:	75 e7                	jne    326d8 <_dtoa_r+0x3a8>
   326f1:	de f1                	fdivp  %st,%st(1)
   326f3:	8b 45 9c             	mov    -0x64(%ebp),%eax
   326f6:	85 c0                	test   %eax,%eax
   326f8:	74 0a                	je     32704 <_dtoa_r+0x3d4>
   326fa:	d9 e8                	fld1   
   326fc:	df e9                	fucomip %st(1),%st
   326fe:	0f 87 92 0b 00 00    	ja     33296 <_dtoa_r+0xf66>
   32704:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
   32707:	8b 45 a8             	mov    -0x58(%ebp),%eax
   3270a:	db 45 d4             	fildl  -0x2c(%ebp)
   3270d:	d8 c9                	fmul   %st(1),%st
   3270f:	d8 05 14 72 03 00    	fadds  0x37214
   32715:	dd 5d c0             	fstpl  -0x40(%ebp)
   32718:	81 6d c4 00 00 40 03 	subl   $0x3400000,-0x3c(%ebp)
   3271f:	85 c0                	test   %eax,%eax
   32721:	0f 84 89 05 00 00    	je     32cb0 <_dtoa_r+0x980>
   32727:	8b 45 b8             	mov    -0x48(%ebp),%eax
   3272a:	8b 4d a8             	mov    -0x58(%ebp),%ecx
   3272d:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   32730:	8b 45 98             	mov    -0x68(%ebp),%eax
   32733:	85 c0                	test   %eax,%eax
   32735:	0f 84 b5 07 00 00    	je     32ef0 <_dtoa_r+0xbc0>
   3273b:	d9 05 1c 72 03 00    	flds   0x3721c
   32741:	8d 57 01             	lea    0x1(%edi),%edx
   32744:	dc 34 cd f8 72 03 00 	fdivl  0x372f8(,%ecx,8)
   3274b:	d9 7d d2             	fnstcw -0x2e(%ebp)
   3274e:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
   32752:	b4 0c                	mov    $0xc,%ah
   32754:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
   32758:	dc 65 c0             	fsubl  -0x40(%ebp)
   3275b:	d9 c9                	fxch   %st(1)
   3275d:	d9 6d d0             	fldcw  -0x30(%ebp)
   32760:	db 55 d4             	fistl  -0x2c(%ebp)
   32763:	d9 6d d2             	fldcw  -0x2e(%ebp)
   32766:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   32769:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   3276c:	83 c0 30             	add    $0x30,%eax
   3276f:	db 45 d4             	fildl  -0x2c(%ebp)
   32772:	de e9                	fsubrp %st,%st(1)
   32774:	d9 c9                	fxch   %st(1)
   32776:	88 07                	mov    %al,(%edi)
   32778:	db e9                	fucomi %st(1),%st
   3277a:	77 7f                	ja     327fb <_dtoa_r+0x4cb>
   3277c:	d9 c1                	fld    %st(1)
   3277e:	d8 2d 0c 72 03 00    	fsubrs 0x3720c
   32784:	d9 c9                	fxch   %st(1)
   32786:	db e9                	fucomi %st(1),%st
   32788:	dd d9                	fstp   %st(1)
   3278a:	0f 87 33 0c 00 00    	ja     333c3 <_dtoa_r+0x1093>
   32790:	83 f9 01             	cmp    $0x1,%ecx
   32793:	0f 8e c4 06 00 00    	jle    32e5d <_dtoa_r+0xb2d>
   32799:	01 f9                	add    %edi,%ecx
   3279b:	d9 05 10 72 03 00    	flds   0x37210
   327a1:	eb 25                	jmp    327c8 <_dtoa_r+0x498>
   327a3:	90                   	nop
   327a4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   327a8:	d9 c1                	fld    %st(1)
   327aa:	d8 2d 0c 72 03 00    	fsubrs 0x3720c
   327b0:	d9 c9                	fxch   %st(1)
   327b2:	db e9                	fucomi %st(1),%st
   327b4:	dd d9                	fstp   %st(1)
   327b6:	0f 87 14 0c 00 00    	ja     333d0 <_dtoa_r+0x10a0>
   327bc:	39 ca                	cmp    %ecx,%edx
   327be:	0f 84 a4 06 00 00    	je     32e68 <_dtoa_r+0xb38>
   327c4:	d9 c9                	fxch   %st(1)
   327c6:	d9 ca                	fxch   %st(2)
   327c8:	dc c9                	fmul   %st,%st(1)
   327ca:	83 c2 01             	add    $0x1,%edx
   327cd:	dc ca                	fmul   %st,%st(2)
   327cf:	d9 ca                	fxch   %st(2)
   327d1:	d9 6d d0             	fldcw  -0x30(%ebp)
   327d4:	db 55 d4             	fistl  -0x2c(%ebp)
   327d7:	d9 6d d2             	fldcw  -0x2e(%ebp)
   327da:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   327dd:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   327e0:	83 c0 30             	add    $0x30,%eax
   327e3:	db 45 d4             	fildl  -0x2c(%ebp)
   327e6:	de e9                	fsubrp %st,%st(1)
   327e8:	d9 c9                	fxch   %st(1)
   327ea:	88 42 ff             	mov    %al,-0x1(%edx)
   327ed:	db e9                	fucomi %st(1),%st
   327ef:	76 b7                	jbe    327a8 <_dtoa_r+0x478>
   327f1:	dd d8                	fstp   %st(0)
   327f3:	dd d8                	fstp   %st(0)
   327f5:	dd d8                	fstp   %st(0)
   327f7:	dd d8                	fstp   %st(0)
   327f9:	eb 06                	jmp    32801 <_dtoa_r+0x4d1>
   327fb:	dd d8                	fstp   %st(0)
   327fd:	dd d8                	fstp   %st(0)
   327ff:	dd d8                	fstp   %st(0)
   32801:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   32804:	89 fb                	mov    %edi,%ebx
   32806:	89 d7                	mov    %edx,%edi
   32808:	89 45 b8             	mov    %eax,-0x48(%ebp)
   3280b:	e9 70 03 00 00       	jmp    32b80 <_dtoa_r+0x850>
   32810:	c7 45 14 00 00 00 00 	movl   $0x0,0x14(%ebp)
   32817:	c7 46 44 00 00 00 00 	movl   $0x0,0x44(%esi)
   3281e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   32825:	00 
   32826:	89 34 24             	mov    %esi,(%esp)
   32829:	e8 82 16 00 00       	call   33eb0 <_Balloc>
   3282e:	c7 45 98 01 00 00 00 	movl   $0x1,-0x68(%ebp)
   32835:	c7 45 a8 ff ff ff ff 	movl   $0xffffffff,-0x58(%ebp)
   3283c:	c7 45 90 ff ff ff ff 	movl   $0xffffffff,-0x70(%ebp)
   32843:	c7 45 18 00 00 00 00 	movl   $0x0,0x18(%ebp)
   3284a:	89 c7                	mov    %eax,%edi
   3284c:	89 46 40             	mov    %eax,0x40(%esi)
   3284f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   32852:	85 c0                	test   %eax,%eax
   32854:	0f 88 2e 01 00 00    	js     32988 <_dtoa_r+0x658>
   3285a:	83 7d b8 0e          	cmpl   $0xe,-0x48(%ebp)
   3285e:	0f 8f 24 01 00 00    	jg     32988 <_dtoa_r+0x658>
   32864:	8b 45 b8             	mov    -0x48(%ebp),%eax
   32867:	dd 04 c5 00 73 03 00 	fldl   0x37300(,%eax,8)
   3286e:	8b 45 a8             	mov    -0x58(%ebp),%eax
   32871:	85 c0                	test   %eax,%eax
   32873:	7f 0e                	jg     32883 <_dtoa_r+0x553>
   32875:	8b 45 18             	mov    0x18(%ebp),%eax
   32878:	c1 e8 1f             	shr    $0x1f,%eax
   3287b:	84 c0                	test   %al,%al
   3287d:	0f 85 9d 07 00 00    	jne    33020 <_dtoa_r+0xcf0>
   32883:	dd 45 c0             	fldl   -0x40(%ebp)
   32886:	d9 c0                	fld    %st(0)
   32888:	d8 f2                	fdiv   %st(2),%st
   3288a:	d9 7d d2             	fnstcw -0x2e(%ebp)
   3288d:	83 7d a8 01          	cmpl   $0x1,-0x58(%ebp)
   32891:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
   32895:	b4 0c                	mov    $0xc,%ah
   32897:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
   3289b:	8d 47 01             	lea    0x1(%edi),%eax
   3289e:	89 45 c0             	mov    %eax,-0x40(%ebp)
   328a1:	d9 6d d0             	fldcw  -0x30(%ebp)
   328a4:	db 5d d4             	fistpl -0x2c(%ebp)
   328a7:	d9 6d d2             	fldcw  -0x2e(%ebp)
   328aa:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   328ad:	89 55 d4             	mov    %edx,-0x2c(%ebp)
   328b0:	8d 42 30             	lea    0x30(%edx),%eax
   328b3:	db 45 d4             	fildl  -0x2c(%ebp)
   328b6:	d8 ca                	fmul   %st(2),%st
   328b8:	88 07                	mov    %al,(%edi)
   328ba:	de e9                	fsubrp %st,%st(1)
   328bc:	74 66                	je     32924 <_dtoa_r+0x5f4>
   328be:	d8 0d 10 72 03 00    	fmuls  0x37210
   328c4:	d9 ee                	fldz   
   328c6:	d9 c9                	fxch   %st(1)
   328c8:	db e9                	fucomi %st(1),%st
   328ca:	dd d9                	fstp   %st(1)
   328cc:	0f 8b 33 0c 00 00    	jnp    33505 <_dtoa_r+0x11d5>
   328d2:	8b 5d a8             	mov    -0x58(%ebp),%ebx
   328d5:	8d 47 02             	lea    0x2(%edi),%eax
   328d8:	d9 05 10 72 03 00    	flds   0x37210
   328de:	01 fb                	add    %edi,%ebx
   328e0:	eb 19                	jmp    328fb <_dtoa_r+0x5cb>
   328e2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   328e8:	dc c9                	fmul   %st,%st(1)
   328ea:	83 c0 01             	add    $0x1,%eax
   328ed:	d9 ee                	fldz   
   328ef:	d9 ca                	fxch   %st(2)
   328f1:	db ea                	fucomi %st(2),%st
   328f3:	dd da                	fstp   %st(2)
   328f5:	0f 8b 73 09 00 00    	jnp    3326e <_dtoa_r+0xf3e>
   328fb:	d9 c1                	fld    %st(1)
   328fd:	39 d8                	cmp    %ebx,%eax
   328ff:	d8 f3                	fdiv   %st(3),%st
   32901:	89 45 c0             	mov    %eax,-0x40(%ebp)
   32904:	d9 6d d0             	fldcw  -0x30(%ebp)
   32907:	db 5d d4             	fistpl -0x2c(%ebp)
   3290a:	d9 6d d2             	fldcw  -0x2e(%ebp)
   3290d:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   32910:	89 55 d4             	mov    %edx,-0x2c(%ebp)
   32913:	8d 4a 30             	lea    0x30(%edx),%ecx
   32916:	db 45 d4             	fildl  -0x2c(%ebp)
   32919:	d8 cb                	fmul   %st(3),%st
   3291b:	88 48 ff             	mov    %cl,-0x1(%eax)
   3291e:	de ea                	fsubrp %st,%st(2)
   32920:	75 c6                	jne    328e8 <_dtoa_r+0x5b8>
   32922:	dd d8                	fstp   %st(0)
   32924:	d8 c0                	fadd   %st(0),%st
   32926:	db e9                	fucomi %st(1),%st
   32928:	77 1e                	ja     32948 <_dtoa_r+0x618>
   3292a:	d9 c9                	fxch   %st(1)
   3292c:	df e9                	fucomip %st(1),%st
   3292e:	dd d8                	fstp   %st(0)
   32930:	0f 8a 44 09 00 00    	jp     3327a <_dtoa_r+0xf4a>
   32936:	0f 85 3e 09 00 00    	jne    3327a <_dtoa_r+0xf4a>
   3293c:	83 e2 01             	and    $0x1,%edx
   3293f:	90                   	nop
   32940:	0f 84 34 09 00 00    	je     3327a <_dtoa_r+0xf4a>
   32946:	eb 04                	jmp    3294c <_dtoa_r+0x61c>
   32948:	dd d8                	fstp   %st(0)
   3294a:	dd d8                	fstp   %st(0)
   3294c:	8b 4d c0             	mov    -0x40(%ebp),%ecx
   3294f:	89 fb                	mov    %edi,%ebx
   32951:	0f b6 41 ff          	movzbl -0x1(%ecx),%eax
   32955:	89 cf                	mov    %ecx,%edi
   32957:	8b 4d b8             	mov    -0x48(%ebp),%ecx
   3295a:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
   3295d:	eb 0f                	jmp    3296e <_dtoa_r+0x63e>
   3295f:	90                   	nop
   32960:	39 d3                	cmp    %edx,%ebx
   32962:	0f 84 75 09 00 00    	je     332dd <_dtoa_r+0xfad>
   32968:	0f b6 42 ff          	movzbl -0x1(%edx),%eax
   3296c:	89 d7                	mov    %edx,%edi
   3296e:	3c 39                	cmp    $0x39,%al
   32970:	8d 57 ff             	lea    -0x1(%edi),%edx
   32973:	74 eb                	je     32960 <_dtoa_r+0x630>
   32975:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
   32978:	83 c0 01             	add    $0x1,%eax
   3297b:	88 02                	mov    %al,(%edx)
   3297d:	89 4d b8             	mov    %ecx,-0x48(%ebp)
   32980:	e9 fb 01 00 00       	jmp    32b80 <_dtoa_r+0x850>
   32985:	8d 76 00             	lea    0x0(%esi),%esi
   32988:	8b 4d 98             	mov    -0x68(%ebp),%ecx
   3298b:	85 c9                	test   %ecx,%ecx
   3298d:	0f 85 9d 02 00 00    	jne    32c30 <_dtoa_r+0x900>
   32993:	8b 55 b0             	mov    -0x50(%ebp),%edx
   32996:	8b 5d a0             	mov    -0x60(%ebp),%ebx
   32999:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
   329a0:	8b 45 ac             	mov    -0x54(%ebp),%eax
   329a3:	85 c0                	test   %eax,%eax
   329a5:	7e 14                	jle    329bb <_dtoa_r+0x68b>
   329a7:	85 db                	test   %ebx,%ebx
   329a9:	7e 10                	jle    329bb <_dtoa_r+0x68b>
   329ab:	8b 45 ac             	mov    -0x54(%ebp),%eax
   329ae:	39 d8                	cmp    %ebx,%eax
   329b0:	0f 4f c3             	cmovg  %ebx,%eax
   329b3:	29 45 a0             	sub    %eax,-0x60(%ebp)
   329b6:	29 c3                	sub    %eax,%ebx
   329b8:	29 45 ac             	sub    %eax,-0x54(%ebp)
   329bb:	8b 45 b0             	mov    -0x50(%ebp),%eax
   329be:	85 c0                	test   %eax,%eax
   329c0:	7e 61                	jle    32a23 <_dtoa_r+0x6f3>
   329c2:	8b 45 98             	mov    -0x68(%ebp),%eax
   329c5:	85 c0                	test   %eax,%eax
   329c7:	0f 84 72 04 00 00    	je     32e3f <_dtoa_r+0xb0f>
   329cd:	85 d2                	test   %edx,%edx
   329cf:	7e 47                	jle    32a18 <_dtoa_r+0x6e8>
   329d1:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   329d4:	89 54 24 08          	mov    %edx,0x8(%esp)
   329d8:	89 34 24             	mov    %esi,(%esp)
   329db:	89 55 88             	mov    %edx,-0x78(%ebp)
   329de:	89 44 24 04          	mov    %eax,0x4(%esp)
   329e2:	e8 49 1a 00 00       	call   34430 <__pow5mult>
   329e7:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
   329ea:	89 34 24             	mov    %esi,(%esp)
   329ed:	89 4c 24 08          	mov    %ecx,0x8(%esp)
   329f1:	89 44 24 04          	mov    %eax,0x4(%esp)
   329f5:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   329f8:	e8 63 18 00 00       	call   34260 <__multiply>
   329fd:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
   32a00:	89 34 24             	mov    %esi,(%esp)
   32a03:	89 4c 24 04          	mov    %ecx,0x4(%esp)
   32a07:	89 45 8c             	mov    %eax,-0x74(%ebp)
   32a0a:	e8 41 15 00 00       	call   33f50 <_Bfree>
   32a0f:	8b 45 8c             	mov    -0x74(%ebp),%eax
   32a12:	8b 55 88             	mov    -0x78(%ebp),%edx
   32a15:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   32a18:	8b 45 b0             	mov    -0x50(%ebp),%eax
   32a1b:	29 d0                	sub    %edx,%eax
   32a1d:	0f 85 1f 04 00 00    	jne    32e42 <_dtoa_r+0xb12>
   32a23:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   32a2a:	00 
   32a2b:	89 34 24             	mov    %esi,(%esp)
   32a2e:	e8 fd 17 00 00       	call   34230 <__i2b>
   32a33:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
   32a36:	85 c9                	test   %ecx,%ecx
   32a38:	89 45 b0             	mov    %eax,-0x50(%ebp)
   32a3b:	7e 13                	jle    32a50 <_dtoa_r+0x720>
   32a3d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
   32a41:	89 44 24 04          	mov    %eax,0x4(%esp)
   32a45:	89 34 24             	mov    %esi,(%esp)
   32a48:	e8 e3 19 00 00       	call   34430 <__pow5mult>
   32a4d:	89 45 b0             	mov    %eax,-0x50(%ebp)
   32a50:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
   32a54:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
   32a5b:	0f 8e f7 05 00 00    	jle    33058 <_dtoa_r+0xd28>
   32a61:	8b 45 94             	mov    -0x6c(%ebp),%eax
   32a64:	ba 01 00 00 00       	mov    $0x1,%edx
   32a69:	85 c0                	test   %eax,%eax
   32a6b:	0f 85 27 05 00 00    	jne    32f98 <_dtoa_r+0xc68>
   32a71:	8b 45 ac             	mov    -0x54(%ebp),%eax
   32a74:	01 d0                	add    %edx,%eax
   32a76:	83 e0 1f             	and    $0x1f,%eax
   32a79:	89 c2                	mov    %eax,%edx
   32a7b:	0f 84 57 03 00 00    	je     32dd8 <_dtoa_r+0xaa8>
   32a81:	b8 20 00 00 00       	mov    $0x20,%eax
   32a86:	29 d0                	sub    %edx,%eax
   32a88:	83 f8 04             	cmp    $0x4,%eax
   32a8b:	0f 8e 8c 0a 00 00    	jle    3351d <_dtoa_r+0x11ed>
   32a91:	b8 1c 00 00 00       	mov    $0x1c,%eax
   32a96:	29 d0                	sub    %edx,%eax
   32a98:	01 45 a0             	add    %eax,-0x60(%ebp)
   32a9b:	01 c3                	add    %eax,%ebx
   32a9d:	01 45 ac             	add    %eax,-0x54(%ebp)
   32aa0:	8b 45 a0             	mov    -0x60(%ebp),%eax
   32aa3:	85 c0                	test   %eax,%eax
   32aa5:	7e 16                	jle    32abd <_dtoa_r+0x78d>
   32aa7:	89 44 24 08          	mov    %eax,0x8(%esp)
   32aab:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   32aae:	89 34 24             	mov    %esi,(%esp)
   32ab1:	89 44 24 04          	mov    %eax,0x4(%esp)
   32ab5:	e8 96 1a 00 00       	call   34550 <__lshift>
   32aba:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   32abd:	8b 45 ac             	mov    -0x54(%ebp),%eax
   32ac0:	85 c0                	test   %eax,%eax
   32ac2:	7e 16                	jle    32ada <_dtoa_r+0x7aa>
   32ac4:	89 44 24 08          	mov    %eax,0x8(%esp)
   32ac8:	8b 45 b0             	mov    -0x50(%ebp),%eax
   32acb:	89 34 24             	mov    %esi,(%esp)
   32ace:	89 44 24 04          	mov    %eax,0x4(%esp)
   32ad2:	e8 79 1a 00 00       	call   34550 <__lshift>
   32ad7:	89 45 b0             	mov    %eax,-0x50(%ebp)
   32ada:	8b 45 9c             	mov    -0x64(%ebp),%eax
   32add:	85 c0                	test   %eax,%eax
   32adf:	0f 85 d3 04 00 00    	jne    32fb8 <_dtoa_r+0xc88>
   32ae5:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
   32ae9:	0f 8e 11 02 00 00    	jle    32d00 <_dtoa_r+0x9d0>
   32aef:	8b 45 a8             	mov    -0x58(%ebp),%eax
   32af2:	85 c0                	test   %eax,%eax
   32af4:	0f 8f 06 02 00 00    	jg     32d00 <_dtoa_r+0x9d0>
   32afa:	8b 45 a8             	mov    -0x58(%ebp),%eax
   32afd:	85 c0                	test   %eax,%eax
   32aff:	0f 85 e0 01 00 00    	jne    32ce5 <_dtoa_r+0x9b5>
   32b05:	8b 45 b0             	mov    -0x50(%ebp),%eax
   32b08:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   32b0f:	00 
   32b10:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
   32b17:	00 
   32b18:	89 34 24             	mov    %esi,(%esp)
   32b1b:	89 44 24 04          	mov    %eax,0x4(%esp)
   32b1f:	e8 4c 14 00 00       	call   33f70 <__multadd>
   32b24:	89 45 b0             	mov    %eax,-0x50(%ebp)
   32b27:	89 44 24 04          	mov    %eax,0x4(%esp)
   32b2b:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   32b2e:	89 04 24             	mov    %eax,(%esp)
   32b31:	e8 3a 1b 00 00       	call   34670 <__mcmp>
   32b36:	85 c0                	test   %eax,%eax
   32b38:	0f 8e a7 01 00 00    	jle    32ce5 <_dtoa_r+0x9b5>
   32b3e:	83 45 b8 01          	addl   $0x1,-0x48(%ebp)
   32b42:	89 fb                	mov    %edi,%ebx
   32b44:	83 c7 01             	add    $0x1,%edi
   32b47:	c6 47 ff 31          	movb   $0x31,-0x1(%edi)
   32b4b:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
   32b52:	8b 45 b0             	mov    -0x50(%ebp),%eax
   32b55:	89 34 24             	mov    %esi,(%esp)
   32b58:	89 44 24 04          	mov    %eax,0x4(%esp)
   32b5c:	e8 ef 13 00 00       	call   33f50 <_Bfree>
   32b61:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   32b64:	85 c0                	test   %eax,%eax
   32b66:	74 18                	je     32b80 <_dtoa_r+0x850>
   32b68:	39 45 c0             	cmp    %eax,-0x40(%ebp)
   32b6b:	0f 85 a7 02 00 00    	jne    32e18 <_dtoa_r+0xae8>
   32b71:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   32b74:	89 34 24             	mov    %esi,(%esp)
   32b77:	89 44 24 04          	mov    %eax,0x4(%esp)
   32b7b:	e8 d0 13 00 00       	call   33f50 <_Bfree>
   32b80:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   32b83:	89 34 24             	mov    %esi,(%esp)
   32b86:	89 44 24 04          	mov    %eax,0x4(%esp)
   32b8a:	e8 c1 13 00 00       	call   33f50 <_Bfree>
   32b8f:	8b 45 b8             	mov    -0x48(%ebp),%eax
   32b92:	8b 75 1c             	mov    0x1c(%ebp),%esi
   32b95:	c6 07 00             	movb   $0x0,(%edi)
   32b98:	83 c0 01             	add    $0x1,%eax
   32b9b:	89 06                	mov    %eax,(%esi)
   32b9d:	8b 45 24             	mov    0x24(%ebp),%eax
   32ba0:	85 c0                	test   %eax,%eax
   32ba2:	0f 84 90 02 00 00    	je     32e38 <_dtoa_r+0xb08>
   32ba8:	8b 45 24             	mov    0x24(%ebp),%eax
   32bab:	89 38                	mov    %edi,(%eax)
   32bad:	81 c4 8c 00 00 00    	add    $0x8c,%esp
   32bb3:	89 d8                	mov    %ebx,%eax
   32bb5:	5b                   	pop    %ebx
   32bb6:	5e                   	pop    %esi
   32bb7:	5f                   	pop    %edi
   32bb8:	5d                   	pop    %ebp
   32bb9:	c3                   	ret    
   32bba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32bc0:	db 45 b8             	fildl  -0x48(%ebp)
   32bc3:	df e9                	fucomip %st(1),%st
   32bc5:	dd d8                	fstp   %st(0)
   32bc7:	7a 06                	jp     32bcf <_dtoa_r+0x89f>
   32bc9:	0f 84 cc f8 ff ff    	je     3249b <_dtoa_r+0x16b>
   32bcf:	83 6d b8 01          	subl   $0x1,-0x48(%ebp)
   32bd3:	e9 c3 f8 ff ff       	jmp    3249b <_dtoa_r+0x16b>
   32bd8:	8b 45 b8             	mov    -0x48(%ebp),%eax
   32bdb:	29 45 a0             	sub    %eax,-0x60(%ebp)
   32bde:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
   32be5:	f7 d8                	neg    %eax
   32be7:	89 45 b0             	mov    %eax,-0x50(%ebp)
   32bea:	e9 0c f9 ff ff       	jmp    324fb <_dtoa_r+0x1cb>
   32bef:	90                   	nop
   32bf0:	f7 d8                	neg    %eax
   32bf2:	89 45 a0             	mov    %eax,-0x60(%ebp)
   32bf5:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
   32bfc:	e9 e2 f8 ff ff       	jmp    324e3 <_dtoa_r+0x1b3>
   32c01:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   32c08:	8b 45 c0             	mov    -0x40(%ebp),%eax
   32c0b:	b9 ee fb ff ff       	mov    $0xfffffbee,%ecx
   32c10:	29 d9                	sub    %ebx,%ecx
   32c12:	d3 e0                	shl    %cl,%eax
   32c14:	e9 1b f8 ff ff       	jmp    32434 <_dtoa_r+0x104>
   32c19:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   32c20:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
   32c27:	e9 a0 f8 ff ff       	jmp    324cc <_dtoa_r+0x19c>
   32c2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32c30:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
   32c34:	0f 8e fe 06 00 00    	jle    33338 <_dtoa_r+0x1008>
   32c3a:	8b 45 a8             	mov    -0x58(%ebp),%eax
   32c3d:	83 e8 01             	sub    $0x1,%eax
   32c40:	39 45 b0             	cmp    %eax,-0x50(%ebp)
   32c43:	0f 8c 3b 06 00 00    	jl     33284 <_dtoa_r+0xf54>
   32c49:	8b 55 b0             	mov    -0x50(%ebp),%edx
   32c4c:	29 c2                	sub    %eax,%edx
   32c4e:	8b 4d a8             	mov    -0x58(%ebp),%ecx
   32c51:	8b 5d a0             	mov    -0x60(%ebp),%ebx
   32c54:	85 c9                	test   %ecx,%ecx
   32c56:	89 c8                	mov    %ecx,%eax
   32c58:	0f 88 83 07 00 00    	js     333e1 <_dtoa_r+0x10b1>
   32c5e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   32c65:	00 
   32c66:	89 34 24             	mov    %esi,(%esp)
   32c69:	89 55 8c             	mov    %edx,-0x74(%ebp)
   32c6c:	01 45 a0             	add    %eax,-0x60(%ebp)
   32c6f:	01 45 ac             	add    %eax,-0x54(%ebp)
   32c72:	e8 b9 15 00 00       	call   34230 <__i2b>
   32c77:	8b 55 8c             	mov    -0x74(%ebp),%edx
   32c7a:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   32c7d:	e9 1e fd ff ff       	jmp    329a0 <_dtoa_r+0x670>
   32c82:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32c88:	d9 c1                	fld    %st(1)
   32c8a:	b9 02 00 00 00       	mov    $0x2,%ecx
   32c8f:	e9 37 fa ff ff       	jmp    326cb <_dtoa_r+0x39b>
   32c94:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
   32c97:	db 45 d4             	fildl  -0x2c(%ebp)
   32c9a:	d8 c9                	fmul   %st(1),%st
   32c9c:	d8 05 14 72 03 00    	fadds  0x37214
   32ca2:	dd 5d c0             	fstpl  -0x40(%ebp)
   32ca5:	81 6d c4 00 00 40 03 	subl   $0x3400000,-0x3c(%ebp)
   32cac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32cb0:	d8 25 18 72 03 00    	fsubs  0x37218
   32cb6:	dd 45 c0             	fldl   -0x40(%ebp)
   32cb9:	d9 c9                	fxch   %st(1)
   32cbb:	db e9                	fucomi %st(1),%st
   32cbd:	0f 87 0d 02 00 00    	ja     32ed0 <_dtoa_r+0xba0>
   32cc3:	d9 c9                	fxch   %st(1)
   32cc5:	d9 e0                	fchs   
   32cc7:	df e9                	fucomip %st(1),%st
   32cc9:	dd d8                	fstp   %st(0)
   32ccb:	0f 86 a7 01 00 00    	jbe    32e78 <_dtoa_r+0xb48>
   32cd1:	dd d8                	fstp   %st(0)
   32cd3:	eb 02                	jmp    32cd7 <_dtoa_r+0x9a7>
   32cd5:	dd d8                	fstp   %st(0)
   32cd7:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
   32cde:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
   32ce5:	8b 45 18             	mov    0x18(%ebp),%eax
   32ce8:	89 fb                	mov    %edi,%ebx
   32cea:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
   32cf1:	f7 d0                	not    %eax
   32cf3:	89 45 b8             	mov    %eax,-0x48(%ebp)
   32cf6:	e9 57 fe ff ff       	jmp    32b52 <_dtoa_r+0x822>
   32cfb:	90                   	nop
   32cfc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32d00:	8b 45 98             	mov    -0x68(%ebp),%eax
   32d03:	85 c0                	test   %eax,%eax
   32d05:	0f 85 c5 03 00 00    	jne    330d0 <_dtoa_r+0xda0>
   32d0b:	89 75 08             	mov    %esi,0x8(%ebp)
   32d0e:	bb 01 00 00 00       	mov    $0x1,%ebx
   32d13:	8b 75 a4             	mov    -0x5c(%ebp),%esi
   32d16:	eb 24                	jmp    32d3c <_dtoa_r+0xa0c>
   32d18:	8b 45 08             	mov    0x8(%ebp),%eax
   32d1b:	83 c3 01             	add    $0x1,%ebx
   32d1e:	89 74 24 04          	mov    %esi,0x4(%esp)
   32d22:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   32d29:	00 
   32d2a:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   32d31:	00 
   32d32:	89 04 24             	mov    %eax,(%esp)
   32d35:	e8 36 12 00 00       	call   33f70 <__multadd>
   32d3a:	89 c6                	mov    %eax,%esi
   32d3c:	8b 55 b0             	mov    -0x50(%ebp),%edx
   32d3f:	89 f0                	mov    %esi,%eax
   32d41:	e8 1a f4 ff ff       	call   32160 <quorem>
   32d46:	83 c0 30             	add    $0x30,%eax
   32d49:	3b 5d a8             	cmp    -0x58(%ebp),%ebx
   32d4c:	88 44 1f ff          	mov    %al,-0x1(%edi,%ebx,1)
   32d50:	7c c6                	jl     32d18 <_dtoa_r+0x9e8>
   32d52:	89 45 a0             	mov    %eax,-0x60(%ebp)
   32d55:	8b 45 a8             	mov    -0x58(%ebp),%eax
   32d58:	ba 01 00 00 00       	mov    $0x1,%edx
   32d5d:	89 75 a4             	mov    %esi,-0x5c(%ebp)
   32d60:	8b 75 08             	mov    0x8(%ebp),%esi
   32d63:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
   32d6a:	85 c0                	test   %eax,%eax
   32d6c:	0f 4f d0             	cmovg  %eax,%edx
   32d6f:	01 fa                	add    %edi,%edx
   32d71:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   32d74:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
   32d7b:	00 
   32d7c:	89 34 24             	mov    %esi,(%esp)
   32d7f:	89 55 ac             	mov    %edx,-0x54(%ebp)
   32d82:	89 44 24 04          	mov    %eax,0x4(%esp)
   32d86:	e8 c5 17 00 00       	call   34550 <__lshift>
   32d8b:	8b 5d b0             	mov    -0x50(%ebp),%ebx
   32d8e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
   32d92:	89 04 24             	mov    %eax,(%esp)
   32d95:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   32d98:	e8 d3 18 00 00       	call   34670 <__mcmp>
   32d9d:	8b 55 ac             	mov    -0x54(%ebp),%edx
   32da0:	83 f8 00             	cmp    $0x0,%eax
   32da3:	0f 8e 41 06 00 00    	jle    333ea <_dtoa_r+0x10ba>
   32da9:	0f b6 4a ff          	movzbl -0x1(%edx),%ecx
   32dad:	eb 0f                	jmp    32dbe <_dtoa_r+0xa8e>
   32daf:	90                   	nop
   32db0:	39 c7                	cmp    %eax,%edi
   32db2:	0f 84 70 05 00 00    	je     33328 <_dtoa_r+0xff8>
   32db8:	0f b6 48 ff          	movzbl -0x1(%eax),%ecx
   32dbc:	89 c2                	mov    %eax,%edx
   32dbe:	80 f9 39             	cmp    $0x39,%cl
   32dc1:	8d 42 ff             	lea    -0x1(%edx),%eax
   32dc4:	74 ea                	je     32db0 <_dtoa_r+0xa80>
   32dc6:	83 c1 01             	add    $0x1,%ecx
   32dc9:	89 fb                	mov    %edi,%ebx
   32dcb:	88 08                	mov    %cl,(%eax)
   32dcd:	89 d7                	mov    %edx,%edi
   32dcf:	e9 7e fd ff ff       	jmp    32b52 <_dtoa_r+0x822>
   32dd4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32dd8:	b8 1c 00 00 00       	mov    $0x1c,%eax
   32ddd:	01 45 a0             	add    %eax,-0x60(%ebp)
   32de0:	01 c3                	add    %eax,%ebx
   32de2:	01 45 ac             	add    %eax,-0x54(%ebp)
   32de5:	e9 b6 fc ff ff       	jmp    32aa0 <_dtoa_r+0x770>
   32dea:	ba 01 00 00 00       	mov    $0x1,%edx
   32def:	c7 45 90 01 00 00 00 	movl   $0x1,-0x70(%ebp)
   32df6:	c7 45 a8 01 00 00 00 	movl   $0x1,-0x58(%ebp)
   32dfd:	c7 45 18 01 00 00 00 	movl   $0x1,0x18(%ebp)
   32e04:	21 c2                	and    %eax,%edx
   32e06:	88 55 b4             	mov    %dl,-0x4c(%ebp)
   32e09:	31 d2                	xor    %edx,%edx
   32e0b:	c7 46 44 00 00 00 00 	movl   $0x0,0x44(%esi)
   32e12:	e9 62 f8 ff ff       	jmp    32679 <_dtoa_r+0x349>
   32e17:	90                   	nop
   32e18:	8b 55 c0             	mov    -0x40(%ebp),%edx
   32e1b:	85 d2                	test   %edx,%edx
   32e1d:	0f 84 4e fd ff ff    	je     32b71 <_dtoa_r+0x841>
   32e23:	8b 45 c0             	mov    -0x40(%ebp),%eax
   32e26:	89 34 24             	mov    %esi,(%esp)
   32e29:	89 44 24 04          	mov    %eax,0x4(%esp)
   32e2d:	e8 1e 11 00 00       	call   33f50 <_Bfree>
   32e32:	e9 3a fd ff ff       	jmp    32b71 <_dtoa_r+0x841>
   32e37:	90                   	nop
   32e38:	89 d8                	mov    %ebx,%eax
   32e3a:	e9 89 f5 ff ff       	jmp    323c8 <_dtoa_r+0x98>
   32e3f:	8b 45 b0             	mov    -0x50(%ebp),%eax
   32e42:	89 44 24 08          	mov    %eax,0x8(%esp)
   32e46:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   32e49:	89 34 24             	mov    %esi,(%esp)
   32e4c:	89 44 24 04          	mov    %eax,0x4(%esp)
   32e50:	e8 db 15 00 00       	call   34430 <__pow5mult>
   32e55:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   32e58:	e9 c6 fb ff ff       	jmp    32a23 <_dtoa_r+0x6f3>
   32e5d:	dd d8                	fstp   %st(0)
   32e5f:	dd d8                	fstp   %st(0)
   32e61:	eb 15                	jmp    32e78 <_dtoa_r+0xb48>
   32e63:	90                   	nop
   32e64:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32e68:	dd d8                	fstp   %st(0)
   32e6a:	dd d8                	fstp   %st(0)
   32e6c:	dd d8                	fstp   %st(0)
   32e6e:	eb 08                	jmp    32e78 <_dtoa_r+0xb48>
   32e70:	dd d8                	fstp   %st(0)
   32e72:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32e78:	dd 5d c0             	fstpl  -0x40(%ebp)
   32e7b:	e9 cf f9 ff ff       	jmp    3284f <_dtoa_r+0x51f>
   32e80:	8b 45 b8             	mov    -0x48(%ebp),%eax
   32e83:	f7 d8                	neg    %eax
   32e85:	0f 84 6a 04 00 00    	je     332f5 <_dtoa_r+0xfc5>
   32e8b:	89 c2                	mov    %eax,%edx
   32e8d:	b9 02 00 00 00       	mov    $0x2,%ecx
   32e92:	83 e2 0f             	and    $0xf,%edx
   32e95:	c1 f8 04             	sar    $0x4,%eax
   32e98:	dd 04 d5 00 73 03 00 	fldl   0x37300(,%edx,8)
   32e9f:	85 c0                	test   %eax,%eax
   32ea1:	d8 c9                	fmul   %st(1),%st
   32ea3:	0f 84 4a f8 ff ff    	je     326f3 <_dtoa_r+0x3c3>
   32ea9:	31 d2                	xor    %edx,%edx
   32eab:	90                   	nop
   32eac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32eb0:	a8 01                	test   $0x1,%al
   32eb2:	74 0a                	je     32ebe <_dtoa_r+0xb8e>
   32eb4:	dc 0c d5 c0 72 03 00 	fmull  0x372c0(,%edx,8)
   32ebb:	83 c1 01             	add    $0x1,%ecx
   32ebe:	83 c2 01             	add    $0x1,%edx
   32ec1:	d1 f8                	sar    %eax
   32ec3:	75 eb                	jne    32eb0 <_dtoa_r+0xb80>
   32ec5:	e9 29 f8 ff ff       	jmp    326f3 <_dtoa_r+0x3c3>
   32eca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32ed0:	dd d8                	fstp   %st(0)
   32ed2:	dd d8                	fstp   %st(0)
   32ed4:	dd d8                	fstp   %st(0)
   32ed6:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
   32edd:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
   32ee4:	e9 55 fc ff ff       	jmp    32b3e <_dtoa_r+0x80e>
   32ee9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   32ef0:	d9 7d d2             	fnstcw -0x2e(%ebp)
   32ef3:	8d 41 ff             	lea    -0x1(%ecx),%eax
   32ef6:	dd 45 c0             	fldl   -0x40(%ebp)
   32ef9:	dc 0c c5 00 73 03 00 	fmull  0x37300(,%eax,8)
   32f00:	d9 c9                	fxch   %st(1)
   32f02:	89 45 88             	mov    %eax,-0x78(%ebp)
   32f05:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
   32f09:	8d 57 01             	lea    0x1(%edi),%edx
   32f0c:	8d 1c 0f             	lea    (%edi,%ecx,1),%ebx
   32f0f:	b4 0c                	mov    $0xc,%ah
   32f11:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
   32f15:	d9 6d d0             	fldcw  -0x30(%ebp)
   32f18:	db 55 d4             	fistl  -0x2c(%ebp)
   32f1b:	d9 6d d2             	fldcw  -0x2e(%ebp)
   32f1e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   32f21:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   32f24:	83 c0 30             	add    $0x30,%eax
   32f27:	83 f9 01             	cmp    $0x1,%ecx
   32f2a:	db 45 d4             	fildl  -0x2c(%ebp)
   32f2d:	de e9                	fsubrp %st,%st(1)
   32f2f:	88 07                	mov    %al,(%edi)
   32f31:	89 d0                	mov    %edx,%eax
   32f33:	74 37                	je     32f6c <_dtoa_r+0xc3c>
   32f35:	d9 05 10 72 03 00    	flds   0x37210
   32f3b:	eb 05                	jmp    32f42 <_dtoa_r+0xc12>
   32f3d:	8d 76 00             	lea    0x0(%esi),%esi
   32f40:	d9 c9                	fxch   %st(1)
   32f42:	dc c9                	fmul   %st,%st(1)
   32f44:	d9 c9                	fxch   %st(1)
   32f46:	83 c0 01             	add    $0x1,%eax
   32f49:	d9 6d d0             	fldcw  -0x30(%ebp)
   32f4c:	db 55 d4             	fistl  -0x2c(%ebp)
   32f4f:	d9 6d d2             	fldcw  -0x2e(%ebp)
   32f52:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
   32f55:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
   32f58:	83 c1 30             	add    $0x30,%ecx
   32f5b:	39 d8                	cmp    %ebx,%eax
   32f5d:	db 45 d4             	fildl  -0x2c(%ebp)
   32f60:	de e9                	fsubrp %st,%st(1)
   32f62:	88 48 ff             	mov    %cl,-0x1(%eax)
   32f65:	75 d9                	jne    32f40 <_dtoa_r+0xc10>
   32f67:	dd d9                	fstp   %st(1)
   32f69:	03 55 88             	add    -0x78(%ebp),%edx
   32f6c:	d9 05 1c 72 03 00    	flds   0x3721c
   32f72:	d9 c2                	fld    %st(2)
   32f74:	d8 c1                	fadd   %st(1),%st
   32f76:	d9 ca                	fxch   %st(2)
   32f78:	db ea                	fucomi %st(2),%st
   32f7a:	dd da                	fstp   %st(2)
   32f7c:	0f 86 7f 03 00 00    	jbe    33301 <_dtoa_r+0xfd1>
   32f82:	dd d8                	fstp   %st(0)
   32f84:	dd d8                	fstp   %st(0)
   32f86:	dd d8                	fstp   %st(0)
   32f88:	dd d8                	fstp   %st(0)
   32f8a:	89 fb                	mov    %edi,%ebx
   32f8c:	0f b6 42 ff          	movzbl -0x1(%edx),%eax
   32f90:	89 d7                	mov    %edx,%edi
   32f92:	e9 d7 f9 ff ff       	jmp    3296e <_dtoa_r+0x63e>
   32f97:	90                   	nop
   32f98:	8b 4d b0             	mov    -0x50(%ebp),%ecx
   32f9b:	8b 41 10             	mov    0x10(%ecx),%eax
   32f9e:	8b 44 81 10          	mov    0x10(%ecx,%eax,4),%eax
   32fa2:	89 04 24             	mov    %eax,(%esp)
   32fa5:	e8 a6 11 00 00       	call   34150 <__hi0bits>
   32faa:	ba 20 00 00 00       	mov    $0x20,%edx
   32faf:	29 c2                	sub    %eax,%edx
   32fb1:	e9 bb fa ff ff       	jmp    32a71 <_dtoa_r+0x741>
   32fb6:	66 90                	xchg   %ax,%ax
   32fb8:	8b 45 b0             	mov    -0x50(%ebp),%eax
   32fbb:	89 44 24 04          	mov    %eax,0x4(%esp)
   32fbf:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   32fc2:	89 04 24             	mov    %eax,(%esp)
   32fc5:	e8 a6 16 00 00       	call   34670 <__mcmp>
   32fca:	85 c0                	test   %eax,%eax
   32fcc:	0f 89 13 fb ff ff    	jns    32ae5 <_dtoa_r+0x7b5>
   32fd2:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   32fd5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   32fdc:	00 
   32fdd:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   32fe4:	00 
   32fe5:	89 34 24             	mov    %esi,(%esp)
   32fe8:	89 44 24 04          	mov    %eax,0x4(%esp)
   32fec:	83 6d b8 01          	subl   $0x1,-0x48(%ebp)
   32ff0:	e8 7b 0f 00 00       	call   33f70 <__multadd>
   32ff5:	8b 4d 98             	mov    -0x68(%ebp),%ecx
   32ff8:	85 c9                	test   %ecx,%ecx
   32ffa:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   32ffd:	0f 85 8d 00 00 00    	jne    33090 <_dtoa_r+0xd60>
   33003:	83 7d 90 00          	cmpl   $0x0,-0x70(%ebp)
   33007:	8b 45 90             	mov    -0x70(%ebp),%eax
   3300a:	7f 0a                	jg     33016 <_dtoa_r+0xce6>
   3300c:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
   33010:	0f 8f ff 04 00 00    	jg     33515 <_dtoa_r+0x11e5>
   33016:	89 45 a8             	mov    %eax,-0x58(%ebp)
   33019:	e9 ed fc ff ff       	jmp    32d0b <_dtoa_r+0x9db>
   3301e:	66 90                	xchg   %ax,%ax
   33020:	8b 5d a8             	mov    -0x58(%ebp),%ebx
   33023:	85 db                	test   %ebx,%ebx
   33025:	0f 85 aa fc ff ff    	jne    32cd5 <_dtoa_r+0x9a5>
   3302b:	d8 0d 18 72 03 00    	fmuls  0x37218
   33031:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
   33038:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
   3303f:	dd 45 c0             	fldl   -0x40(%ebp)
   33042:	d9 c9                	fxch   %st(1)
   33044:	df e9                	fucomip %st(1),%st
   33046:	dd d8                	fstp   %st(0)
   33048:	0f 83 97 fc ff ff    	jae    32ce5 <_dtoa_r+0x9b5>
   3304e:	e9 eb fa ff ff       	jmp    32b3e <_dtoa_r+0x80e>
   33053:	90                   	nop
   33054:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33058:	8b 45 c0             	mov    -0x40(%ebp),%eax
   3305b:	85 c0                	test   %eax,%eax
   3305d:	0f 85 fe f9 ff ff    	jne    32a61 <_dtoa_r+0x731>
   33063:	8b 45 c4             	mov    -0x3c(%ebp),%eax
   33066:	a9 ff ff 0f 00       	test   $0xfffff,%eax
   3306b:	0f 85 f0 f9 ff ff    	jne    32a61 <_dtoa_r+0x731>
   33071:	a9 00 00 f0 7f       	test   $0x7ff00000,%eax
   33076:	0f 84 e5 f9 ff ff    	je     32a61 <_dtoa_r+0x731>
   3307c:	83 45 a0 01          	addl   $0x1,-0x60(%ebp)
   33080:	83 45 ac 01          	addl   $0x1,-0x54(%ebp)
   33084:	c7 45 8c 01 00 00 00 	movl   $0x1,-0x74(%ebp)
   3308b:	e9 d1 f9 ff ff       	jmp    32a61 <_dtoa_r+0x731>
   33090:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   33093:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   3309a:	00 
   3309b:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   330a2:	00 
   330a3:	89 34 24             	mov    %esi,(%esp)
   330a6:	89 44 24 04          	mov    %eax,0x4(%esp)
   330aa:	e8 c1 0e 00 00       	call   33f70 <__multadd>
   330af:	8b 55 90             	mov    -0x70(%ebp),%edx
   330b2:	85 d2                	test   %edx,%edx
   330b4:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   330b7:	8b 45 90             	mov    -0x70(%ebp),%eax
   330ba:	7f 0a                	jg     330c6 <_dtoa_r+0xd96>
   330bc:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
   330c0:	0f 8f 4f 04 00 00    	jg     33515 <_dtoa_r+0x11e5>
   330c6:	89 45 a8             	mov    %eax,-0x58(%ebp)
   330c9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   330d0:	85 db                	test   %ebx,%ebx
   330d2:	7e 16                	jle    330ea <_dtoa_r+0xdba>
   330d4:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   330d7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   330db:	89 34 24             	mov    %esi,(%esp)
   330de:	89 44 24 04          	mov    %eax,0x4(%esp)
   330e2:	e8 69 14 00 00       	call   34550 <__lshift>
   330e7:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   330ea:	8b 5d 8c             	mov    -0x74(%ebp),%ebx
   330ed:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   330f0:	85 db                	test   %ebx,%ebx
   330f2:	89 45 ac             	mov    %eax,-0x54(%ebp)
   330f5:	0f 85 11 03 00 00    	jne    3340c <_dtoa_r+0x10dc>
   330fb:	8b 45 a8             	mov    -0x58(%ebp),%eax
   330fe:	8d 5f 01             	lea    0x1(%edi),%ebx
   33101:	89 7d 8c             	mov    %edi,-0x74(%ebp)
   33104:	01 f8                	add    %edi,%eax
   33106:	8b 7d a4             	mov    -0x5c(%ebp),%edi
   33109:	89 45 90             	mov    %eax,-0x70(%ebp)
   3310c:	8b 45 c0             	mov    -0x40(%ebp),%eax
   3310f:	83 e0 01             	and    $0x1,%eax
   33112:	89 45 9c             	mov    %eax,-0x64(%ebp)
   33115:	eb 2e                	jmp    33145 <_dtoa_r+0xe15>
   33117:	90                   	nop
   33118:	e8 53 0e 00 00       	call   33f70 <__multadd>
   3311d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   33124:	00 
   33125:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   3312c:	00 
   3312d:	89 34 24             	mov    %esi,(%esp)
   33130:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   33133:	8b 45 ac             	mov    -0x54(%ebp),%eax
   33136:	89 44 24 04          	mov    %eax,0x4(%esp)
   3313a:	e8 31 0e 00 00       	call   33f70 <__multadd>
   3313f:	89 45 ac             	mov    %eax,-0x54(%ebp)
   33142:	83 c3 01             	add    $0x1,%ebx
   33145:	8b 55 b0             	mov    -0x50(%ebp),%edx
   33148:	8d 43 ff             	lea    -0x1(%ebx),%eax
   3314b:	89 45 98             	mov    %eax,-0x68(%ebp)
   3314e:	89 f8                	mov    %edi,%eax
   33150:	e8 0b f0 ff ff       	call   32160 <quorem>
   33155:	89 3c 24             	mov    %edi,(%esp)
   33158:	8d 48 30             	lea    0x30(%eax),%ecx
   3315b:	89 4d a0             	mov    %ecx,-0x60(%ebp)
   3315e:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
   33161:	89 45 94             	mov    %eax,-0x6c(%ebp)
   33164:	89 4c 24 04          	mov    %ecx,0x4(%esp)
   33168:	e8 03 15 00 00       	call   34670 <__mcmp>
   3316d:	8b 4d ac             	mov    -0x54(%ebp),%ecx
   33170:	89 34 24             	mov    %esi,(%esp)
   33173:	89 4c 24 08          	mov    %ecx,0x8(%esp)
   33177:	89 45 c0             	mov    %eax,-0x40(%ebp)
   3317a:	8b 45 b0             	mov    -0x50(%ebp),%eax
   3317d:	89 44 24 04          	mov    %eax,0x4(%esp)
   33181:	e8 3a 15 00 00       	call   346c0 <__mdiff>
   33186:	8b 48 0c             	mov    0xc(%eax),%ecx
   33189:	89 c2                	mov    %eax,%edx
   3318b:	85 c9                	test   %ecx,%ecx
   3318d:	0f 85 c5 00 00 00    	jne    33258 <_dtoa_r+0xf28>
   33193:	89 44 24 04          	mov    %eax,0x4(%esp)
   33197:	89 3c 24             	mov    %edi,(%esp)
   3319a:	89 45 a8             	mov    %eax,-0x58(%ebp)
   3319d:	e8 ce 14 00 00       	call   34670 <__mcmp>
   331a2:	8b 55 a8             	mov    -0x58(%ebp),%edx
   331a5:	89 54 24 04          	mov    %edx,0x4(%esp)
   331a9:	89 34 24             	mov    %esi,(%esp)
   331ac:	89 45 a8             	mov    %eax,-0x58(%ebp)
   331af:	e8 9c 0d 00 00       	call   33f50 <_Bfree>
   331b4:	8b 45 a8             	mov    -0x58(%ebp),%eax
   331b7:	89 c1                	mov    %eax,%ecx
   331b9:	0b 4d 14             	or     0x14(%ebp),%ecx
   331bc:	75 0b                	jne    331c9 <_dtoa_r+0xe99>
   331be:	8b 55 9c             	mov    -0x64(%ebp),%edx
   331c1:	85 d2                	test   %edx,%edx
   331c3:	0f 84 fb 02 00 00    	je     334c4 <_dtoa_r+0x1194>
   331c9:	8b 55 c0             	mov    -0x40(%ebp),%edx
   331cc:	85 d2                	test   %edx,%edx
   331ce:	0f 88 7f 01 00 00    	js     33353 <_dtoa_r+0x1023>
   331d4:	8b 4d c0             	mov    -0x40(%ebp),%ecx
   331d7:	0b 4d 14             	or     0x14(%ebp),%ecx
   331da:	75 0b                	jne    331e7 <_dtoa_r+0xeb7>
   331dc:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
   331df:	85 c9                	test   %ecx,%ecx
   331e1:	0f 84 6c 01 00 00    	je     33353 <_dtoa_r+0x1023>
   331e7:	85 c0                	test   %eax,%eax
   331e9:	0f 8f 82 02 00 00    	jg     33471 <_dtoa_r+0x1141>
   331ef:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
   331f3:	89 da                	mov    %ebx,%edx
   331f5:	3b 5d 90             	cmp    -0x70(%ebp),%ebx
   331f8:	88 43 ff             	mov    %al,-0x1(%ebx)
   331fb:	0f 84 8d 02 00 00    	je     3348e <_dtoa_r+0x115e>
   33201:	89 7c 24 04          	mov    %edi,0x4(%esp)
   33205:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   3320c:	00 
   3320d:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   33214:	00 
   33215:	89 34 24             	mov    %esi,(%esp)
   33218:	e8 53 0d 00 00       	call   33f70 <__multadd>
   3321d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   33224:	00 
   33225:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   3322c:	00 
   3322d:	89 34 24             	mov    %esi,(%esp)
   33230:	89 c7                	mov    %eax,%edi
   33232:	8b 45 ac             	mov    -0x54(%ebp),%eax
   33235:	39 45 b4             	cmp    %eax,-0x4c(%ebp)
   33238:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   3323b:	89 44 24 04          	mov    %eax,0x4(%esp)
   3323f:	0f 85 d3 fe ff ff    	jne    33118 <_dtoa_r+0xde8>
   33245:	e8 26 0d 00 00       	call   33f70 <__multadd>
   3324a:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   3324d:	89 45 ac             	mov    %eax,-0x54(%ebp)
   33250:	e9 ed fe ff ff       	jmp    33142 <_dtoa_r+0xe12>
   33255:	8d 76 00             	lea    0x0(%esi),%esi
   33258:	b8 01 00 00 00       	mov    $0x1,%eax
   3325d:	e9 43 ff ff ff       	jmp    331a5 <_dtoa_r+0xe75>
   33262:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
   33269:	e9 d2 f2 ff ff       	jmp    32540 <_dtoa_r+0x210>
   3326e:	0f 85 87 f6 ff ff    	jne    328fb <_dtoa_r+0x5cb>
   33274:	dd d8                	fstp   %st(0)
   33276:	dd d8                	fstp   %st(0)
   33278:	dd d8                	fstp   %st(0)
   3327a:	89 fb                	mov    %edi,%ebx
   3327c:	8b 7d c0             	mov    -0x40(%ebp),%edi
   3327f:	e9 fc f8 ff ff       	jmp    32b80 <_dtoa_r+0x850>
   33284:	89 c2                	mov    %eax,%edx
   33286:	2b 55 b0             	sub    -0x50(%ebp),%edx
   33289:	89 45 b0             	mov    %eax,-0x50(%ebp)
   3328c:	01 55 94             	add    %edx,-0x6c(%ebp)
   3328f:	31 d2                	xor    %edx,%edx
   33291:	e9 b8 f9 ff ff       	jmp    32c4e <_dtoa_r+0x91e>
   33296:	8b 45 a8             	mov    -0x58(%ebp),%eax
   33299:	85 c0                	test   %eax,%eax
   3329b:	0f 84 f3 f9 ff ff    	je     32c94 <_dtoa_r+0x964>
   332a1:	8b 45 90             	mov    -0x70(%ebp),%eax
   332a4:	85 c0                	test   %eax,%eax
   332a6:	0f 8e c4 fb ff ff    	jle    32e70 <_dtoa_r+0xb40>
   332ac:	d8 0d 10 72 03 00    	fmuls  0x37210
   332b2:	83 c1 01             	add    $0x1,%ecx
   332b5:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
   332b8:	8b 5d b8             	mov    -0x48(%ebp),%ebx
   332bb:	89 c1                	mov    %eax,%ecx
   332bd:	83 eb 01             	sub    $0x1,%ebx
   332c0:	db 45 d4             	fildl  -0x2c(%ebp)
   332c3:	d8 c9                	fmul   %st(1),%st
   332c5:	89 5d b4             	mov    %ebx,-0x4c(%ebp)
   332c8:	d8 05 14 72 03 00    	fadds  0x37214
   332ce:	dd 5d c0             	fstpl  -0x40(%ebp)
   332d1:	81 6d c4 00 00 40 03 	subl   $0x3400000,-0x3c(%ebp)
   332d8:	e9 53 f4 ff ff       	jmp    32730 <_dtoa_r+0x400>
   332dd:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   332e0:	c6 03 30             	movb   $0x30,(%ebx)
   332e3:	83 c0 01             	add    $0x1,%eax
   332e6:	89 45 b8             	mov    %eax,-0x48(%ebp)
   332e9:	b8 31 00 00 00       	mov    $0x31,%eax
   332ee:	88 02                	mov    %al,(%edx)
   332f0:	e9 8b f8 ff ff       	jmp    32b80 <_dtoa_r+0x850>
   332f5:	d9 c0                	fld    %st(0)
   332f7:	b9 02 00 00 00       	mov    $0x2,%ecx
   332fc:	e9 f2 f3 ff ff       	jmp    326f3 <_dtoa_r+0x3c3>
   33301:	de e2                	fsubp  %st,%st(2)
   33303:	d9 c9                	fxch   %st(1)
   33305:	df e9                	fucomip %st(1),%st
   33307:	dd d8                	fstp   %st(0)
   33309:	0f 86 69 fb ff ff    	jbe    32e78 <_dtoa_r+0xb48>
   3330f:	dd d8                	fstp   %st(0)
   33311:	eb 07                	jmp    3331a <_dtoa_r+0xfea>
   33313:	90                   	nop
   33314:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33318:	89 c2                	mov    %eax,%edx
   3331a:	80 7a ff 30          	cmpb   $0x30,-0x1(%edx)
   3331e:	8d 42 ff             	lea    -0x1(%edx),%eax
   33321:	74 f5                	je     33318 <_dtoa_r+0xfe8>
   33323:	e9 d9 f4 ff ff       	jmp    32801 <_dtoa_r+0x4d1>
   33328:	c6 07 31             	movb   $0x31,(%edi)
   3332b:	89 fb                	mov    %edi,%ebx
   3332d:	89 d7                	mov    %edx,%edi
   3332f:	83 45 b8 01          	addl   $0x1,-0x48(%ebp)
   33333:	e9 1a f8 ff ff       	jmp    32b52 <_dtoa_r+0x822>
   33338:	8b 55 8c             	mov    -0x74(%ebp),%edx
   3333b:	85 d2                	test   %edx,%edx
   3333d:	0f 84 1b 01 00 00    	je     3345e <_dtoa_r+0x112e>
   33343:	05 33 04 00 00       	add    $0x433,%eax
   33348:	8b 55 b0             	mov    -0x50(%ebp),%edx
   3334b:	8b 5d a0             	mov    -0x60(%ebp),%ebx
   3334e:	e9 0b f9 ff ff       	jmp    32c5e <_dtoa_r+0x92e>
   33353:	85 c0                	test   %eax,%eax
   33355:	89 7d a4             	mov    %edi,-0x5c(%ebp)
   33358:	8b 7d 8c             	mov    -0x74(%ebp),%edi
   3335b:	7e 45                	jle    333a2 <_dtoa_r+0x1072>
   3335d:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   33360:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
   33367:	00 
   33368:	89 34 24             	mov    %esi,(%esp)
   3336b:	89 44 24 04          	mov    %eax,0x4(%esp)
   3336f:	e8 dc 11 00 00       	call   34550 <__lshift>
   33374:	8b 5d b0             	mov    -0x50(%ebp),%ebx
   33377:	89 5c 24 04          	mov    %ebx,0x4(%esp)
   3337b:	89 04 24             	mov    %eax,(%esp)
   3337e:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   33381:	e8 ea 12 00 00       	call   34670 <__mcmp>
   33386:	83 f8 00             	cmp    $0x0,%eax
   33389:	0f 8e 5b 01 00 00    	jle    334ea <_dtoa_r+0x11ba>
   3338f:	83 7d a0 39          	cmpl   $0x39,-0x60(%ebp)
   33393:	0f 84 0c 01 00 00    	je     334a5 <_dtoa_r+0x1175>
   33399:	8b 45 94             	mov    -0x6c(%ebp),%eax
   3339c:	83 c0 31             	add    $0x31,%eax
   3339f:	89 45 a0             	mov    %eax,-0x60(%ebp)
   333a2:	8b 4d 98             	mov    -0x68(%ebp),%ecx
   333a5:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
   333a9:	89 cb                	mov    %ecx,%ebx
   333ab:	88 03                	mov    %al,(%ebx)
   333ad:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   333b0:	89 fb                	mov    %edi,%ebx
   333b2:	8d 79 01             	lea    0x1(%ecx),%edi
   333b5:	89 45 c0             	mov    %eax,-0x40(%ebp)
   333b8:	8b 45 ac             	mov    -0x54(%ebp),%eax
   333bb:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   333be:	e9 8f f7 ff ff       	jmp    32b52 <_dtoa_r+0x822>
   333c3:	dd d8                	fstp   %st(0)
   333c5:	dd d8                	fstp   %st(0)
   333c7:	dd d8                	fstp   %st(0)
   333c9:	eb 0d                	jmp    333d8 <_dtoa_r+0x10a8>
   333cb:	90                   	nop
   333cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   333d0:	dd d8                	fstp   %st(0)
   333d2:	dd d8                	fstp   %st(0)
   333d4:	dd d8                	fstp   %st(0)
   333d6:	dd d8                	fstp   %st(0)
   333d8:	89 fb                	mov    %edi,%ebx
   333da:	89 d7                	mov    %edx,%edi
   333dc:	e9 8d f5 ff ff       	jmp    3296e <_dtoa_r+0x63e>
   333e1:	29 cb                	sub    %ecx,%ebx
   333e3:	31 c0                	xor    %eax,%eax
   333e5:	e9 74 f8 ff ff       	jmp    32c5e <_dtoa_r+0x92e>
   333ea:	75 0e                	jne    333fa <_dtoa_r+0x10ca>
   333ec:	f6 45 a0 01          	testb  $0x1,-0x60(%ebp)
   333f0:	74 08                	je     333fa <_dtoa_r+0x10ca>
   333f2:	e9 b2 f9 ff ff       	jmp    32da9 <_dtoa_r+0xa79>
   333f7:	90                   	nop
   333f8:	89 c2                	mov    %eax,%edx
   333fa:	80 7a ff 30          	cmpb   $0x30,-0x1(%edx)
   333fe:	8d 42 ff             	lea    -0x1(%edx),%eax
   33401:	74 f5                	je     333f8 <_dtoa_r+0x10c8>
   33403:	89 fb                	mov    %edi,%ebx
   33405:	89 d7                	mov    %edx,%edi
   33407:	e9 46 f7 ff ff       	jmp    32b52 <_dtoa_r+0x822>
   3340c:	8b 40 04             	mov    0x4(%eax),%eax
   3340f:	89 34 24             	mov    %esi,(%esp)
   33412:	89 44 24 04          	mov    %eax,0x4(%esp)
   33416:	e8 95 0a 00 00       	call   33eb0 <_Balloc>
   3341b:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
   3341e:	89 c3                	mov    %eax,%ebx
   33420:	8b 41 10             	mov    0x10(%ecx),%eax
   33423:	8d 04 85 08 00 00 00 	lea    0x8(,%eax,4),%eax
   3342a:	89 44 24 08          	mov    %eax,0x8(%esp)
   3342e:	89 c8                	mov    %ecx,%eax
   33430:	83 c0 0c             	add    $0xc,%eax
   33433:	89 44 24 04          	mov    %eax,0x4(%esp)
   33437:	8d 43 0c             	lea    0xc(%ebx),%eax
   3343a:	89 04 24             	mov    %eax,(%esp)
   3343d:	e8 06 0a 00 00       	call   33e48 <memcpy>
   33442:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
   33449:	00 
   3344a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
   3344e:	89 34 24             	mov    %esi,(%esp)
   33451:	e8 fa 10 00 00       	call   34550 <__lshift>
   33456:	89 45 ac             	mov    %eax,-0x54(%ebp)
   33459:	e9 9d fc ff ff       	jmp    330fb <_dtoa_r+0xdcb>
   3345e:	b8 36 00 00 00       	mov    $0x36,%eax
   33463:	8b 55 b0             	mov    -0x50(%ebp),%edx
   33466:	2b 45 e0             	sub    -0x20(%ebp),%eax
   33469:	8b 5d a0             	mov    -0x60(%ebp),%ebx
   3346c:	e9 ed f7 ff ff       	jmp    32c5e <_dtoa_r+0x92e>
   33471:	83 7d a0 39          	cmpl   $0x39,-0x60(%ebp)
   33475:	89 7d a4             	mov    %edi,-0x5c(%ebp)
   33478:	8b 7d 8c             	mov    -0x74(%ebp),%edi
   3347b:	74 28                	je     334a5 <_dtoa_r+0x1175>
   3347d:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
   33481:	8b 4d 98             	mov    -0x68(%ebp),%ecx
   33484:	83 c0 01             	add    $0x1,%eax
   33487:	89 cb                	mov    %ecx,%ebx
   33489:	e9 1d ff ff ff       	jmp    333ab <_dtoa_r+0x107b>
   3348e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   33491:	89 7d a4             	mov    %edi,-0x5c(%ebp)
   33494:	8b 7d 8c             	mov    -0x74(%ebp),%edi
   33497:	89 45 c0             	mov    %eax,-0x40(%ebp)
   3349a:	8b 45 ac             	mov    -0x54(%ebp),%eax
   3349d:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   334a0:	e9 cc f8 ff ff       	jmp    32d71 <_dtoa_r+0xa41>
   334a5:	8b 45 98             	mov    -0x68(%ebp),%eax
   334a8:	b9 39 00 00 00       	mov    $0x39,%ecx
   334ad:	8d 50 01             	lea    0x1(%eax),%edx
   334b0:	c6 00 39             	movb   $0x39,(%eax)
   334b3:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   334b6:	89 45 c0             	mov    %eax,-0x40(%ebp)
   334b9:	8b 45 ac             	mov    -0x54(%ebp),%eax
   334bc:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   334bf:	e9 fa f8 ff ff       	jmp    32dbe <_dtoa_r+0xa8e>
   334c4:	8b 5d a0             	mov    -0x60(%ebp),%ebx
   334c7:	89 7d a4             	mov    %edi,-0x5c(%ebp)
   334ca:	8b 7d 8c             	mov    -0x74(%ebp),%edi
   334cd:	83 fb 39             	cmp    $0x39,%ebx
   334d0:	74 d3                	je     334a5 <_dtoa_r+0x1175>
   334d2:	8b 4d c0             	mov    -0x40(%ebp),%ecx
   334d5:	8b 45 94             	mov    -0x6c(%ebp),%eax
   334d8:	83 c0 31             	add    $0x31,%eax
   334db:	85 c9                	test   %ecx,%ecx
   334dd:	8b 4d 98             	mov    -0x68(%ebp),%ecx
   334e0:	0f 4e c3             	cmovle %ebx,%eax
   334e3:	89 cb                	mov    %ecx,%ebx
   334e5:	e9 c1 fe ff ff       	jmp    333ab <_dtoa_r+0x107b>
   334ea:	0f 85 b2 fe ff ff    	jne    333a2 <_dtoa_r+0x1072>
   334f0:	f6 45 a0 01          	testb  $0x1,-0x60(%ebp)
   334f4:	0f 84 a8 fe ff ff    	je     333a2 <_dtoa_r+0x1072>
   334fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   33500:	e9 8a fe ff ff       	jmp    3338f <_dtoa_r+0x105f>
   33505:	0f 85 c7 f3 ff ff    	jne    328d2 <_dtoa_r+0x5a2>
   3350b:	dd d8                	fstp   %st(0)
   3350d:	dd d8                	fstp   %st(0)
   3350f:	90                   	nop
   33510:	e9 65 fd ff ff       	jmp    3327a <_dtoa_r+0xf4a>
   33515:	89 45 a8             	mov    %eax,-0x58(%ebp)
   33518:	e9 dd f5 ff ff       	jmp    32afa <_dtoa_r+0x7ca>
   3351d:	8d 76 00             	lea    0x0(%esi),%esi
   33520:	0f 84 7a f5 ff ff    	je     32aa0 <_dtoa_r+0x770>
   33526:	b8 3c 00 00 00       	mov    $0x3c,%eax
   3352b:	29 d0                	sub    %edx,%eax
   3352d:	e9 ab f8 ff ff       	jmp    32ddd <_dtoa_r+0xaad>
   33532:	b8 01 00 00 00       	mov    $0x1,%eax
   33537:	e9 d9 ef ff ff       	jmp    32515 <_dtoa_r+0x1e5>
   3353c:	31 d2                	xor    %edx,%edx
   3353e:	e9 36 f1 ff ff       	jmp    32679 <_dtoa_r+0x349>
   33543:	66 90                	xchg   %ax,%ax
   33545:	66 90                	xchg   %ax,%ax
   33547:	66 90                	xchg   %ax,%ax
   33549:	66 90                	xchg   %ax,%ax
   3354b:	66 90                	xchg   %ax,%ax
   3354d:	66 90                	xchg   %ax,%ax
   3354f:	90                   	nop

00033550 <__getreent>:
   33550:	55                   	push   %ebp
   33551:	a1 20 90 03 00       	mov    0x39020,%eax
   33556:	89 e5                	mov    %esp,%ebp
   33558:	5d                   	pop    %ebp
   33559:	c3                   	ret    
   3355a:	66 90                	xchg   %ax,%ax
   3355c:	66 90                	xchg   %ax,%ax
   3355e:	66 90                	xchg   %ax,%ax

00033560 <_setlocale_r>:
   33560:	55                   	push   %ebp
   33561:	89 e5                	mov    %esp,%ebp
   33563:	53                   	push   %ebx
   33564:	83 ec 14             	sub    $0x14,%esp
   33567:	8b 5d 10             	mov    0x10(%ebp),%ebx
   3356a:	85 db                	test   %ebx,%ebx
   3356c:	74 14                	je     33582 <_setlocale_r+0x22>
   3356e:	c7 44 24 04 3e 72 03 	movl   $0x3723e,0x4(%esp)
   33575:	00 
   33576:	89 1c 24             	mov    %ebx,(%esp)
   33579:	e8 72 cc ff ff       	call   301f0 <strcmp>
   3357e:	85 c0                	test   %eax,%eax
   33580:	75 0e                	jne    33590 <_setlocale_r+0x30>
   33582:	83 c4 14             	add    $0x14,%esp
   33585:	b8 3c 72 03 00       	mov    $0x3723c,%eax
   3358a:	5b                   	pop    %ebx
   3358b:	5d                   	pop    %ebp
   3358c:	c3                   	ret    
   3358d:	8d 76 00             	lea    0x0(%esi),%esi
   33590:	c7 44 24 04 3c 72 03 	movl   $0x3723c,0x4(%esp)
   33597:	00 
   33598:	89 1c 24             	mov    %ebx,(%esp)
   3359b:	e8 50 cc ff ff       	call   301f0 <strcmp>
   335a0:	85 c0                	test   %eax,%eax
   335a2:	74 de                	je     33582 <_setlocale_r+0x22>
   335a4:	89 1c 24             	mov    %ebx,(%esp)
   335a7:	c7 44 24 04 6f 70 03 	movl   $0x3706f,0x4(%esp)
   335ae:	00 
   335af:	e8 3c cc ff ff       	call   301f0 <strcmp>
   335b4:	89 c2                	mov    %eax,%edx
   335b6:	31 c0                	xor    %eax,%eax
   335b8:	85 d2                	test   %edx,%edx
   335ba:	ba 3c 72 03 00       	mov    $0x3723c,%edx
   335bf:	0f 44 c2             	cmove  %edx,%eax
   335c2:	83 c4 14             	add    $0x14,%esp
   335c5:	5b                   	pop    %ebx
   335c6:	5d                   	pop    %ebp
   335c7:	c3                   	ret    
   335c8:	90                   	nop
   335c9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

000335d0 <__locale_charset>:
   335d0:	55                   	push   %ebp
   335d1:	b8 a0 94 03 00       	mov    $0x394a0,%eax
   335d6:	89 e5                	mov    %esp,%ebp
   335d8:	5d                   	pop    %ebp
   335d9:	c3                   	ret    
   335da:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

000335e0 <__locale_mb_cur_max>:
   335e0:	55                   	push   %ebp
   335e1:	a1 f8 94 03 00       	mov    0x394f8,%eax
   335e6:	89 e5                	mov    %esp,%ebp
   335e8:	5d                   	pop    %ebp
   335e9:	c3                   	ret    
   335ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

000335f0 <__locale_msgcharset>:
   335f0:	55                   	push   %ebp
   335f1:	b8 80 94 03 00       	mov    $0x39480,%eax
   335f6:	89 e5                	mov    %esp,%ebp
   335f8:	5d                   	pop    %ebp
   335f9:	c3                   	ret    
   335fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

00033600 <__locale_cjk_lang>:
   33600:	55                   	push   %ebp
   33601:	31 c0                	xor    %eax,%eax
   33603:	89 e5                	mov    %esp,%ebp
   33605:	5d                   	pop    %ebp
   33606:	c3                   	ret    
   33607:	89 f6                	mov    %esi,%esi
   33609:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00033610 <_localeconv_r>:
   33610:	55                   	push   %ebp
   33611:	b8 c0 94 03 00       	mov    $0x394c0,%eax
   33616:	89 e5                	mov    %esp,%ebp
   33618:	5d                   	pop    %ebp
   33619:	c3                   	ret    
   3361a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

00033620 <setlocale>:
   33620:	55                   	push   %ebp
   33621:	89 e5                	mov    %esp,%ebp
   33623:	83 ec 18             	sub    $0x18,%esp
   33626:	e8 25 ff ff ff       	call   33550 <__getreent>
   3362b:	8b 55 0c             	mov    0xc(%ebp),%edx
   3362e:	89 54 24 08          	mov    %edx,0x8(%esp)
   33632:	8b 55 08             	mov    0x8(%ebp),%edx
   33635:	89 04 24             	mov    %eax,(%esp)
   33638:	89 54 24 04          	mov    %edx,0x4(%esp)
   3363c:	e8 1f ff ff ff       	call   33560 <_setlocale_r>
   33641:	c9                   	leave  
   33642:	c3                   	ret    
   33643:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   33649:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00033650 <localeconv>:
   33650:	55                   	push   %ebp
   33651:	89 e5                	mov    %esp,%ebp
   33653:	83 ec 08             	sub    $0x8,%esp
   33656:	e8 f5 fe ff ff       	call   33550 <__getreent>
   3365b:	b8 c0 94 03 00       	mov    $0x394c0,%eax
   33660:	c9                   	leave  
   33661:	c3                   	ret    
   33662:	66 90                	xchg   %ax,%ax
   33664:	66 90                	xchg   %ax,%ax
   33666:	66 90                	xchg   %ax,%ax
   33668:	66 90                	xchg   %ax,%ax
   3366a:	66 90                	xchg   %ax,%ax
   3366c:	66 90                	xchg   %ax,%ax
   3366e:	66 90                	xchg   %ax,%ax

00033670 <_malloc_r>:
   33670:	55                   	push   %ebp
   33671:	89 e5                	mov    %esp,%ebp
   33673:	57                   	push   %edi
   33674:	56                   	push   %esi
   33675:	53                   	push   %ebx
   33676:	83 ec 2c             	sub    $0x2c,%esp
   33679:	8b 45 0c             	mov    0xc(%ebp),%eax
   3367c:	8d 50 0b             	lea    0xb(%eax),%edx
   3367f:	83 fa 16             	cmp    $0x16,%edx
   33682:	76 6c                	jbe    336f0 <_malloc_r+0x80>
   33684:	89 d7                	mov    %edx,%edi
   33686:	83 e7 f8             	and    $0xfffffff8,%edi
   33689:	89 fe                	mov    %edi,%esi
   3368b:	c1 ee 1f             	shr    $0x1f,%esi
   3368e:	39 c7                	cmp    %eax,%edi
   33690:	8b 45 08             	mov    0x8(%ebp),%eax
   33693:	89 f2                	mov    %esi,%edx
   33695:	72 67                	jb     336fe <_malloc_r+0x8e>
   33697:	84 d2                	test   %dl,%dl
   33699:	75 63                	jne    336fe <_malloc_r+0x8e>
   3369b:	89 04 24             	mov    %eax,(%esp)
   3369e:	e8 ed 07 00 00       	call   33e90 <__malloc_lock>
   336a3:	81 ff f7 01 00 00    	cmp    $0x1f7,%edi
   336a9:	77 65                	ja     33710 <_malloc_r+0xa0>
   336ab:	89 fa                	mov    %edi,%edx
   336ad:	c1 ea 03             	shr    $0x3,%edx
   336b0:	8d 04 d5 20 95 03 00 	lea    0x39520(,%edx,8),%eax
   336b7:	8b 58 0c             	mov    0xc(%eax),%ebx
   336ba:	39 c3                	cmp    %eax,%ebx
   336bc:	0f 84 3e 05 00 00    	je     33c00 <_malloc_r+0x590>
   336c2:	8b 43 04             	mov    0x4(%ebx),%eax
   336c5:	83 e0 fc             	and    $0xfffffffc,%eax
   336c8:	8b 53 0c             	mov    0xc(%ebx),%edx
   336cb:	8b 4b 08             	mov    0x8(%ebx),%ecx
   336ce:	89 51 0c             	mov    %edx,0xc(%ecx)
   336d1:	89 4a 08             	mov    %ecx,0x8(%edx)
   336d4:	83 4c 03 04 01       	orl    $0x1,0x4(%ebx,%eax,1)
   336d9:	8b 45 08             	mov    0x8(%ebp),%eax
   336dc:	89 04 24             	mov    %eax,(%esp)
   336df:	e8 bc 07 00 00       	call   33ea0 <__malloc_unlock>
   336e4:	8d 43 08             	lea    0x8(%ebx),%eax
   336e7:	83 c4 2c             	add    $0x2c,%esp
   336ea:	5b                   	pop    %ebx
   336eb:	5e                   	pop    %esi
   336ec:	5f                   	pop    %edi
   336ed:	5d                   	pop    %ebp
   336ee:	c3                   	ret    
   336ef:	90                   	nop
   336f0:	bf 10 00 00 00       	mov    $0x10,%edi
   336f5:	31 d2                	xor    %edx,%edx
   336f7:	39 c7                	cmp    %eax,%edi
   336f9:	8b 45 08             	mov    0x8(%ebp),%eax
   336fc:	73 99                	jae    33697 <_malloc_r+0x27>
   336fe:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
   33704:	83 c4 2c             	add    $0x2c,%esp
   33707:	31 c0                	xor    %eax,%eax
   33709:	5b                   	pop    %ebx
   3370a:	5e                   	pop    %esi
   3370b:	5f                   	pop    %edi
   3370c:	5d                   	pop    %ebp
   3370d:	c3                   	ret    
   3370e:	66 90                	xchg   %ax,%ax
   33710:	89 fe                	mov    %edi,%esi
   33712:	c1 ee 09             	shr    $0x9,%esi
   33715:	85 f6                	test   %esi,%esi
   33717:	0f 84 ab 01 00 00    	je     338c8 <_malloc_r+0x258>
   3371d:	83 fe 04             	cmp    $0x4,%esi
   33720:	0f 87 8a 03 00 00    	ja     33ab0 <_malloc_r+0x440>
   33726:	89 fe                	mov    %edi,%esi
   33728:	c1 ee 06             	shr    $0x6,%esi
   3372b:	83 c6 38             	add    $0x38,%esi
   3372e:	8d 04 36             	lea    (%esi,%esi,1),%eax
   33731:	8d 0c 85 20 95 03 00 	lea    0x39520(,%eax,4),%ecx
   33738:	8b 59 0c             	mov    0xc(%ecx),%ebx
   3373b:	39 d9                	cmp    %ebx,%ecx
   3373d:	75 18                	jne    33757 <_malloc_r+0xe7>
   3373f:	eb 28                	jmp    33769 <_malloc_r+0xf9>
   33741:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   33748:	85 d2                	test   %edx,%edx
   3374a:	0f 89 78 ff ff ff    	jns    336c8 <_malloc_r+0x58>
   33750:	8b 5b 0c             	mov    0xc(%ebx),%ebx
   33753:	39 d9                	cmp    %ebx,%ecx
   33755:	74 12                	je     33769 <_malloc_r+0xf9>
   33757:	8b 43 04             	mov    0x4(%ebx),%eax
   3375a:	83 e0 fc             	and    $0xfffffffc,%eax
   3375d:	89 c2                	mov    %eax,%edx
   3375f:	29 fa                	sub    %edi,%edx
   33761:	83 fa 0f             	cmp    $0xf,%edx
   33764:	7e e2                	jle    33748 <_malloc_r+0xd8>
   33766:	83 ee 01             	sub    $0x1,%esi
   33769:	8d 46 01             	lea    0x1(%esi),%eax
   3376c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   3376f:	8b 1d 30 95 03 00    	mov    0x39530,%ebx
   33775:	a1 24 95 03 00       	mov    0x39524,%eax
   3377a:	81 fb 28 95 03 00    	cmp    $0x39528,%ebx
   33780:	74 6b                	je     337ed <_malloc_r+0x17d>
   33782:	8b 73 04             	mov    0x4(%ebx),%esi
   33785:	83 e6 fc             	and    $0xfffffffc,%esi
   33788:	89 f0                	mov    %esi,%eax
   3378a:	29 f8                	sub    %edi,%eax
   3378c:	83 f8 0f             	cmp    $0xf,%eax
   3378f:	0f 8f a3 03 00 00    	jg     33b38 <_malloc_r+0x4c8>
   33795:	85 c0                	test   %eax,%eax
   33797:	c7 05 34 95 03 00 28 	movl   $0x39528,0x39534
   3379e:	95 03 00 
   337a1:	c7 05 30 95 03 00 28 	movl   $0x39528,0x39530
   337a8:	95 03 00 
   337ab:	0f 89 27 01 00 00    	jns    338d8 <_malloc_r+0x268>
   337b1:	81 fe ff 01 00 00    	cmp    $0x1ff,%esi
   337b7:	0f 87 1b 03 00 00    	ja     33ad8 <_malloc_r+0x468>
   337bd:	c1 ee 03             	shr    $0x3,%esi
   337c0:	b8 01 00 00 00       	mov    $0x1,%eax
   337c5:	89 f1                	mov    %esi,%ecx
   337c7:	8d 14 f5 20 95 03 00 	lea    0x39520(,%esi,8),%edx
   337ce:	c1 f9 02             	sar    $0x2,%ecx
   337d1:	d3 e0                	shl    %cl,%eax
   337d3:	8b 4a 08             	mov    0x8(%edx),%ecx
   337d6:	0b 05 24 95 03 00    	or     0x39524,%eax
   337dc:	89 53 0c             	mov    %edx,0xc(%ebx)
   337df:	89 4b 08             	mov    %ecx,0x8(%ebx)
   337e2:	a3 24 95 03 00       	mov    %eax,0x39524
   337e7:	89 5a 08             	mov    %ebx,0x8(%edx)
   337ea:	89 59 0c             	mov    %ebx,0xc(%ecx)
   337ed:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   337f0:	be 01 00 00 00       	mov    $0x1,%esi
   337f5:	c1 f9 02             	sar    $0x2,%ecx
   337f8:	d3 e6                	shl    %cl,%esi
   337fa:	39 c6                	cmp    %eax,%esi
   337fc:	0f 87 f6 00 00 00    	ja     338f8 <_malloc_r+0x288>
   33802:	85 f0                	test   %esi,%eax
   33804:	0f 85 76 03 00 00    	jne    33b80 <_malloc_r+0x510>
   3380a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
   3380d:	01 f6                	add    %esi,%esi
   3380f:	83 e2 fc             	and    $0xfffffffc,%edx
   33812:	85 f0                	test   %esi,%eax
   33814:	8d 4a 04             	lea    0x4(%edx),%ecx
   33817:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   3381a:	0f 85 60 03 00 00    	jne    33b80 <_malloc_r+0x510>
   33820:	89 ca                	mov    %ecx,%edx
   33822:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   33828:	01 f6                	add    %esi,%esi
   3382a:	83 c2 04             	add    $0x4,%edx
   3382d:	85 f0                	test   %esi,%eax
   3382f:	74 f7                	je     33828 <_malloc_r+0x1b8>
   33831:	89 55 e4             	mov    %edx,-0x1c(%ebp)
   33834:	89 75 dc             	mov    %esi,-0x24(%ebp)
   33837:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   3383a:	8d 34 c5 20 95 03 00 	lea    0x39520(,%eax,8),%esi
   33841:	89 f1                	mov    %esi,%ecx
   33843:	89 45 e0             	mov    %eax,-0x20(%ebp)
   33846:	8b 59 0c             	mov    0xc(%ecx),%ebx
   33849:	39 d9                	cmp    %ebx,%ecx
   3384b:	75 1e                	jne    3386b <_malloc_r+0x1fb>
   3384d:	e9 36 03 00 00       	jmp    33b88 <_malloc_r+0x518>
   33852:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   33858:	85 d2                	test   %edx,%edx
   3385a:	0f 89 c0 03 00 00    	jns    33c20 <_malloc_r+0x5b0>
   33860:	8b 5b 0c             	mov    0xc(%ebx),%ebx
   33863:	39 d9                	cmp    %ebx,%ecx
   33865:	0f 84 1d 03 00 00    	je     33b88 <_malloc_r+0x518>
   3386b:	8b 43 04             	mov    0x4(%ebx),%eax
   3386e:	83 e0 fc             	and    $0xfffffffc,%eax
   33871:	89 c2                	mov    %eax,%edx
   33873:	29 fa                	sub    %edi,%edx
   33875:	83 fa 0f             	cmp    $0xf,%edx
   33878:	7e de                	jle    33858 <_malloc_r+0x1e8>
   3387a:	8b 4b 0c             	mov    0xc(%ebx),%ecx
   3387d:	8d 04 3b             	lea    (%ebx,%edi,1),%eax
   33880:	83 cf 01             	or     $0x1,%edi
   33883:	8b 73 08             	mov    0x8(%ebx),%esi
   33886:	89 7b 04             	mov    %edi,0x4(%ebx)
   33889:	89 4e 0c             	mov    %ecx,0xc(%esi)
   3388c:	89 71 08             	mov    %esi,0x8(%ecx)
   3388f:	89 d1                	mov    %edx,%ecx
   33891:	83 c9 01             	or     $0x1,%ecx
   33894:	a3 34 95 03 00       	mov    %eax,0x39534
   33899:	a3 30 95 03 00       	mov    %eax,0x39530
   3389e:	c7 40 0c 28 95 03 00 	movl   $0x39528,0xc(%eax)
   338a5:	c7 40 08 28 95 03 00 	movl   $0x39528,0x8(%eax)
   338ac:	89 48 04             	mov    %ecx,0x4(%eax)
   338af:	89 14 10             	mov    %edx,(%eax,%edx,1)
   338b2:	8b 45 08             	mov    0x8(%ebp),%eax
   338b5:	89 04 24             	mov    %eax,(%esp)
   338b8:	e8 e3 05 00 00       	call   33ea0 <__malloc_unlock>
   338bd:	8d 43 08             	lea    0x8(%ebx),%eax
   338c0:	e9 22 fe ff ff       	jmp    336e7 <_malloc_r+0x77>
   338c5:	8d 76 00             	lea    0x0(%esi),%esi
   338c8:	b8 7e 00 00 00       	mov    $0x7e,%eax
   338cd:	be 3f 00 00 00       	mov    $0x3f,%esi
   338d2:	e9 5a fe ff ff       	jmp    33731 <_malloc_r+0xc1>
   338d7:	90                   	nop
   338d8:	8b 45 08             	mov    0x8(%ebp),%eax
   338db:	83 4c 33 04 01       	orl    $0x1,0x4(%ebx,%esi,1)
   338e0:	89 04 24             	mov    %eax,(%esp)
   338e3:	e8 b8 05 00 00       	call   33ea0 <__malloc_unlock>
   338e8:	83 c4 2c             	add    $0x2c,%esp
   338eb:	8d 43 08             	lea    0x8(%ebx),%eax
   338ee:	5b                   	pop    %ebx
   338ef:	5e                   	pop    %esi
   338f0:	5f                   	pop    %edi
   338f1:	5d                   	pop    %ebp
   338f2:	c3                   	ret    
   338f3:	90                   	nop
   338f4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   338f8:	8b 1d 28 95 03 00    	mov    0x39528,%ebx
   338fe:	8b 73 04             	mov    0x4(%ebx),%esi
   33901:	83 e6 fc             	and    $0xfffffffc,%esi
   33904:	39 f7                	cmp    %esi,%edi
   33906:	77 0d                	ja     33915 <_malloc_r+0x2a5>
   33908:	89 f0                	mov    %esi,%eax
   3390a:	29 f8                	sub    %edi,%eax
   3390c:	83 f8 0f             	cmp    $0xf,%eax
   3390f:	0f 8f 6b 01 00 00    	jg     33a80 <_malloc_r+0x410>
   33915:	8b 0d 90 99 03 00    	mov    0x39990,%ecx
   3391b:	8d 04 33             	lea    (%ebx,%esi,1),%eax
   3391e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   33921:	01 f9                	add    %edi,%ecx
   33923:	8d 81 0f 10 00 00    	lea    0x100f(%ecx),%eax
   33929:	83 c1 10             	add    $0x10,%ecx
   3392c:	25 00 f0 ff ff       	and    $0xfffff000,%eax
   33931:	83 3d 00 95 03 00 ff 	cmpl   $0xffffffff,0x39500
   33938:	0f 44 c1             	cmove  %ecx,%eax
   3393b:	89 45 e0             	mov    %eax,-0x20(%ebp)
   3393e:	89 44 24 04          	mov    %eax,0x4(%esp)
   33942:	8b 45 08             	mov    0x8(%ebp),%eax
   33945:	89 04 24             	mov    %eax,(%esp)
   33948:	e8 43 13 00 00       	call   34c90 <_sbrk_r>
   3394d:	83 f8 ff             	cmp    $0xffffffff,%eax
   33950:	89 c1                	mov    %eax,%ecx
   33952:	0f 84 17 03 00 00    	je     33c6f <_malloc_r+0x5ff>
   33958:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
   3395b:	0f 87 02 03 00 00    	ja     33c63 <_malloc_r+0x5f3>
   33961:	8b 55 e0             	mov    -0x20(%ebp),%edx
   33964:	03 15 60 99 03 00    	add    0x39960,%edx
   3396a:	39 4d e4             	cmp    %ecx,-0x1c(%ebp)
   3396d:	89 15 60 99 03 00    	mov    %edx,0x39960
   33973:	0f 84 a9 03 00 00    	je     33d22 <_malloc_r+0x6b2>
   33979:	83 3d 00 95 03 00 ff 	cmpl   $0xffffffff,0x39500
   33980:	0f 84 ca 03 00 00    	je     33d50 <_malloc_r+0x6e0>
   33986:	89 c8                	mov    %ecx,%eax
   33988:	2b 45 e4             	sub    -0x1c(%ebp),%eax
   3398b:	01 d0                	add    %edx,%eax
   3398d:	a3 60 99 03 00       	mov    %eax,0x39960
   33992:	89 c8                	mov    %ecx,%eax
   33994:	ba 00 10 00 00       	mov    $0x1000,%edx
   33999:	83 e0 07             	and    $0x7,%eax
   3399c:	74 0c                	je     339aa <_malloc_r+0x33a>
   3399e:	29 c1                	sub    %eax,%ecx
   339a0:	ba 08 10 00 00       	mov    $0x1008,%edx
   339a5:	8d 49 08             	lea    0x8(%ecx),%ecx
   339a8:	29 c2                	sub    %eax,%edx
   339aa:	8b 45 e0             	mov    -0x20(%ebp),%eax
   339ad:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   339b0:	01 c8                	add    %ecx,%eax
   339b2:	25 ff 0f 00 00       	and    $0xfff,%eax
   339b7:	29 c2                	sub    %eax,%edx
   339b9:	8b 45 08             	mov    0x8(%ebp),%eax
   339bc:	89 54 24 04          	mov    %edx,0x4(%esp)
   339c0:	89 55 e0             	mov    %edx,-0x20(%ebp)
   339c3:	89 04 24             	mov    %eax,(%esp)
   339c6:	e8 c5 12 00 00       	call   34c90 <_sbrk_r>
   339cb:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   339ce:	83 f8 ff             	cmp    $0xffffffff,%eax
   339d1:	0f 84 6d 03 00 00    	je     33d44 <_malloc_r+0x6d4>
   339d7:	8b 55 e0             	mov    -0x20(%ebp),%edx
   339da:	29 c8                	sub    %ecx,%eax
   339dc:	01 d0                	add    %edx,%eax
   339de:	83 c8 01             	or     $0x1,%eax
   339e1:	03 15 60 99 03 00    	add    0x39960,%edx
   339e7:	81 fb 20 95 03 00    	cmp    $0x39520,%ebx
   339ed:	89 0d 28 95 03 00    	mov    %ecx,0x39528
   339f3:	89 41 04             	mov    %eax,0x4(%ecx)
   339f6:	89 15 60 99 03 00    	mov    %edx,0x39960
   339fc:	0f 84 f2 02 00 00    	je     33cf4 <_malloc_r+0x684>
   33a02:	83 fe 0f             	cmp    $0xf,%esi
   33a05:	0f 86 8d 02 00 00    	jbe    33c98 <_malloc_r+0x628>
   33a0b:	8b 43 04             	mov    0x4(%ebx),%eax
   33a0e:	83 ee 0c             	sub    $0xc,%esi
   33a11:	83 e6 f8             	and    $0xfffffff8,%esi
   33a14:	83 e0 01             	and    $0x1,%eax
   33a17:	09 f0                	or     %esi,%eax
   33a19:	83 fe 0f             	cmp    $0xf,%esi
   33a1c:	89 43 04             	mov    %eax,0x4(%ebx)
   33a1f:	a1 28 95 03 00       	mov    0x39528,%eax
   33a24:	c7 44 33 04 05 00 00 	movl   $0x5,0x4(%ebx,%esi,1)
   33a2b:	00 
   33a2c:	c7 44 33 08 05 00 00 	movl   $0x5,0x8(%ebx,%esi,1)
   33a33:	00 
   33a34:	0f 87 a2 02 00 00    	ja     33cdc <_malloc_r+0x66c>
   33a3a:	3b 15 8c 99 03 00    	cmp    0x3998c,%edx
   33a40:	76 06                	jbe    33a48 <_malloc_r+0x3d8>
   33a42:	89 15 8c 99 03 00    	mov    %edx,0x3998c
   33a48:	3b 15 88 99 03 00    	cmp    0x39988,%edx
   33a4e:	76 06                	jbe    33a56 <_malloc_r+0x3e6>
   33a50:	89 15 88 99 03 00    	mov    %edx,0x39988
   33a56:	8b 50 04             	mov    0x4(%eax),%edx
   33a59:	89 c3                	mov    %eax,%ebx
   33a5b:	83 e2 fc             	and    $0xfffffffc,%edx
   33a5e:	89 d0                	mov    %edx,%eax
   33a60:	29 f8                	sub    %edi,%eax
   33a62:	39 d7                	cmp    %edx,%edi
   33a64:	77 05                	ja     33a6b <_malloc_r+0x3fb>
   33a66:	83 f8 0f             	cmp    $0xf,%eax
   33a69:	7f 15                	jg     33a80 <_malloc_r+0x410>
   33a6b:	8b 45 08             	mov    0x8(%ebp),%eax
   33a6e:	89 04 24             	mov    %eax,(%esp)
   33a71:	e8 2a 04 00 00       	call   33ea0 <__malloc_unlock>
   33a76:	31 c0                	xor    %eax,%eax
   33a78:	e9 6a fc ff ff       	jmp    336e7 <_malloc_r+0x77>
   33a7d:	8d 76 00             	lea    0x0(%esi),%esi
   33a80:	89 fa                	mov    %edi,%edx
   33a82:	83 c8 01             	or     $0x1,%eax
   33a85:	83 ca 01             	or     $0x1,%edx
   33a88:	89 53 04             	mov    %edx,0x4(%ebx)
   33a8b:	8d 14 3b             	lea    (%ebx,%edi,1),%edx
   33a8e:	89 15 28 95 03 00    	mov    %edx,0x39528
   33a94:	89 42 04             	mov    %eax,0x4(%edx)
   33a97:	8b 45 08             	mov    0x8(%ebp),%eax
   33a9a:	89 04 24             	mov    %eax,(%esp)
   33a9d:	e8 fe 03 00 00       	call   33ea0 <__malloc_unlock>
   33aa2:	83 c4 2c             	add    $0x2c,%esp
   33aa5:	8d 43 08             	lea    0x8(%ebx),%eax
   33aa8:	5b                   	pop    %ebx
   33aa9:	5e                   	pop    %esi
   33aaa:	5f                   	pop    %edi
   33aab:	5d                   	pop    %ebp
   33aac:	c3                   	ret    
   33aad:	8d 76 00             	lea    0x0(%esi),%esi
   33ab0:	83 fe 14             	cmp    $0x14,%esi
   33ab3:	0f 86 8f 01 00 00    	jbe    33c48 <_malloc_r+0x5d8>
   33ab9:	83 fe 54             	cmp    $0x54,%esi
   33abc:	0f 87 be 01 00 00    	ja     33c80 <_malloc_r+0x610>
   33ac2:	89 fe                	mov    %edi,%esi
   33ac4:	c1 ee 0c             	shr    $0xc,%esi
   33ac7:	83 c6 6e             	add    $0x6e,%esi
   33aca:	8d 04 36             	lea    (%esi,%esi,1),%eax
   33acd:	e9 5f fc ff ff       	jmp    33731 <_malloc_r+0xc1>
   33ad2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   33ad8:	89 f1                	mov    %esi,%ecx
   33ada:	c1 e9 09             	shr    $0x9,%ecx
   33add:	83 f9 04             	cmp    $0x4,%ecx
   33ae0:	0f 86 6d 01 00 00    	jbe    33c53 <_malloc_r+0x5e3>
   33ae6:	83 f9 14             	cmp    $0x14,%ecx
   33ae9:	0f 87 0f 02 00 00    	ja     33cfe <_malloc_r+0x68e>
   33aef:	83 c1 5b             	add    $0x5b,%ecx
   33af2:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
   33af5:	8d 04 85 20 95 03 00 	lea    0x39520(,%eax,4),%eax
   33afc:	8b 50 08             	mov    0x8(%eax),%edx
   33aff:	39 c2                	cmp    %eax,%edx
   33b01:	0f 84 a1 01 00 00    	je     33ca8 <_malloc_r+0x638>
   33b07:	90                   	nop
   33b08:	8b 4a 04             	mov    0x4(%edx),%ecx
   33b0b:	83 e1 fc             	and    $0xfffffffc,%ecx
   33b0e:	39 ce                	cmp    %ecx,%esi
   33b10:	73 07                	jae    33b19 <_malloc_r+0x4a9>
   33b12:	8b 52 08             	mov    0x8(%edx),%edx
   33b15:	39 d0                	cmp    %edx,%eax
   33b17:	75 ef                	jne    33b08 <_malloc_r+0x498>
   33b19:	8b 4a 0c             	mov    0xc(%edx),%ecx
   33b1c:	a1 24 95 03 00       	mov    0x39524,%eax
   33b21:	89 4b 0c             	mov    %ecx,0xc(%ebx)
   33b24:	89 53 08             	mov    %edx,0x8(%ebx)
   33b27:	89 59 08             	mov    %ebx,0x8(%ecx)
   33b2a:	89 5a 0c             	mov    %ebx,0xc(%edx)
   33b2d:	e9 bb fc ff ff       	jmp    337ed <_malloc_r+0x17d>
   33b32:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   33b38:	89 c1                	mov    %eax,%ecx
   33b3a:	8d 14 3b             	lea    (%ebx,%edi,1),%edx
   33b3d:	83 c9 01             	or     $0x1,%ecx
   33b40:	83 cf 01             	or     $0x1,%edi
   33b43:	89 7b 04             	mov    %edi,0x4(%ebx)
   33b46:	89 15 34 95 03 00    	mov    %edx,0x39534
   33b4c:	89 15 30 95 03 00    	mov    %edx,0x39530
   33b52:	c7 42 0c 28 95 03 00 	movl   $0x39528,0xc(%edx)
   33b59:	c7 42 08 28 95 03 00 	movl   $0x39528,0x8(%edx)
   33b60:	89 4a 04             	mov    %ecx,0x4(%edx)
   33b63:	89 04 02             	mov    %eax,(%edx,%eax,1)
   33b66:	8b 45 08             	mov    0x8(%ebp),%eax
   33b69:	89 04 24             	mov    %eax,(%esp)
   33b6c:	e8 2f 03 00 00       	call   33ea0 <__malloc_unlock>
   33b71:	8d 43 08             	lea    0x8(%ebx),%eax
   33b74:	e9 6e fb ff ff       	jmp    336e7 <_malloc_r+0x77>
   33b79:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   33b80:	89 75 dc             	mov    %esi,-0x24(%ebp)
   33b83:	e9 af fc ff ff       	jmp    33837 <_malloc_r+0x1c7>
   33b88:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
   33b8c:	83 c1 08             	add    $0x8,%ecx
   33b8f:	f6 45 e0 03          	testb  $0x3,-0x20(%ebp)
   33b93:	0f 85 ad fc ff ff    	jne    33846 <_malloc_r+0x1d6>
   33b99:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   33b9c:	eb 12                	jmp    33bb0 <_malloc_r+0x540>
   33b9e:	66 90                	xchg   %ax,%ax
   33ba0:	8d 56 f8             	lea    -0x8(%esi),%edx
   33ba3:	8b 36                	mov    (%esi),%esi
   33ba5:	83 e8 01             	sub    $0x1,%eax
   33ba8:	39 d6                	cmp    %edx,%esi
   33baa:	0f 85 ea 01 00 00    	jne    33d9a <_malloc_r+0x72a>
   33bb0:	a8 03                	test   $0x3,%al
   33bb2:	75 ec                	jne    33ba0 <_malloc_r+0x530>
   33bb4:	8b 45 dc             	mov    -0x24(%ebp),%eax
   33bb7:	f7 d0                	not    %eax
   33bb9:	23 05 24 95 03 00    	and    0x39524,%eax
   33bbf:	a3 24 95 03 00       	mov    %eax,0x39524
   33bc4:	d1 65 dc             	shll   -0x24(%ebp)
   33bc7:	8b 55 dc             	mov    -0x24(%ebp),%edx
   33bca:	39 c2                	cmp    %eax,%edx
   33bcc:	0f 87 26 fd ff ff    	ja     338f8 <_malloc_r+0x288>
   33bd2:	85 d2                	test   %edx,%edx
   33bd4:	0f 84 1e fd ff ff    	je     338f8 <_malloc_r+0x288>
   33bda:	85 c2                	test   %eax,%edx
   33bdc:	0f 85 c2 01 00 00    	jne    33da4 <_malloc_r+0x734>
   33be2:	8b 75 e0             	mov    -0x20(%ebp),%esi
   33be5:	89 f1                	mov    %esi,%ecx
   33be7:	01 d2                	add    %edx,%edx
   33be9:	83 c1 04             	add    $0x4,%ecx
   33bec:	85 d0                	test   %edx,%eax
   33bee:	74 f7                	je     33be7 <_malloc_r+0x577>
   33bf0:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   33bf3:	89 55 dc             	mov    %edx,-0x24(%ebp)
   33bf6:	e9 3c fc ff ff       	jmp    33837 <_malloc_r+0x1c7>
   33bfb:	90                   	nop
   33bfc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33c00:	8d 43 08             	lea    0x8(%ebx),%eax
   33c03:	8b 5b 14             	mov    0x14(%ebx),%ebx
   33c06:	39 d8                	cmp    %ebx,%eax
   33c08:	0f 85 b4 fa ff ff    	jne    336c2 <_malloc_r+0x52>
   33c0e:	8d 42 02             	lea    0x2(%edx),%eax
   33c11:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   33c14:	e9 56 fb ff ff       	jmp    3376f <_malloc_r+0xff>
   33c19:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   33c20:	83 4c 03 04 01       	orl    $0x1,0x4(%ebx,%eax,1)
   33c25:	8b 53 08             	mov    0x8(%ebx),%edx
   33c28:	8b 43 0c             	mov    0xc(%ebx),%eax
   33c2b:	89 42 0c             	mov    %eax,0xc(%edx)
   33c2e:	89 50 08             	mov    %edx,0x8(%eax)
   33c31:	8b 45 08             	mov    0x8(%ebp),%eax
   33c34:	89 04 24             	mov    %eax,(%esp)
   33c37:	e8 64 02 00 00       	call   33ea0 <__malloc_unlock>
   33c3c:	8d 43 08             	lea    0x8(%ebx),%eax
   33c3f:	e9 a3 fa ff ff       	jmp    336e7 <_malloc_r+0x77>
   33c44:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33c48:	83 c6 5b             	add    $0x5b,%esi
   33c4b:	8d 04 36             	lea    (%esi,%esi,1),%eax
   33c4e:	e9 de fa ff ff       	jmp    33731 <_malloc_r+0xc1>
   33c53:	89 f1                	mov    %esi,%ecx
   33c55:	c1 e9 06             	shr    $0x6,%ecx
   33c58:	83 c1 38             	add    $0x38,%ecx
   33c5b:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
   33c5e:	e9 92 fe ff ff       	jmp    33af5 <_malloc_r+0x485>
   33c63:	81 fb 20 95 03 00    	cmp    $0x39520,%ebx
   33c69:	0f 84 f2 fc ff ff    	je     33961 <_malloc_r+0x2f1>
   33c6f:	8b 1d 28 95 03 00    	mov    0x39528,%ebx
   33c75:	8b 53 04             	mov    0x4(%ebx),%edx
   33c78:	83 e2 fc             	and    $0xfffffffc,%edx
   33c7b:	e9 de fd ff ff       	jmp    33a5e <_malloc_r+0x3ee>
   33c80:	81 fe 54 01 00 00    	cmp    $0x154,%esi
   33c86:	77 3c                	ja     33cc4 <_malloc_r+0x654>
   33c88:	89 fe                	mov    %edi,%esi
   33c8a:	c1 ee 0f             	shr    $0xf,%esi
   33c8d:	83 c6 77             	add    $0x77,%esi
   33c90:	8d 04 36             	lea    (%esi,%esi,1),%eax
   33c93:	e9 99 fa ff ff       	jmp    33731 <_malloc_r+0xc1>
   33c98:	c7 41 04 01 00 00 00 	movl   $0x1,0x4(%ecx)
   33c9f:	89 cb                	mov    %ecx,%ebx
   33ca1:	31 d2                	xor    %edx,%edx
   33ca3:	e9 b6 fd ff ff       	jmp    33a5e <_malloc_r+0x3ee>
   33ca8:	c1 f9 02             	sar    $0x2,%ecx
   33cab:	b8 01 00 00 00       	mov    $0x1,%eax
   33cb0:	d3 e0                	shl    %cl,%eax
   33cb2:	89 d1                	mov    %edx,%ecx
   33cb4:	0b 05 24 95 03 00    	or     0x39524,%eax
   33cba:	a3 24 95 03 00       	mov    %eax,0x39524
   33cbf:	e9 5d fe ff ff       	jmp    33b21 <_malloc_r+0x4b1>
   33cc4:	81 fe 54 05 00 00    	cmp    $0x554,%esi
   33cca:	77 47                	ja     33d13 <_malloc_r+0x6a3>
   33ccc:	89 fe                	mov    %edi,%esi
   33cce:	c1 ee 12             	shr    $0x12,%esi
   33cd1:	83 c6 7c             	add    $0x7c,%esi
   33cd4:	8d 04 36             	lea    (%esi,%esi,1),%eax
   33cd7:	e9 55 fa ff ff       	jmp    33731 <_malloc_r+0xc1>
   33cdc:	8b 45 08             	mov    0x8(%ebp),%eax
   33cdf:	83 c3 08             	add    $0x8,%ebx
   33ce2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
   33ce6:	89 04 24             	mov    %eax,(%esp)
   33ce9:	e8 92 22 00 00       	call   35f80 <_free_r>
   33cee:	8b 15 60 99 03 00    	mov    0x39960,%edx
   33cf4:	a1 28 95 03 00       	mov    0x39528,%eax
   33cf9:	e9 3c fd ff ff       	jmp    33a3a <_malloc_r+0x3ca>
   33cfe:	83 f9 54             	cmp    $0x54,%ecx
   33d01:	77 58                	ja     33d5b <_malloc_r+0x6eb>
   33d03:	89 f1                	mov    %esi,%ecx
   33d05:	c1 e9 0c             	shr    $0xc,%ecx
   33d08:	83 c1 6e             	add    $0x6e,%ecx
   33d0b:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
   33d0e:	e9 e2 fd ff ff       	jmp    33af5 <_malloc_r+0x485>
   33d13:	b8 fc 00 00 00       	mov    $0xfc,%eax
   33d18:	be 7e 00 00 00       	mov    $0x7e,%esi
   33d1d:	e9 0f fa ff ff       	jmp    33731 <_malloc_r+0xc1>
   33d22:	f7 45 e4 ff 0f 00 00 	testl  $0xfff,-0x1c(%ebp)
   33d29:	0f 85 4a fc ff ff    	jne    33979 <_malloc_r+0x309>
   33d2f:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   33d32:	a1 28 95 03 00       	mov    0x39528,%eax
   33d37:	01 f1                	add    %esi,%ecx
   33d39:	83 c9 01             	or     $0x1,%ecx
   33d3c:	89 48 04             	mov    %ecx,0x4(%eax)
   33d3f:	e9 f6 fc ff ff       	jmp    33a3a <_malloc_r+0x3ca>
   33d44:	b8 01 00 00 00       	mov    $0x1,%eax
   33d49:	31 d2                	xor    %edx,%edx
   33d4b:	e9 91 fc ff ff       	jmp    339e1 <_malloc_r+0x371>
   33d50:	89 0d 00 95 03 00    	mov    %ecx,0x39500
   33d56:	e9 37 fc ff ff       	jmp    33992 <_malloc_r+0x322>
   33d5b:	81 f9 54 01 00 00    	cmp    $0x154,%ecx
   33d61:	77 10                	ja     33d73 <_malloc_r+0x703>
   33d63:	89 f1                	mov    %esi,%ecx
   33d65:	c1 e9 0f             	shr    $0xf,%ecx
   33d68:	83 c1 77             	add    $0x77,%ecx
   33d6b:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
   33d6e:	e9 82 fd ff ff       	jmp    33af5 <_malloc_r+0x485>
   33d73:	81 f9 54 05 00 00    	cmp    $0x554,%ecx
   33d79:	77 10                	ja     33d8b <_malloc_r+0x71b>
   33d7b:	89 f1                	mov    %esi,%ecx
   33d7d:	c1 e9 12             	shr    $0x12,%ecx
   33d80:	83 c1 7c             	add    $0x7c,%ecx
   33d83:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
   33d86:	e9 6a fd ff ff       	jmp    33af5 <_malloc_r+0x485>
   33d8b:	b8 fc 00 00 00       	mov    $0xfc,%eax
   33d90:	b9 7e 00 00 00       	mov    $0x7e,%ecx
   33d95:	e9 5b fd ff ff       	jmp    33af5 <_malloc_r+0x485>
   33d9a:	a1 24 95 03 00       	mov    0x39524,%eax
   33d9f:	e9 20 fe ff ff       	jmp    33bc4 <_malloc_r+0x554>
   33da4:	8b 45 e0             	mov    -0x20(%ebp),%eax
   33da7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   33daa:	e9 88 fa ff ff       	jmp    33837 <_malloc_r+0x1c7>
   33daf:	90                   	nop

00033db0 <memchr>:
   33db0:	55                   	push   %ebp
   33db1:	89 e5                	mov    %esp,%ebp
   33db3:	57                   	push   %edi
   33db4:	0f b6 45 0c          	movzbl 0xc(%ebp),%eax
   33db8:	8b 4d 10             	mov    0x10(%ebp),%ecx
   33dbb:	8b 7d 08             	mov    0x8(%ebp),%edi
   33dbe:	31 d2                	xor    %edx,%edx
   33dc0:	85 c9                	test   %ecx,%ecx
   33dc2:	74 79                	je     33e3d <L20>
   33dc4:	f7 c7 03 00 00 00    	test   $0x3,%edi
   33dca:	74 28                	je     33df4 <L5>
   33dcc:	3a 07                	cmp    (%edi),%al
   33dce:	74 6a                	je     33e3a <L15>
   33dd0:	47                   	inc    %edi
   33dd1:	49                   	dec    %ecx
   33dd2:	74 69                	je     33e3d <L20>
   33dd4:	f7 c7 03 00 00 00    	test   $0x3,%edi
   33dda:	74 18                	je     33df4 <L5>
   33ddc:	3a 07                	cmp    (%edi),%al
   33dde:	74 5a                	je     33e3a <L15>
   33de0:	47                   	inc    %edi
   33de1:	49                   	dec    %ecx
   33de2:	74 59                	je     33e3d <L20>
   33de4:	f7 c7 03 00 00 00    	test   $0x3,%edi
   33dea:	74 08                	je     33df4 <L5>
   33dec:	3a 07                	cmp    (%edi),%al
   33dee:	74 4a                	je     33e3a <L15>
   33df0:	47                   	inc    %edi
   33df1:	49                   	dec    %ecx
   33df2:	74 49                	je     33e3d <L20>

00033df4 <L5>:
   33df4:	88 c4                	mov    %al,%ah
   33df6:	89 c2                	mov    %eax,%edx
   33df8:	c1 e2 10             	shl    $0x10,%edx
   33dfb:	09 d0                	or     %edx,%eax
   33dfd:	53                   	push   %ebx
   33dfe:	66 90                	xchg   %ax,%ax

00033e00 <L8>:
   33e00:	83 e9 04             	sub    $0x4,%ecx
   33e03:	72 1c                	jb     33e21 <L9>
   33e05:	8b 17                	mov    (%edi),%edx
   33e07:	83 c7 04             	add    $0x4,%edi
   33e0a:	31 c2                	xor    %eax,%edx
   33e0c:	8d 9a ff fe fe fe    	lea    -0x1010101(%edx),%ebx
   33e12:	f7 d2                	not    %edx
   33e14:	21 d3                	and    %edx,%ebx
   33e16:	f7 c3 80 80 80 80    	test   $0x80808080,%ebx
   33e1c:	74 e2                	je     33e00 <L8>
   33e1e:	83 ef 04             	sub    $0x4,%edi

00033e21 <L9>:
   33e21:	5b                   	pop    %ebx
   33e22:	31 d2                	xor    %edx,%edx
   33e24:	83 c1 04             	add    $0x4,%ecx
   33e27:	74 14                	je     33e3d <L20>
   33e29:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00033e30 <L10>:
   33e30:	3a 07                	cmp    (%edi),%al
   33e32:	74 06                	je     33e3a <L15>
   33e34:	47                   	inc    %edi
   33e35:	49                   	dec    %ecx
   33e36:	75 f8                	jne    33e30 <L10>
   33e38:	31 ff                	xor    %edi,%edi

00033e3a <L15>:
   33e3a:	4a                   	dec    %edx
   33e3b:	21 fa                	and    %edi,%edx

00033e3d <L20>:
   33e3d:	89 d0                	mov    %edx,%eax
   33e3f:	8d 65 fc             	lea    -0x4(%ebp),%esp
   33e42:	5f                   	pop    %edi
   33e43:	c9                   	leave  
   33e44:	c3                   	ret    
   33e45:	66 90                	xchg   %ax,%ax
   33e47:	90                   	nop

00033e48 <memcpy>:
   33e48:	55                   	push   %ebp
   33e49:	89 e5                	mov    %esp,%ebp
   33e4b:	56                   	push   %esi
   33e4c:	57                   	push   %edi
   33e4d:	53                   	push   %ebx
   33e4e:	8b 7d 08             	mov    0x8(%ebp),%edi
   33e51:	8b 4d 10             	mov    0x10(%ebp),%ecx
   33e54:	8b 75 0c             	mov    0xc(%ebp),%esi
   33e57:	fc                   	cld    
   33e58:	83 f9 08             	cmp    $0x8,%ecx
   33e5b:	76 26                	jbe    33e83 <memcpy+0x3b>
   33e5d:	89 fa                	mov    %edi,%edx
   33e5f:	89 cb                	mov    %ecx,%ebx
   33e61:	83 e2 03             	and    $0x3,%edx
   33e64:	74 10                	je     33e76 <memcpy+0x2e>
   33e66:	b9 04 00 00 00       	mov    $0x4,%ecx
   33e6b:	29 d1                	sub    %edx,%ecx
   33e6d:	83 e1 03             	and    $0x3,%ecx
   33e70:	29 cb                	sub    %ecx,%ebx
   33e72:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   33e74:	89 d9                	mov    %ebx,%ecx
   33e76:	c1 e9 02             	shr    $0x2,%ecx
   33e79:	8d 76 00             	lea    0x0(%esi),%esi
   33e7c:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
   33e7e:	89 d9                	mov    %ebx,%ecx
   33e80:	83 e1 03             	and    $0x3,%ecx
   33e83:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   33e85:	8b 45 08             	mov    0x8(%ebp),%eax
   33e88:	8d 65 f4             	lea    -0xc(%ebp),%esp
   33e8b:	5b                   	pop    %ebx
   33e8c:	5f                   	pop    %edi
   33e8d:	5e                   	pop    %esi
   33e8e:	c9                   	leave  
   33e8f:	c3                   	ret    

00033e90 <__malloc_lock>:
   33e90:	55                   	push   %ebp
   33e91:	89 e5                	mov    %esp,%ebp
   33e93:	5d                   	pop    %ebp
   33e94:	c3                   	ret    
   33e95:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33e99:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00033ea0 <__malloc_unlock>:
   33ea0:	55                   	push   %ebp
   33ea1:	89 e5                	mov    %esp,%ebp
   33ea3:	5d                   	pop    %ebp
   33ea4:	c3                   	ret    
   33ea5:	66 90                	xchg   %ax,%ax
   33ea7:	66 90                	xchg   %ax,%ax
   33ea9:	66 90                	xchg   %ax,%ax
   33eab:	66 90                	xchg   %ax,%ax
   33ead:	66 90                	xchg   %ax,%ax
   33eaf:	90                   	nop

00033eb0 <_Balloc>:
   33eb0:	55                   	push   %ebp
   33eb1:	89 e5                	mov    %esp,%ebp
   33eb3:	57                   	push   %edi
   33eb4:	56                   	push   %esi
   33eb5:	53                   	push   %ebx
   33eb6:	83 ec 1c             	sub    $0x1c,%esp
   33eb9:	8b 75 08             	mov    0x8(%ebp),%esi
   33ebc:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   33ebf:	8b 46 4c             	mov    0x4c(%esi),%eax
   33ec2:	85 c0                	test   %eax,%eax
   33ec4:	74 2a                	je     33ef0 <_Balloc+0x40>
   33ec6:	8d 14 98             	lea    (%eax,%ebx,4),%edx
   33ec9:	8b 02                	mov    (%edx),%eax
   33ecb:	85 c0                	test   %eax,%eax
   33ecd:	74 49                	je     33f18 <_Balloc+0x68>
   33ecf:	8b 08                	mov    (%eax),%ecx
   33ed1:	89 0a                	mov    %ecx,(%edx)
   33ed3:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
   33eda:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
   33ee1:	83 c4 1c             	add    $0x1c,%esp
   33ee4:	5b                   	pop    %ebx
   33ee5:	5e                   	pop    %esi
   33ee6:	5f                   	pop    %edi
   33ee7:	5d                   	pop    %ebp
   33ee8:	c3                   	ret    
   33ee9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   33ef0:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
   33ef7:	00 
   33ef8:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
   33eff:	00 
   33f00:	89 34 24             	mov    %esi,(%esp)
   33f03:	e8 c8 1e 00 00       	call   35dd0 <_calloc_r>
   33f08:	85 c0                	test   %eax,%eax
   33f0a:	89 46 4c             	mov    %eax,0x4c(%esi)
   33f0d:	75 b7                	jne    33ec6 <_Balloc+0x16>
   33f0f:	31 c0                	xor    %eax,%eax
   33f11:	eb ce                	jmp    33ee1 <_Balloc+0x31>
   33f13:	90                   	nop
   33f14:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33f18:	89 d9                	mov    %ebx,%ecx
   33f1a:	bf 01 00 00 00       	mov    $0x1,%edi
   33f1f:	d3 e7                	shl    %cl,%edi
   33f21:	8d 04 bd 14 00 00 00 	lea    0x14(,%edi,4),%eax
   33f28:	89 44 24 08          	mov    %eax,0x8(%esp)
   33f2c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   33f33:	00 
   33f34:	89 34 24             	mov    %esi,(%esp)
   33f37:	e8 94 1e 00 00       	call   35dd0 <_calloc_r>
   33f3c:	85 c0                	test   %eax,%eax
   33f3e:	74 cf                	je     33f0f <_Balloc+0x5f>
   33f40:	89 58 04             	mov    %ebx,0x4(%eax)
   33f43:	89 78 08             	mov    %edi,0x8(%eax)
   33f46:	eb 8b                	jmp    33ed3 <_Balloc+0x23>
   33f48:	90                   	nop
   33f49:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00033f50 <_Bfree>:
   33f50:	55                   	push   %ebp
   33f51:	89 e5                	mov    %esp,%ebp
   33f53:	8b 45 0c             	mov    0xc(%ebp),%eax
   33f56:	85 c0                	test   %eax,%eax
   33f58:	74 12                	je     33f6c <_Bfree+0x1c>
   33f5a:	8b 55 08             	mov    0x8(%ebp),%edx
   33f5d:	8b 48 04             	mov    0x4(%eax),%ecx
   33f60:	8b 52 4c             	mov    0x4c(%edx),%edx
   33f63:	8d 14 8a             	lea    (%edx,%ecx,4),%edx
   33f66:	8b 0a                	mov    (%edx),%ecx
   33f68:	89 08                	mov    %ecx,(%eax)
   33f6a:	89 02                	mov    %eax,(%edx)
   33f6c:	5d                   	pop    %ebp
   33f6d:	c3                   	ret    
   33f6e:	66 90                	xchg   %ax,%ax

00033f70 <__multadd>:
   33f70:	55                   	push   %ebp
   33f71:	89 e5                	mov    %esp,%ebp
   33f73:	57                   	push   %edi
   33f74:	56                   	push   %esi
   33f75:	53                   	push   %ebx
   33f76:	83 ec 2c             	sub    $0x2c,%esp
   33f79:	8b 45 0c             	mov    0xc(%ebp),%eax
   33f7c:	8b 5d 14             	mov    0x14(%ebp),%ebx
   33f7f:	8b 40 10             	mov    0x10(%eax),%eax
   33f82:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   33f85:	8b 45 0c             	mov    0xc(%ebp),%eax
   33f88:	8d 78 14             	lea    0x14(%eax),%edi
   33f8b:	31 c0                	xor    %eax,%eax
   33f8d:	8d 76 00             	lea    0x0(%esi),%esi
   33f90:	8b 0c 87             	mov    (%edi,%eax,4),%ecx
   33f93:	0f b7 d1             	movzwl %cx,%edx
   33f96:	0f af 55 10          	imul   0x10(%ebp),%edx
   33f9a:	c1 e9 10             	shr    $0x10,%ecx
   33f9d:	0f af 4d 10          	imul   0x10(%ebp),%ecx
   33fa1:	01 da                	add    %ebx,%edx
   33fa3:	89 d3                	mov    %edx,%ebx
   33fa5:	0f b7 d2             	movzwl %dx,%edx
   33fa8:	c1 eb 10             	shr    $0x10,%ebx
   33fab:	01 d9                	add    %ebx,%ecx
   33fad:	89 ce                	mov    %ecx,%esi
   33faf:	c1 e1 10             	shl    $0x10,%ecx
   33fb2:	01 d1                	add    %edx,%ecx
   33fb4:	c1 ee 10             	shr    $0x10,%esi
   33fb7:	89 0c 87             	mov    %ecx,(%edi,%eax,4)
   33fba:	83 c0 01             	add    $0x1,%eax
   33fbd:	89 f3                	mov    %esi,%ebx
   33fbf:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
   33fc2:	7f cc                	jg     33f90 <__multadd+0x20>
   33fc4:	85 f6                	test   %esi,%esi
   33fc6:	74 1b                	je     33fe3 <__multadd+0x73>
   33fc8:	8b 45 0c             	mov    0xc(%ebp),%eax
   33fcb:	8b 7d e4             	mov    -0x1c(%ebp),%edi
   33fce:	3b 78 08             	cmp    0x8(%eax),%edi
   33fd1:	7d 1d                	jge    33ff0 <__multadd+0x80>
   33fd3:	8b 7d 0c             	mov    0xc(%ebp),%edi
   33fd6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   33fd9:	89 74 87 14          	mov    %esi,0x14(%edi,%eax,4)
   33fdd:	83 c0 01             	add    $0x1,%eax
   33fe0:	89 47 10             	mov    %eax,0x10(%edi)
   33fe3:	8b 45 0c             	mov    0xc(%ebp),%eax
   33fe6:	83 c4 2c             	add    $0x2c,%esp
   33fe9:	5b                   	pop    %ebx
   33fea:	5e                   	pop    %esi
   33feb:	5f                   	pop    %edi
   33fec:	5d                   	pop    %ebp
   33fed:	c3                   	ret    
   33fee:	66 90                	xchg   %ax,%ax
   33ff0:	8b 40 04             	mov    0x4(%eax),%eax
   33ff3:	89 45 e0             	mov    %eax,-0x20(%ebp)
   33ff6:	83 c0 01             	add    $0x1,%eax
   33ff9:	89 44 24 04          	mov    %eax,0x4(%esp)
   33ffd:	8b 45 08             	mov    0x8(%ebp),%eax
   34000:	89 04 24             	mov    %eax,(%esp)
   34003:	e8 a8 fe ff ff       	call   33eb0 <_Balloc>
   34008:	89 c3                	mov    %eax,%ebx
   3400a:	8b 45 0c             	mov    0xc(%ebp),%eax
   3400d:	8b 40 10             	mov    0x10(%eax),%eax
   34010:	8d 04 85 08 00 00 00 	lea    0x8(,%eax,4),%eax
   34017:	89 44 24 08          	mov    %eax,0x8(%esp)
   3401b:	8b 45 0c             	mov    0xc(%ebp),%eax
   3401e:	83 c0 0c             	add    $0xc,%eax
   34021:	89 44 24 04          	mov    %eax,0x4(%esp)
   34025:	8d 43 0c             	lea    0xc(%ebx),%eax
   34028:	89 04 24             	mov    %eax,(%esp)
   3402b:	e8 18 fe ff ff       	call   33e48 <memcpy>
   34030:	8b 45 0c             	mov    0xc(%ebp),%eax
   34033:	8b 7d 0c             	mov    0xc(%ebp),%edi
   34036:	89 5d 0c             	mov    %ebx,0xc(%ebp)
   34039:	8b 50 04             	mov    0x4(%eax),%edx
   3403c:	8b 45 08             	mov    0x8(%ebp),%eax
   3403f:	8b 40 4c             	mov    0x4c(%eax),%eax
   34042:	8d 04 90             	lea    (%eax,%edx,4),%eax
   34045:	8b 10                	mov    (%eax),%edx
   34047:	89 17                	mov    %edx,(%edi)
   34049:	89 38                	mov    %edi,(%eax)
   3404b:	eb 86                	jmp    33fd3 <__multadd+0x63>
   3404d:	8d 76 00             	lea    0x0(%esi),%esi

00034050 <__s2b>:
   34050:	55                   	push   %ebp
   34051:	ba 39 8e e3 38       	mov    $0x38e38e39,%edx
   34056:	89 e5                	mov    %esp,%ebp
   34058:	57                   	push   %edi
   34059:	56                   	push   %esi
   3405a:	53                   	push   %ebx
   3405b:	83 ec 2c             	sub    $0x2c,%esp
   3405e:	8b 45 14             	mov    0x14(%ebp),%eax
   34061:	8b 5d 08             	mov    0x8(%ebp),%ebx
   34064:	8b 75 0c             	mov    0xc(%ebp),%esi
   34067:	8d 48 08             	lea    0x8(%eax),%ecx
   3406a:	89 c8                	mov    %ecx,%eax
   3406c:	f7 ea                	imul   %edx
   3406e:	c1 f9 1f             	sar    $0x1f,%ecx
   34071:	d1 fa                	sar    %edx
   34073:	29 ca                	sub    %ecx,%edx
   34075:	83 fa 01             	cmp    $0x1,%edx
   34078:	0f 8e be 00 00 00    	jle    3413c <__s2b+0xec>
   3407e:	b8 01 00 00 00       	mov    $0x1,%eax
   34083:	31 c9                	xor    %ecx,%ecx
   34085:	8d 76 00             	lea    0x0(%esi),%esi
   34088:	01 c0                	add    %eax,%eax
   3408a:	83 c1 01             	add    $0x1,%ecx
   3408d:	39 c2                	cmp    %eax,%edx
   3408f:	7f f7                	jg     34088 <__s2b+0x38>
   34091:	89 4c 24 04          	mov    %ecx,0x4(%esp)
   34095:	89 1c 24             	mov    %ebx,(%esp)
   34098:	e8 13 fe ff ff       	call   33eb0 <_Balloc>
   3409d:	8b 55 18             	mov    0x18(%ebp),%edx
   340a0:	83 7d 10 09          	cmpl   $0x9,0x10(%ebp)
   340a4:	89 50 14             	mov    %edx,0x14(%eax)
   340a7:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
   340ae:	0f 8e 7c 00 00 00    	jle    34130 <__s2b+0xe0>
   340b4:	8d 4e 09             	lea    0x9(%esi),%ecx
   340b7:	03 75 10             	add    0x10(%ebp),%esi
   340ba:	89 cf                	mov    %ecx,%edi
   340bc:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   340bf:	90                   	nop
   340c0:	83 c7 01             	add    $0x1,%edi
   340c3:	0f be 57 ff          	movsbl -0x1(%edi),%edx
   340c7:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   340ce:	00 
   340cf:	89 44 24 04          	mov    %eax,0x4(%esp)
   340d3:	89 1c 24             	mov    %ebx,(%esp)
   340d6:	83 ea 30             	sub    $0x30,%edx
   340d9:	89 54 24 0c          	mov    %edx,0xc(%esp)
   340dd:	e8 8e fe ff ff       	call   33f70 <__multadd>
   340e2:	39 f7                	cmp    %esi,%edi
   340e4:	75 da                	jne    340c0 <__s2b+0x70>
   340e6:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   340e9:	8b 7d 10             	mov    0x10(%ebp),%edi
   340ec:	8d 74 39 f8          	lea    -0x8(%ecx,%edi,1),%esi
   340f0:	8b 4d 10             	mov    0x10(%ebp),%ecx
   340f3:	39 4d 14             	cmp    %ecx,0x14(%ebp)
   340f6:	7e 2e                	jle    34126 <__s2b+0xd6>
   340f8:	8b 7d 14             	mov    0x14(%ebp),%edi
   340fb:	29 cf                	sub    %ecx,%edi
   340fd:	01 f7                	add    %esi,%edi
   340ff:	90                   	nop
   34100:	83 c6 01             	add    $0x1,%esi
   34103:	0f be 56 ff          	movsbl -0x1(%esi),%edx
   34107:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   3410e:	00 
   3410f:	89 44 24 04          	mov    %eax,0x4(%esp)
   34113:	89 1c 24             	mov    %ebx,(%esp)
   34116:	83 ea 30             	sub    $0x30,%edx
   34119:	89 54 24 0c          	mov    %edx,0xc(%esp)
   3411d:	e8 4e fe ff ff       	call   33f70 <__multadd>
   34122:	39 fe                	cmp    %edi,%esi
   34124:	75 da                	jne    34100 <__s2b+0xb0>
   34126:	83 c4 2c             	add    $0x2c,%esp
   34129:	5b                   	pop    %ebx
   3412a:	5e                   	pop    %esi
   3412b:	5f                   	pop    %edi
   3412c:	5d                   	pop    %ebp
   3412d:	c3                   	ret    
   3412e:	66 90                	xchg   %ax,%ax
   34130:	83 c6 0a             	add    $0xa,%esi
   34133:	c7 45 10 09 00 00 00 	movl   $0x9,0x10(%ebp)
   3413a:	eb b4                	jmp    340f0 <__s2b+0xa0>
   3413c:	31 c9                	xor    %ecx,%ecx
   3413e:	e9 4e ff ff ff       	jmp    34091 <__s2b+0x41>
   34143:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   34149:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00034150 <__hi0bits>:
   34150:	55                   	push   %ebp
   34151:	31 c9                	xor    %ecx,%ecx
   34153:	89 e5                	mov    %esp,%ebp
   34155:	8b 55 08             	mov    0x8(%ebp),%edx
   34158:	f7 c2 00 00 ff ff    	test   $0xffff0000,%edx
   3415e:	75 05                	jne    34165 <__hi0bits+0x15>
   34160:	c1 e2 10             	shl    $0x10,%edx
   34163:	b1 10                	mov    $0x10,%cl
   34165:	f7 c2 00 00 00 ff    	test   $0xff000000,%edx
   3416b:	75 06                	jne    34173 <__hi0bits+0x23>
   3416d:	83 c1 08             	add    $0x8,%ecx
   34170:	c1 e2 08             	shl    $0x8,%edx
   34173:	f7 c2 00 00 00 f0    	test   $0xf0000000,%edx
   34179:	75 06                	jne    34181 <__hi0bits+0x31>
   3417b:	83 c1 04             	add    $0x4,%ecx
   3417e:	c1 e2 04             	shl    $0x4,%edx
   34181:	f7 c2 00 00 00 c0    	test   $0xc0000000,%edx
   34187:	75 06                	jne    3418f <__hi0bits+0x3f>
   34189:	83 c1 02             	add    $0x2,%ecx
   3418c:	c1 e2 02             	shl    $0x2,%edx
   3418f:	85 d2                	test   %edx,%edx
   34191:	89 c8                	mov    %ecx,%eax
   34193:	78 0d                	js     341a2 <__hi0bits+0x52>
   34195:	81 e2 00 00 00 40    	and    $0x40000000,%edx
   3419b:	b8 20 00 00 00       	mov    $0x20,%eax
   341a0:	75 06                	jne    341a8 <__hi0bits+0x58>
   341a2:	5d                   	pop    %ebp
   341a3:	c3                   	ret    
   341a4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   341a8:	8d 41 01             	lea    0x1(%ecx),%eax
   341ab:	5d                   	pop    %ebp
   341ac:	c3                   	ret    
   341ad:	8d 76 00             	lea    0x0(%esi),%esi

000341b0 <__lo0bits>:
   341b0:	55                   	push   %ebp
   341b1:	89 e5                	mov    %esp,%ebp
   341b3:	53                   	push   %ebx
   341b4:	8b 5d 08             	mov    0x8(%ebp),%ebx
   341b7:	8b 13                	mov    (%ebx),%edx
   341b9:	f6 c2 07             	test   $0x7,%dl
   341bc:	74 1a                	je     341d8 <__lo0bits+0x28>
   341be:	31 c0                	xor    %eax,%eax
   341c0:	f6 c2 01             	test   $0x1,%dl
   341c3:	75 0f                	jne    341d4 <__lo0bits+0x24>
   341c5:	f6 c2 02             	test   $0x2,%dl
   341c8:	75 56                	jne    34220 <__lo0bits+0x70>
   341ca:	c1 ea 02             	shr    $0x2,%edx
   341cd:	b8 02 00 00 00       	mov    $0x2,%eax
   341d2:	89 13                	mov    %edx,(%ebx)
   341d4:	5b                   	pop    %ebx
   341d5:	5d                   	pop    %ebp
   341d6:	c3                   	ret    
   341d7:	90                   	nop
   341d8:	31 c9                	xor    %ecx,%ecx
   341da:	66 85 d2             	test   %dx,%dx
   341dd:	75 05                	jne    341e4 <__lo0bits+0x34>
   341df:	c1 ea 10             	shr    $0x10,%edx
   341e2:	b1 10                	mov    $0x10,%cl
   341e4:	84 d2                	test   %dl,%dl
   341e6:	75 06                	jne    341ee <__lo0bits+0x3e>
   341e8:	83 c1 08             	add    $0x8,%ecx
   341eb:	c1 ea 08             	shr    $0x8,%edx
   341ee:	f6 c2 0f             	test   $0xf,%dl
   341f1:	75 06                	jne    341f9 <__lo0bits+0x49>
   341f3:	83 c1 04             	add    $0x4,%ecx
   341f6:	c1 ea 04             	shr    $0x4,%edx
   341f9:	f6 c2 03             	test   $0x3,%dl
   341fc:	75 06                	jne    34204 <__lo0bits+0x54>
   341fe:	83 c1 02             	add    $0x2,%ecx
   34201:	c1 ea 02             	shr    $0x2,%edx
   34204:	f6 c2 01             	test   $0x1,%dl
   34207:	75 0c                	jne    34215 <__lo0bits+0x65>
   34209:	d1 ea                	shr    %edx
   3420b:	b8 20 00 00 00       	mov    $0x20,%eax
   34210:	74 c2                	je     341d4 <__lo0bits+0x24>
   34212:	83 c1 01             	add    $0x1,%ecx
   34215:	89 13                	mov    %edx,(%ebx)
   34217:	89 c8                	mov    %ecx,%eax
   34219:	5b                   	pop    %ebx
   3421a:	5d                   	pop    %ebp
   3421b:	c3                   	ret    
   3421c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34220:	d1 ea                	shr    %edx
   34222:	b0 01                	mov    $0x1,%al
   34224:	89 13                	mov    %edx,(%ebx)
   34226:	5b                   	pop    %ebx
   34227:	5d                   	pop    %ebp
   34228:	c3                   	ret    
   34229:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00034230 <__i2b>:
   34230:	55                   	push   %ebp
   34231:	89 e5                	mov    %esp,%ebp
   34233:	83 ec 18             	sub    $0x18,%esp
   34236:	8b 45 08             	mov    0x8(%ebp),%eax
   34239:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   34240:	00 
   34241:	89 04 24             	mov    %eax,(%esp)
   34244:	e8 67 fc ff ff       	call   33eb0 <_Balloc>
   34249:	8b 55 0c             	mov    0xc(%ebp),%edx
   3424c:	89 50 14             	mov    %edx,0x14(%eax)
   3424f:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
   34256:	c9                   	leave  
   34257:	c3                   	ret    
   34258:	90                   	nop
   34259:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00034260 <__multiply>:
   34260:	55                   	push   %ebp
   34261:	89 e5                	mov    %esp,%ebp
   34263:	57                   	push   %edi
   34264:	56                   	push   %esi
   34265:	53                   	push   %ebx
   34266:	83 ec 3c             	sub    $0x3c,%esp
   34269:	8b 75 0c             	mov    0xc(%ebp),%esi
   3426c:	8b 45 10             	mov    0x10(%ebp),%eax
   3426f:	8b 7e 10             	mov    0x10(%esi),%edi
   34272:	8b 58 10             	mov    0x10(%eax),%ebx
   34275:	39 df                	cmp    %ebx,%edi
   34277:	7d 0e                	jge    34287 <__multiply+0x27>
   34279:	89 f8                	mov    %edi,%eax
   3427b:	89 df                	mov    %ebx,%edi
   3427d:	89 c3                	mov    %eax,%ebx
   3427f:	89 f0                	mov    %esi,%eax
   34281:	8b 75 10             	mov    0x10(%ebp),%esi
   34284:	89 45 10             	mov    %eax,0x10(%ebp)
   34287:	8d 04 1f             	lea    (%edi,%ebx,1),%eax
   3428a:	3b 46 08             	cmp    0x8(%esi),%eax
   3428d:	89 45 c8             	mov    %eax,-0x38(%ebp)
   34290:	0f 9f c0             	setg   %al
   34293:	0f b6 c0             	movzbl %al,%eax
   34296:	03 46 04             	add    0x4(%esi),%eax
   34299:	89 44 24 04          	mov    %eax,0x4(%esp)
   3429d:	8b 45 08             	mov    0x8(%ebp),%eax
   342a0:	89 04 24             	mov    %eax,(%esp)
   342a3:	e8 08 fc ff ff       	call   33eb0 <_Balloc>
   342a8:	8b 55 c8             	mov    -0x38(%ebp),%edx
   342ab:	89 45 c0             	mov    %eax,-0x40(%ebp)
   342ae:	8d 40 14             	lea    0x14(%eax),%eax
   342b1:	8d 14 90             	lea    (%eax,%edx,4),%edx
   342b4:	89 d1                	mov    %edx,%ecx
   342b6:	39 c8                	cmp    %ecx,%eax
   342b8:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   342bb:	89 55 c4             	mov    %edx,-0x3c(%ebp)
   342be:	73 15                	jae    342d5 <__multiply+0x75>
   342c0:	8b 55 c4             	mov    -0x3c(%ebp),%edx
   342c3:	90                   	nop
   342c4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   342c8:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
   342ce:	83 c0 04             	add    $0x4,%eax
   342d1:	39 c2                	cmp    %eax,%edx
   342d3:	77 f3                	ja     342c8 <__multiply+0x68>
   342d5:	8d 46 14             	lea    0x14(%esi),%eax
   342d8:	89 45 d0             	mov    %eax,-0x30(%ebp)
   342db:	8d 04 b8             	lea    (%eax,%edi,4),%eax
   342de:	89 45 dc             	mov    %eax,-0x24(%ebp)
   342e1:	8b 45 10             	mov    0x10(%ebp),%eax
   342e4:	83 c0 14             	add    $0x14,%eax
   342e7:	8d 3c 98             	lea    (%eax,%ebx,4),%edi
   342ea:	39 f8                	cmp    %edi,%eax
   342ec:	89 45 d8             	mov    %eax,-0x28(%ebp)
   342ef:	89 7d cc             	mov    %edi,-0x34(%ebp)
   342f2:	0f 83 e8 00 00 00    	jae    343e0 <__multiply+0x180>
   342f8:	8b 45 d8             	mov    -0x28(%ebp),%eax
   342fb:	8b 00                	mov    (%eax),%eax
   342fd:	0f b7 f8             	movzwl %ax,%edi
   34300:	85 ff                	test   %edi,%edi
   34302:	89 7d e4             	mov    %edi,-0x1c(%ebp)
   34305:	74 5a                	je     34361 <__multiply+0x101>
   34307:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   3430a:	31 db                	xor    %ebx,%ebx
   3430c:	8b 75 d0             	mov    -0x30(%ebp),%esi
   3430f:	eb 09                	jmp    3431a <__multiply+0xba>
   34311:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   34318:	89 fa                	mov    %edi,%edx
   3431a:	8b 0e                	mov    (%esi),%ecx
   3431c:	83 c6 04             	add    $0x4,%esi
   3431f:	0f b7 3a             	movzwl (%edx),%edi
   34322:	0f b7 c1             	movzwl %cx,%eax
   34325:	0f af 45 e4          	imul   -0x1c(%ebp),%eax
   34329:	c1 e9 10             	shr    $0x10,%ecx
   3432c:	0f af 4d e4          	imul   -0x1c(%ebp),%ecx
   34330:	01 f8                	add    %edi,%eax
   34332:	01 d8                	add    %ebx,%eax
   34334:	8b 1a                	mov    (%edx),%ebx
   34336:	8d 7a 04             	lea    0x4(%edx),%edi
   34339:	c1 eb 10             	shr    $0x10,%ebx
   3433c:	01 d9                	add    %ebx,%ecx
   3433e:	89 c3                	mov    %eax,%ebx
   34340:	c1 eb 10             	shr    $0x10,%ebx
   34343:	0f b7 c0             	movzwl %ax,%eax
   34346:	01 d9                	add    %ebx,%ecx
   34348:	89 cb                	mov    %ecx,%ebx
   3434a:	c1 e1 10             	shl    $0x10,%ecx
   3434d:	09 c1                	or     %eax,%ecx
   3434f:	c1 eb 10             	shr    $0x10,%ebx
   34352:	39 75 dc             	cmp    %esi,-0x24(%ebp)
   34355:	89 0a                	mov    %ecx,(%edx)
   34357:	77 bf                	ja     34318 <__multiply+0xb8>
   34359:	8b 45 d8             	mov    -0x28(%ebp),%eax
   3435c:	89 5a 04             	mov    %ebx,0x4(%edx)
   3435f:	8b 00                	mov    (%eax),%eax
   34361:	c1 e8 10             	shr    $0x10,%eax
   34364:	85 c0                	test   %eax,%eax
   34366:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   34369:	74 61                	je     343cc <__multiply+0x16c>
   3436b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   3436e:	31 ff                	xor    %edi,%edi
   34370:	89 fe                	mov    %edi,%esi
   34372:	8b 10                	mov    (%eax),%edx
   34374:	89 45 e0             	mov    %eax,-0x20(%ebp)
   34377:	8b 45 d0             	mov    -0x30(%ebp),%eax
   3437a:	89 d3                	mov    %edx,%ebx
   3437c:	eb 05                	jmp    34383 <__multiply+0x123>
   3437e:	66 90                	xchg   %ax,%ax
   34380:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   34383:	0f b7 08             	movzwl (%eax),%ecx
   34386:	c1 eb 10             	shr    $0x10,%ebx
   34389:	0f b7 d2             	movzwl %dx,%edx
   3438c:	0f af 4d e4          	imul   -0x1c(%ebp),%ecx
   34390:	83 c0 04             	add    $0x4,%eax
   34393:	8d 3c 19             	lea    (%ecx,%ebx,1),%edi
   34396:	01 f7                	add    %esi,%edi
   34398:	8b 75 e0             	mov    -0x20(%ebp),%esi
   3439b:	89 fb                	mov    %edi,%ebx
   3439d:	c1 e3 10             	shl    $0x10,%ebx
   343a0:	09 d3                	or     %edx,%ebx
   343a2:	89 1e                	mov    %ebx,(%esi)
   343a4:	8b 5e 04             	mov    0x4(%esi),%ebx
   343a7:	8d 4e 04             	lea    0x4(%esi),%ecx
   343aa:	0f b7 50 fe          	movzwl -0x2(%eax),%edx
   343ae:	c1 ef 10             	shr    $0x10,%edi
   343b1:	0f af 55 e4          	imul   -0x1c(%ebp),%edx
   343b5:	0f b7 f3             	movzwl %bx,%esi
   343b8:	01 f2                	add    %esi,%edx
   343ba:	01 fa                	add    %edi,%edx
   343bc:	89 d6                	mov    %edx,%esi
   343be:	c1 ee 10             	shr    $0x10,%esi
   343c1:	39 45 dc             	cmp    %eax,-0x24(%ebp)
   343c4:	77 ba                	ja     34380 <__multiply+0x120>
   343c6:	8b 45 e0             	mov    -0x20(%ebp),%eax
   343c9:	89 50 04             	mov    %edx,0x4(%eax)
   343cc:	83 45 d8 04          	addl   $0x4,-0x28(%ebp)
   343d0:	8b 45 d8             	mov    -0x28(%ebp),%eax
   343d3:	83 45 d4 04          	addl   $0x4,-0x2c(%ebp)
   343d7:	39 45 cc             	cmp    %eax,-0x34(%ebp)
   343da:	0f 87 18 ff ff ff    	ja     342f8 <__multiply+0x98>
   343e0:	8b 75 c8             	mov    -0x38(%ebp),%esi
   343e3:	85 f6                	test   %esi,%esi
   343e5:	7e 29                	jle    34410 <__multiply+0x1b0>
   343e7:	8b 7d c4             	mov    -0x3c(%ebp),%edi
   343ea:	8b 5f fc             	mov    -0x4(%edi),%ebx
   343ed:	85 db                	test   %ebx,%ebx
   343ef:	75 1f                	jne    34410 <__multiply+0x1b0>
   343f1:	8b 55 c8             	mov    -0x38(%ebp),%edx
   343f4:	89 d0                	mov    %edx,%eax
   343f6:	c1 e0 02             	shl    $0x2,%eax
   343f9:	29 c7                	sub    %eax,%edi
   343fb:	89 f8                	mov    %edi,%eax
   343fd:	eb 09                	jmp    34408 <__multiply+0x1a8>
   343ff:	90                   	nop
   34400:	8b 4c 90 fc          	mov    -0x4(%eax,%edx,4),%ecx
   34404:	85 c9                	test   %ecx,%ecx
   34406:	75 05                	jne    3440d <__multiply+0x1ad>
   34408:	83 ea 01             	sub    $0x1,%edx
   3440b:	75 f3                	jne    34400 <__multiply+0x1a0>
   3440d:	89 55 c8             	mov    %edx,-0x38(%ebp)
   34410:	8b 45 c0             	mov    -0x40(%ebp),%eax
   34413:	8b 7d c8             	mov    -0x38(%ebp),%edi
   34416:	89 78 10             	mov    %edi,0x10(%eax)
   34419:	83 c4 3c             	add    $0x3c,%esp
   3441c:	5b                   	pop    %ebx
   3441d:	5e                   	pop    %esi
   3441e:	5f                   	pop    %edi
   3441f:	5d                   	pop    %ebp
   34420:	c3                   	ret    
   34421:	eb 0d                	jmp    34430 <__pow5mult>
   34423:	90                   	nop
   34424:	90                   	nop
   34425:	90                   	nop
   34426:	90                   	nop
   34427:	90                   	nop
   34428:	90                   	nop
   34429:	90                   	nop
   3442a:	90                   	nop
   3442b:	90                   	nop
   3442c:	90                   	nop
   3442d:	90                   	nop
   3442e:	90                   	nop
   3442f:	90                   	nop

00034430 <__pow5mult>:
   34430:	55                   	push   %ebp
   34431:	89 e5                	mov    %esp,%ebp
   34433:	57                   	push   %edi
   34434:	56                   	push   %esi
   34435:	53                   	push   %ebx
   34436:	83 ec 2c             	sub    $0x2c,%esp
   34439:	8b 5d 10             	mov    0x10(%ebp),%ebx
   3443c:	8b 4d 08             	mov    0x8(%ebp),%ecx
   3443f:	8b 7d 0c             	mov    0xc(%ebp),%edi
   34442:	89 d8                	mov    %ebx,%eax
   34444:	83 e0 03             	and    $0x3,%eax
   34447:	0f 85 a3 00 00 00    	jne    344f0 <__pow5mult+0xc0>
   3444d:	c1 fb 02             	sar    $0x2,%ebx
   34450:	85 db                	test   %ebx,%ebx
   34452:	74 5c                	je     344b0 <__pow5mult+0x80>
   34454:	8b 71 48             	mov    0x48(%ecx),%esi
   34457:	85 f6                	test   %esi,%esi
   34459:	0f 84 bd 00 00 00    	je     3451c <__pow5mult+0xec>
   3445f:	f6 c3 01             	test   $0x1,%bl
   34462:	75 15                	jne    34479 <__pow5mult+0x49>
   34464:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34468:	d1 fb                	sar    %ebx
   3446a:	74 44                	je     344b0 <__pow5mult+0x80>
   3446c:	8b 06                	mov    (%esi),%eax
   3446e:	85 c0                	test   %eax,%eax
   34470:	74 4e                	je     344c0 <__pow5mult+0x90>
   34472:	89 c6                	mov    %eax,%esi
   34474:	f6 c3 01             	test   $0x1,%bl
   34477:	74 ef                	je     34468 <__pow5mult+0x38>
   34479:	89 0c 24             	mov    %ecx,(%esp)
   3447c:	89 74 24 08          	mov    %esi,0x8(%esp)
   34480:	89 7c 24 04          	mov    %edi,0x4(%esp)
   34484:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   34487:	e8 d4 fd ff ff       	call   34260 <__multiply>
   3448c:	85 ff                	test   %edi,%edi
   3448e:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   34491:	89 45 e0             	mov    %eax,-0x20(%ebp)
   34494:	74 52                	je     344e8 <__pow5mult+0xb8>
   34496:	8b 57 04             	mov    0x4(%edi),%edx
   34499:	d1 fb                	sar    %ebx
   3449b:	8b 41 4c             	mov    0x4c(%ecx),%eax
   3449e:	8d 04 90             	lea    (%eax,%edx,4),%eax
   344a1:	8b 10                	mov    (%eax),%edx
   344a3:	89 17                	mov    %edx,(%edi)
   344a5:	89 38                	mov    %edi,(%eax)
   344a7:	8b 7d e0             	mov    -0x20(%ebp),%edi
   344aa:	75 c0                	jne    3446c <__pow5mult+0x3c>
   344ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   344b0:	83 c4 2c             	add    $0x2c,%esp
   344b3:	89 f8                	mov    %edi,%eax
   344b5:	5b                   	pop    %ebx
   344b6:	5e                   	pop    %esi
   344b7:	5f                   	pop    %edi
   344b8:	5d                   	pop    %ebp
   344b9:	c3                   	ret    
   344ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   344c0:	89 74 24 08          	mov    %esi,0x8(%esp)
   344c4:	89 74 24 04          	mov    %esi,0x4(%esp)
   344c8:	89 0c 24             	mov    %ecx,(%esp)
   344cb:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   344ce:	e8 8d fd ff ff       	call   34260 <__multiply>
   344d3:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   344d6:	89 06                	mov    %eax,(%esi)
   344d8:	89 c6                	mov    %eax,%esi
   344da:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
   344e0:	eb 92                	jmp    34474 <__pow5mult+0x44>
   344e2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   344e8:	8b 7d e0             	mov    -0x20(%ebp),%edi
   344eb:	e9 78 ff ff ff       	jmp    34468 <__pow5mult+0x38>
   344f0:	8b 04 85 5c 72 03 00 	mov    0x3725c(,%eax,4),%eax
   344f7:	89 7c 24 04          	mov    %edi,0x4(%esp)
   344fb:	89 0c 24             	mov    %ecx,(%esp)
   344fe:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   34505:	00 
   34506:	89 44 24 08          	mov    %eax,0x8(%esp)
   3450a:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   3450d:	e8 5e fa ff ff       	call   33f70 <__multadd>
   34512:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   34515:	89 c7                	mov    %eax,%edi
   34517:	e9 31 ff ff ff       	jmp    3444d <__pow5mult+0x1d>
   3451c:	89 0c 24             	mov    %ecx,(%esp)
   3451f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   34526:	00 
   34527:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   3452a:	e8 81 f9 ff ff       	call   33eb0 <_Balloc>
   3452f:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   34532:	c7 40 14 71 02 00 00 	movl   $0x271,0x14(%eax)
   34539:	89 c6                	mov    %eax,%esi
   3453b:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
   34542:	89 41 48             	mov    %eax,0x48(%ecx)
   34545:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
   3454b:	e9 0f ff ff ff       	jmp    3445f <__pow5mult+0x2f>

00034550 <__lshift>:
   34550:	55                   	push   %ebp
   34551:	89 e5                	mov    %esp,%ebp
   34553:	57                   	push   %edi
   34554:	56                   	push   %esi
   34555:	53                   	push   %ebx
   34556:	83 ec 2c             	sub    $0x2c,%esp
   34559:	8b 45 0c             	mov    0xc(%ebp),%eax
   3455c:	8b 75 10             	mov    0x10(%ebp),%esi
   3455f:	89 c7                	mov    %eax,%edi
   34561:	8b 50 04             	mov    0x4(%eax),%edx
   34564:	8b 40 10             	mov    0x10(%eax),%eax
   34567:	89 f3                	mov    %esi,%ebx
   34569:	c1 fb 05             	sar    $0x5,%ebx
   3456c:	01 d8                	add    %ebx,%eax
   3456e:	89 45 d0             	mov    %eax,-0x30(%ebp)
   34571:	83 c0 01             	add    $0x1,%eax
   34574:	89 c1                	mov    %eax,%ecx
   34576:	89 45 d8             	mov    %eax,-0x28(%ebp)
   34579:	8b 47 08             	mov    0x8(%edi),%eax
   3457c:	39 c1                	cmp    %eax,%ecx
   3457e:	7e 09                	jle    34589 <__lshift+0x39>
   34580:	01 c0                	add    %eax,%eax
   34582:	83 c2 01             	add    $0x1,%edx
   34585:	39 c1                	cmp    %eax,%ecx
   34587:	7f f7                	jg     34580 <__lshift+0x30>
   34589:	8b 45 08             	mov    0x8(%ebp),%eax
   3458c:	89 54 24 04          	mov    %edx,0x4(%esp)
   34590:	89 04 24             	mov    %eax,(%esp)
   34593:	e8 18 f9 ff ff       	call   33eb0 <_Balloc>
   34598:	85 db                	test   %ebx,%ebx
   3459a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   3459d:	8d 50 14             	lea    0x14(%eax),%edx
   345a0:	7e 17                	jle    345b9 <__lshift+0x69>
   345a2:	31 c0                	xor    %eax,%eax
   345a4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   345a8:	c7 04 82 00 00 00 00 	movl   $0x0,(%edx,%eax,4)
   345af:	83 c0 01             	add    $0x1,%eax
   345b2:	39 d8                	cmp    %ebx,%eax
   345b4:	75 f2                	jne    345a8 <__lshift+0x58>
   345b6:	8d 14 82             	lea    (%edx,%eax,4),%edx
   345b9:	8b 7d 0c             	mov    0xc(%ebp),%edi
   345bc:	8b 45 0c             	mov    0xc(%ebp),%eax
   345bf:	8b 4f 10             	mov    0x10(%edi),%ecx
   345c2:	83 c0 14             	add    $0x14,%eax
   345c5:	83 e6 1f             	and    $0x1f,%esi
   345c8:	89 75 e0             	mov    %esi,-0x20(%ebp)
   345cb:	8d 3c 88             	lea    (%eax,%ecx,4),%edi
   345ce:	89 7d e4             	mov    %edi,-0x1c(%ebp)
   345d1:	74 7d                	je     34650 <__lshift+0x100>
   345d3:	c7 45 dc 20 00 00 00 	movl   $0x20,-0x24(%ebp)
   345da:	29 75 dc             	sub    %esi,-0x24(%ebp)
   345dd:	31 f6                	xor    %esi,%esi
   345df:	eb 09                	jmp    345ea <__lshift+0x9a>
   345e1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   345e8:	89 fa                	mov    %edi,%edx
   345ea:	8b 18                	mov    (%eax),%ebx
   345ec:	83 c0 04             	add    $0x4,%eax
   345ef:	0f b6 4d e0          	movzbl -0x20(%ebp),%ecx
   345f3:	8d 7a 04             	lea    0x4(%edx),%edi
   345f6:	d3 e3                	shl    %cl,%ebx
   345f8:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
   345fc:	09 f3                	or     %esi,%ebx
   345fe:	89 1a                	mov    %ebx,(%edx)
   34600:	8b 70 fc             	mov    -0x4(%eax),%esi
   34603:	d3 ee                	shr    %cl,%esi
   34605:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
   34608:	77 de                	ja     345e8 <__lshift+0x98>
   3460a:	8b 45 d0             	mov    -0x30(%ebp),%eax
   3460d:	89 72 04             	mov    %esi,0x4(%edx)
   34610:	83 c0 02             	add    $0x2,%eax
   34613:	85 f6                	test   %esi,%esi
   34615:	0f 44 45 d8          	cmove  -0x28(%ebp),%eax
   34619:	89 45 d8             	mov    %eax,-0x28(%ebp)
   3461c:	8b 45 d8             	mov    -0x28(%ebp),%eax
   3461f:	8b 7d d4             	mov    -0x2c(%ebp),%edi
   34622:	8b 75 0c             	mov    0xc(%ebp),%esi
   34625:	83 e8 01             	sub    $0x1,%eax
   34628:	89 47 10             	mov    %eax,0x10(%edi)
   3462b:	8b 45 0c             	mov    0xc(%ebp),%eax
   3462e:	8b 50 04             	mov    0x4(%eax),%edx
   34631:	8b 45 08             	mov    0x8(%ebp),%eax
   34634:	8b 40 4c             	mov    0x4c(%eax),%eax
   34637:	8d 04 90             	lea    (%eax,%edx,4),%eax
   3463a:	8b 10                	mov    (%eax),%edx
   3463c:	89 16                	mov    %edx,(%esi)
   3463e:	89 30                	mov    %esi,(%eax)
   34640:	83 c4 2c             	add    $0x2c,%esp
   34643:	89 f8                	mov    %edi,%eax
   34645:	5b                   	pop    %ebx
   34646:	5e                   	pop    %esi
   34647:	5f                   	pop    %edi
   34648:	5d                   	pop    %ebp
   34649:	c3                   	ret    
   3464a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   34650:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
   34653:	90                   	nop
   34654:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34658:	83 c0 04             	add    $0x4,%eax
   3465b:	8b 48 fc             	mov    -0x4(%eax),%ecx
   3465e:	83 c2 04             	add    $0x4,%edx
   34661:	39 c3                	cmp    %eax,%ebx
   34663:	89 4a fc             	mov    %ecx,-0x4(%edx)
   34666:	77 f0                	ja     34658 <__lshift+0x108>
   34668:	eb b2                	jmp    3461c <__lshift+0xcc>
   3466a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

00034670 <__mcmp>:
   34670:	55                   	push   %ebp
   34671:	89 e5                	mov    %esp,%ebp
   34673:	8b 4d 08             	mov    0x8(%ebp),%ecx
   34676:	8b 55 0c             	mov    0xc(%ebp),%edx
   34679:	53                   	push   %ebx
   3467a:	8b 41 10             	mov    0x10(%ecx),%eax
   3467d:	8b 5a 10             	mov    0x10(%edx),%ebx
   34680:	29 d8                	sub    %ebx,%eax
   34682:	85 c0                	test   %eax,%eax
   34684:	75 27                	jne    346ad <__mcmp+0x3d>
   34686:	c1 e3 02             	shl    $0x2,%ebx
   34689:	83 c1 14             	add    $0x14,%ecx
   3468c:	8d 04 19             	lea    (%ecx,%ebx,1),%eax
   3468f:	8d 54 1a 14          	lea    0x14(%edx,%ebx,1),%edx
   34693:	eb 07                	jmp    3469c <__mcmp+0x2c>
   34695:	8d 76 00             	lea    0x0(%esi),%esi
   34698:	39 c1                	cmp    %eax,%ecx
   3469a:	73 14                	jae    346b0 <__mcmp+0x40>
   3469c:	83 ea 04             	sub    $0x4,%edx
   3469f:	83 e8 04             	sub    $0x4,%eax
   346a2:	8b 1a                	mov    (%edx),%ebx
   346a4:	39 18                	cmp    %ebx,(%eax)
   346a6:	74 f0                	je     34698 <__mcmp+0x28>
   346a8:	19 c0                	sbb    %eax,%eax
   346aa:	83 c8 01             	or     $0x1,%eax
   346ad:	5b                   	pop    %ebx
   346ae:	5d                   	pop    %ebp
   346af:	c3                   	ret    
   346b0:	31 c0                	xor    %eax,%eax
   346b2:	5b                   	pop    %ebx
   346b3:	5d                   	pop    %ebp
   346b4:	c3                   	ret    
   346b5:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   346b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

000346c0 <__mdiff>:
   346c0:	55                   	push   %ebp
   346c1:	89 e5                	mov    %esp,%ebp
   346c3:	57                   	push   %edi
   346c4:	56                   	push   %esi
   346c5:	53                   	push   %ebx
   346c6:	83 ec 2c             	sub    $0x2c,%esp
   346c9:	8b 75 0c             	mov    0xc(%ebp),%esi
   346cc:	8b 5d 10             	mov    0x10(%ebp),%ebx
   346cf:	89 34 24             	mov    %esi,(%esp)
   346d2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
   346d6:	e8 95 ff ff ff       	call   34670 <__mcmp>
   346db:	85 c0                	test   %eax,%eax
   346dd:	0f 84 25 01 00 00    	je     34808 <__mdiff+0x148>
   346e3:	0f 88 0f 01 00 00    	js     347f8 <__mdiff+0x138>
   346e9:	31 ff                	xor    %edi,%edi
   346eb:	8b 46 04             	mov    0x4(%esi),%eax
   346ee:	83 c6 14             	add    $0x14,%esi
   346f1:	89 44 24 04          	mov    %eax,0x4(%esp)
   346f5:	8b 45 08             	mov    0x8(%ebp),%eax
   346f8:	89 04 24             	mov    %eax,(%esp)
   346fb:	e8 b0 f7 ff ff       	call   33eb0 <_Balloc>
   34700:	8d 4b 14             	lea    0x14(%ebx),%ecx
   34703:	89 c2                	mov    %eax,%edx
   34705:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   34708:	89 78 0c             	mov    %edi,0xc(%eax)
   3470b:	8b 46 fc             	mov    -0x4(%esi),%eax
   3470e:	89 75 e4             	mov    %esi,-0x1c(%ebp)
   34711:	89 45 dc             	mov    %eax,-0x24(%ebp)
   34714:	8d 04 86             	lea    (%esi,%eax,4),%eax
   34717:	89 45 d8             	mov    %eax,-0x28(%ebp)
   3471a:	8b 43 10             	mov    0x10(%ebx),%eax
   3471d:	31 db                	xor    %ebx,%ebx
   3471f:	8d 04 81             	lea    (%ecx,%eax,4),%eax
   34722:	89 45 e0             	mov    %eax,-0x20(%ebp)
   34725:	89 d0                	mov    %edx,%eax
   34727:	83 c0 14             	add    $0x14,%eax
   3472a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   34730:	8b 75 e4             	mov    -0x1c(%ebp),%esi
   34733:	83 c0 04             	add    $0x4,%eax
   34736:	83 c1 04             	add    $0x4,%ecx
   34739:	83 45 e4 04          	addl   $0x4,-0x1c(%ebp)
   3473d:	8b 3e                	mov    (%esi),%edi
   3473f:	8b 71 fc             	mov    -0x4(%ecx),%esi
   34742:	0f b7 d7             	movzwl %di,%edx
   34745:	01 da                	add    %ebx,%edx
   34747:	0f b7 de             	movzwl %si,%ebx
   3474a:	29 da                	sub    %ebx,%edx
   3474c:	c1 ef 10             	shr    $0x10,%edi
   3474f:	89 d3                	mov    %edx,%ebx
   34751:	c1 ee 10             	shr    $0x10,%esi
   34754:	0f b7 d2             	movzwl %dx,%edx
   34757:	c1 fb 10             	sar    $0x10,%ebx
   3475a:	29 f7                	sub    %esi,%edi
   3475c:	01 df                	add    %ebx,%edi
   3475e:	89 fb                	mov    %edi,%ebx
   34760:	c1 e7 10             	shl    $0x10,%edi
   34763:	09 d7                	or     %edx,%edi
   34765:	c1 fb 10             	sar    $0x10,%ebx
   34768:	39 4d e0             	cmp    %ecx,-0x20(%ebp)
   3476b:	89 78 fc             	mov    %edi,-0x4(%eax)
   3476e:	77 c0                	ja     34730 <__mdiff+0x70>
   34770:	8b 75 e4             	mov    -0x1c(%ebp),%esi
   34773:	8b 4d d8             	mov    -0x28(%ebp),%ecx
   34776:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   34779:	89 75 e0             	mov    %esi,-0x20(%ebp)
   3477c:	39 f1                	cmp    %esi,%ecx
   3477e:	76 3f                	jbe    347bf <__mdiff+0xff>
   34780:	8b 3e                	mov    (%esi),%edi
   34782:	83 c6 04             	add    $0x4,%esi
   34785:	83 c0 04             	add    $0x4,%eax
   34788:	0f b7 d7             	movzwl %di,%edx
   3478b:	01 da                	add    %ebx,%edx
   3478d:	89 d3                	mov    %edx,%ebx
   3478f:	0f b7 d2             	movzwl %dx,%edx
   34792:	c1 fb 10             	sar    $0x10,%ebx
   34795:	c1 ef 10             	shr    $0x10,%edi
   34798:	01 df                	add    %ebx,%edi
   3479a:	89 fb                	mov    %edi,%ebx
   3479c:	c1 e7 10             	shl    $0x10,%edi
   3479f:	09 d7                	or     %edx,%edi
   347a1:	c1 fb 10             	sar    $0x10,%ebx
   347a4:	39 f1                	cmp    %esi,%ecx
   347a6:	89 78 fc             	mov    %edi,-0x4(%eax)
   347a9:	77 d5                	ja     34780 <__mdiff+0xc0>
   347ab:	8b 45 e0             	mov    -0x20(%ebp),%eax
   347ae:	8b 4d d8             	mov    -0x28(%ebp),%ecx
   347b1:	f7 d0                	not    %eax
   347b3:	01 c8                	add    %ecx,%eax
   347b5:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   347b8:	c1 e8 02             	shr    $0x2,%eax
   347bb:	8d 44 81 04          	lea    0x4(%ecx,%eax,4),%eax
   347bf:	85 ff                	test   %edi,%edi
   347c1:	75 23                	jne    347e6 <__mdiff+0x126>
   347c3:	8b 4d dc             	mov    -0x24(%ebp),%ecx
   347c6:	8d 14 8d 00 00 00 00 	lea    0x0(,%ecx,4),%edx
   347cd:	29 d0                	sub    %edx,%eax
   347cf:	89 ca                	mov    %ecx,%edx
   347d1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   347d8:	83 ea 01             	sub    $0x1,%edx
   347db:	8b 4c 90 fc          	mov    -0x4(%eax,%edx,4),%ecx
   347df:	85 c9                	test   %ecx,%ecx
   347e1:	74 f5                	je     347d8 <__mdiff+0x118>
   347e3:	89 55 dc             	mov    %edx,-0x24(%ebp)
   347e6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   347e9:	8b 4d dc             	mov    -0x24(%ebp),%ecx
   347ec:	89 48 10             	mov    %ecx,0x10(%eax)
   347ef:	83 c4 2c             	add    $0x2c,%esp
   347f2:	5b                   	pop    %ebx
   347f3:	5e                   	pop    %esi
   347f4:	5f                   	pop    %edi
   347f5:	5d                   	pop    %ebp
   347f6:	c3                   	ret    
   347f7:	90                   	nop
   347f8:	89 f0                	mov    %esi,%eax
   347fa:	bf 01 00 00 00       	mov    $0x1,%edi
   347ff:	89 de                	mov    %ebx,%esi
   34801:	89 c3                	mov    %eax,%ebx
   34803:	e9 e3 fe ff ff       	jmp    346eb <__mdiff+0x2b>
   34808:	8b 45 08             	mov    0x8(%ebp),%eax
   3480b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   34812:	00 
   34813:	89 04 24             	mov    %eax,(%esp)
   34816:	e8 95 f6 ff ff       	call   33eb0 <_Balloc>
   3481b:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
   34822:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
   34829:	83 c4 2c             	add    $0x2c,%esp
   3482c:	5b                   	pop    %ebx
   3482d:	5e                   	pop    %esi
   3482e:	5f                   	pop    %edi
   3482f:	5d                   	pop    %ebp
   34830:	c3                   	ret    
   34831:	eb 0d                	jmp    34840 <__ulp>
   34833:	90                   	nop
   34834:	90                   	nop
   34835:	90                   	nop
   34836:	90                   	nop
   34837:	90                   	nop
   34838:	90                   	nop
   34839:	90                   	nop
   3483a:	90                   	nop
   3483b:	90                   	nop
   3483c:	90                   	nop
   3483d:	90                   	nop
   3483e:	90                   	nop
   3483f:	90                   	nop

00034840 <__ulp>:
   34840:	55                   	push   %ebp
   34841:	89 e5                	mov    %esp,%ebp
   34843:	83 ec 08             	sub    $0x8,%esp
   34846:	dd 45 08             	fldl   0x8(%ebp)
   34849:	dd 5d f8             	fstpl  -0x8(%ebp)
   3484c:	8b 4d fc             	mov    -0x4(%ebp),%ecx
   3484f:	81 e1 00 00 f0 7f    	and    $0x7ff00000,%ecx
   34855:	81 e9 00 00 40 03    	sub    $0x3400000,%ecx
   3485b:	85 c9                	test   %ecx,%ecx
   3485d:	7e 11                	jle    34870 <__ulp+0x30>
   3485f:	89 4d fc             	mov    %ecx,-0x4(%ebp)
   34862:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
   34869:	dd 45 f8             	fldl   -0x8(%ebp)
   3486c:	c9                   	leave  
   3486d:	c3                   	ret    
   3486e:	66 90                	xchg   %ax,%ax
   34870:	f7 d9                	neg    %ecx
   34872:	c1 f9 14             	sar    $0x14,%ecx
   34875:	83 f9 13             	cmp    $0x13,%ecx
   34878:	7e 26                	jle    348a0 <__ulp+0x60>
   3487a:	83 f9 32             	cmp    $0x32,%ecx
   3487d:	b8 01 00 00 00       	mov    $0x1,%eax
   34882:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
   34889:	7f 0b                	jg     34896 <__ulp+0x56>
   3488b:	ba 33 00 00 00       	mov    $0x33,%edx
   34890:	29 ca                	sub    %ecx,%edx
   34892:	89 d1                	mov    %edx,%ecx
   34894:	d3 e0                	shl    %cl,%eax
   34896:	89 45 f8             	mov    %eax,-0x8(%ebp)
   34899:	dd 45 f8             	fldl   -0x8(%ebp)
   3489c:	c9                   	leave  
   3489d:	c3                   	ret    
   3489e:	66 90                	xchg   %ax,%ax
   348a0:	b8 00 00 08 00       	mov    $0x80000,%eax
   348a5:	d3 f8                	sar    %cl,%eax
   348a7:	89 45 fc             	mov    %eax,-0x4(%ebp)
   348aa:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
   348b1:	dd 45 f8             	fldl   -0x8(%ebp)
   348b4:	c9                   	leave  
   348b5:	c3                   	ret    
   348b6:	8d 76 00             	lea    0x0(%esi),%esi
   348b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

000348c0 <__b2d>:
   348c0:	55                   	push   %ebp
   348c1:	89 e5                	mov    %esp,%ebp
   348c3:	57                   	push   %edi
   348c4:	56                   	push   %esi
   348c5:	53                   	push   %ebx
   348c6:	83 ec 18             	sub    $0x18,%esp
   348c9:	8b 45 08             	mov    0x8(%ebp),%eax
   348cc:	8d 78 14             	lea    0x14(%eax),%edi
   348cf:	8b 40 10             	mov    0x10(%eax),%eax
   348d2:	8d 1c 87             	lea    (%edi,%eax,4),%ebx
   348d5:	8b 73 fc             	mov    -0x4(%ebx),%esi
   348d8:	8d 43 fc             	lea    -0x4(%ebx),%eax
   348db:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   348de:	89 34 24             	mov    %esi,(%esp)
   348e1:	e8 6a f8 ff ff       	call   34150 <__hi0bits>
   348e6:	8b 4d 0c             	mov    0xc(%ebp),%ecx
   348e9:	ba 20 00 00 00       	mov    $0x20,%edx
   348ee:	29 c2                	sub    %eax,%edx
   348f0:	83 f8 0a             	cmp    $0xa,%eax
   348f3:	89 11                	mov    %edx,(%ecx)
   348f5:	7f 41                	jg     34938 <__b2d+0x78>
   348f7:	b9 0b 00 00 00       	mov    $0xb,%ecx
   348fc:	89 f2                	mov    %esi,%edx
   348fe:	29 c1                	sub    %eax,%ecx
   34900:	d3 ea                	shr    %cl,%edx
   34902:	81 ca 00 00 f0 3f    	or     $0x3ff00000,%edx
   34908:	89 55 ec             	mov    %edx,-0x14(%ebp)
   3490b:	31 d2                	xor    %edx,%edx
   3490d:	3b 7d e4             	cmp    -0x1c(%ebp),%edi
   34910:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
   34917:	73 05                	jae    3491e <__b2d+0x5e>
   34919:	8b 53 f8             	mov    -0x8(%ebx),%edx
   3491c:	d3 ea                	shr    %cl,%edx
   3491e:	8d 48 15             	lea    0x15(%eax),%ecx
   34921:	d3 e6                	shl    %cl,%esi
   34923:	09 f2                	or     %esi,%edx
   34925:	89 55 e8             	mov    %edx,-0x18(%ebp)
   34928:	dd 45 e8             	fldl   -0x18(%ebp)
   3492b:	83 c4 18             	add    $0x18,%esp
   3492e:	5b                   	pop    %ebx
   3492f:	5e                   	pop    %esi
   34930:	5f                   	pop    %edi
   34931:	5d                   	pop    %ebp
   34932:	c3                   	ret    
   34933:	90                   	nop
   34934:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34938:	31 d2                	xor    %edx,%edx
   3493a:	3b 7d e4             	cmp    -0x1c(%ebp),%edi
   3493d:	73 09                	jae    34948 <__b2d+0x88>
   3493f:	8b 53 f8             	mov    -0x8(%ebx),%edx
   34942:	8d 4b f8             	lea    -0x8(%ebx),%ecx
   34945:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   34948:	89 c3                	mov    %eax,%ebx
   3494a:	83 eb 0b             	sub    $0xb,%ebx
   3494d:	89 5d e0             	mov    %ebx,-0x20(%ebp)
   34950:	74 4e                	je     349a0 <__b2d+0xe0>
   34952:	0f b6 4d e0          	movzbl -0x20(%ebp),%ecx
   34956:	bb 2b 00 00 00       	mov    $0x2b,%ebx
   3495b:	29 c3                	sub    %eax,%ebx
   3495d:	89 d0                	mov    %edx,%eax
   3495f:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
   34966:	d3 e6                	shl    %cl,%esi
   34968:	89 d9                	mov    %ebx,%ecx
   3496a:	d3 e8                	shr    %cl,%eax
   3496c:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   3496f:	81 ce 00 00 f0 3f    	or     $0x3ff00000,%esi
   34975:	09 c6                	or     %eax,%esi
   34977:	31 c0                	xor    %eax,%eax
   34979:	89 75 ec             	mov    %esi,-0x14(%ebp)
   3497c:	39 f9                	cmp    %edi,%ecx
   3497e:	76 07                	jbe    34987 <__b2d+0xc7>
   34980:	8b 41 fc             	mov    -0x4(%ecx),%eax
   34983:	89 d9                	mov    %ebx,%ecx
   34985:	d3 e8                	shr    %cl,%eax
   34987:	0f b6 4d e0          	movzbl -0x20(%ebp),%ecx
   3498b:	d3 e2                	shl    %cl,%edx
   3498d:	09 d0                	or     %edx,%eax
   3498f:	89 45 e8             	mov    %eax,-0x18(%ebp)
   34992:	dd 45 e8             	fldl   -0x18(%ebp)
   34995:	83 c4 18             	add    $0x18,%esp
   34998:	5b                   	pop    %ebx
   34999:	5e                   	pop    %esi
   3499a:	5f                   	pop    %edi
   3499b:	5d                   	pop    %ebp
   3499c:	c3                   	ret    
   3499d:	8d 76 00             	lea    0x0(%esi),%esi
   349a0:	81 ce 00 00 f0 3f    	or     $0x3ff00000,%esi
   349a6:	89 75 ec             	mov    %esi,-0x14(%ebp)
   349a9:	89 55 e8             	mov    %edx,-0x18(%ebp)
   349ac:	dd 45 e8             	fldl   -0x18(%ebp)
   349af:	83 c4 18             	add    $0x18,%esp
   349b2:	5b                   	pop    %ebx
   349b3:	5e                   	pop    %esi
   349b4:	5f                   	pop    %edi
   349b5:	5d                   	pop    %ebp
   349b6:	c3                   	ret    
   349b7:	89 f6                	mov    %esi,%esi
   349b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

000349c0 <__d2b>:
   349c0:	55                   	push   %ebp
   349c1:	89 e5                	mov    %esp,%ebp
   349c3:	57                   	push   %edi
   349c4:	56                   	push   %esi
   349c5:	53                   	push   %ebx
   349c6:	83 ec 2c             	sub    $0x2c,%esp
   349c9:	8b 45 08             	mov    0x8(%ebp),%eax
   349cc:	dd 45 0c             	fldl   0xc(%ebp)
   349cf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   349d6:	00 
   349d7:	dd 5d d0             	fstpl  -0x30(%ebp)
   349da:	89 04 24             	mov    %eax,(%esp)
   349dd:	e8 ce f4 ff ff       	call   33eb0 <_Balloc>
   349e2:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
   349e5:	89 c6                	mov    %eax,%esi
   349e7:	89 d8                	mov    %ebx,%eax
   349e9:	81 e3 ff ff ff 7f    	and    $0x7fffffff,%ebx
   349ef:	25 ff ff 0f 00       	and    $0xfffff,%eax
   349f4:	c1 eb 14             	shr    $0x14,%ebx
   349f7:	85 db                	test   %ebx,%ebx
   349f9:	74 05                	je     34a00 <__d2b+0x40>
   349fb:	0d 00 00 10 00       	or     $0x100000,%eax
   34a00:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   34a03:	8b 45 d0             	mov    -0x30(%ebp),%eax
   34a06:	85 c0                	test   %eax,%eax
   34a08:	74 56                	je     34a60 <__d2b+0xa0>
   34a0a:	89 45 e0             	mov    %eax,-0x20(%ebp)
   34a0d:	8d 45 e0             	lea    -0x20(%ebp),%eax
   34a10:	89 04 24             	mov    %eax,(%esp)
   34a13:	e8 98 f7 ff ff       	call   341b0 <__lo0bits>
   34a18:	85 c0                	test   %eax,%eax
   34a1a:	0f 85 90 00 00 00    	jne    34ab0 <__d2b+0xf0>
   34a20:	8b 55 e0             	mov    -0x20(%ebp),%edx
   34a23:	89 56 14             	mov    %edx,0x14(%esi)
   34a26:	8b 55 e4             	mov    -0x1c(%ebp),%edx
   34a29:	83 fa 01             	cmp    $0x1,%edx
   34a2c:	19 ff                	sbb    %edi,%edi
   34a2e:	83 c7 02             	add    $0x2,%edi
   34a31:	85 db                	test   %ebx,%ebx
   34a33:	89 56 18             	mov    %edx,0x18(%esi)
   34a36:	89 7e 10             	mov    %edi,0x10(%esi)
   34a39:	74 49                	je     34a84 <__d2b+0xc4>
   34a3b:	8b 4d 14             	mov    0x14(%ebp),%ecx
   34a3e:	8d 94 18 cd fb ff ff 	lea    -0x433(%eax,%ebx,1),%edx
   34a45:	89 11                	mov    %edx,(%ecx)
   34a47:	ba 35 00 00 00       	mov    $0x35,%edx
   34a4c:	29 c2                	sub    %eax,%edx
   34a4e:	8b 45 18             	mov    0x18(%ebp),%eax
   34a51:	89 10                	mov    %edx,(%eax)
   34a53:	83 c4 2c             	add    $0x2c,%esp
   34a56:	89 f0                	mov    %esi,%eax
   34a58:	5b                   	pop    %ebx
   34a59:	5e                   	pop    %esi
   34a5a:	5f                   	pop    %edi
   34a5b:	5d                   	pop    %ebp
   34a5c:	c3                   	ret    
   34a5d:	8d 76 00             	lea    0x0(%esi),%esi
   34a60:	8d 45 e4             	lea    -0x1c(%ebp),%eax
   34a63:	bf 01 00 00 00       	mov    $0x1,%edi
   34a68:	89 04 24             	mov    %eax,(%esp)
   34a6b:	e8 40 f7 ff ff       	call   341b0 <__lo0bits>
   34a70:	8b 55 e4             	mov    -0x1c(%ebp),%edx
   34a73:	c7 46 10 01 00 00 00 	movl   $0x1,0x10(%esi)
   34a7a:	89 56 14             	mov    %edx,0x14(%esi)
   34a7d:	83 c0 20             	add    $0x20,%eax
   34a80:	85 db                	test   %ebx,%ebx
   34a82:	75 b7                	jne    34a3b <__d2b+0x7b>
   34a84:	8b 4d 14             	mov    0x14(%ebp),%ecx
   34a87:	2d 32 04 00 00       	sub    $0x432,%eax
   34a8c:	89 01                	mov    %eax,(%ecx)
   34a8e:	8b 44 be 10          	mov    0x10(%esi,%edi,4),%eax
   34a92:	c1 e7 05             	shl    $0x5,%edi
   34a95:	89 04 24             	mov    %eax,(%esp)
   34a98:	e8 b3 f6 ff ff       	call   34150 <__hi0bits>
   34a9d:	29 c7                	sub    %eax,%edi
   34a9f:	8b 45 18             	mov    0x18(%ebp),%eax
   34aa2:	89 38                	mov    %edi,(%eax)
   34aa4:	83 c4 2c             	add    $0x2c,%esp
   34aa7:	89 f0                	mov    %esi,%eax
   34aa9:	5b                   	pop    %ebx
   34aaa:	5e                   	pop    %esi
   34aab:	5f                   	pop    %edi
   34aac:	5d                   	pop    %ebp
   34aad:	c3                   	ret    
   34aae:	66 90                	xchg   %ax,%ax
   34ab0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
   34ab3:	b9 20 00 00 00       	mov    $0x20,%ecx
   34ab8:	29 c1                	sub    %eax,%ecx
   34aba:	89 d7                	mov    %edx,%edi
   34abc:	d3 e7                	shl    %cl,%edi
   34abe:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   34ac1:	09 f9                	or     %edi,%ecx
   34ac3:	89 4e 14             	mov    %ecx,0x14(%esi)
   34ac6:	89 c1                	mov    %eax,%ecx
   34ac8:	d3 ea                	shr    %cl,%edx
   34aca:	89 55 e4             	mov    %edx,-0x1c(%ebp)
   34acd:	e9 57 ff ff ff       	jmp    34a29 <__d2b+0x69>
   34ad2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   34ad9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00034ae0 <__ratio>:
   34ae0:	55                   	push   %ebp
   34ae1:	89 e5                	mov    %esp,%ebp
   34ae3:	56                   	push   %esi
   34ae4:	53                   	push   %ebx
   34ae5:	83 ec 30             	sub    $0x30,%esp
   34ae8:	8b 75 08             	mov    0x8(%ebp),%esi
   34aeb:	8d 45 f0             	lea    -0x10(%ebp),%eax
   34aee:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   34af1:	89 44 24 04          	mov    %eax,0x4(%esp)
   34af5:	89 34 24             	mov    %esi,(%esp)
   34af8:	e8 c3 fd ff ff       	call   348c0 <__b2d>
   34afd:	8d 45 f4             	lea    -0xc(%ebp),%eax
   34b00:	89 44 24 04          	mov    %eax,0x4(%esp)
   34b04:	89 1c 24             	mov    %ebx,(%esp)
   34b07:	dd 55 e0             	fstl   -0x20(%ebp)
   34b0a:	dd 5d d8             	fstpl  -0x28(%ebp)
   34b0d:	e8 ae fd ff ff       	call   348c0 <__b2d>
   34b12:	8b 46 10             	mov    0x10(%esi),%eax
   34b15:	2b 43 10             	sub    0x10(%ebx),%eax
   34b18:	8b 55 f0             	mov    -0x10(%ebp),%edx
   34b1b:	2b 55 f4             	sub    -0xc(%ebp),%edx
   34b1e:	c1 e0 05             	shl    $0x5,%eax
   34b21:	01 d0                	add    %edx,%eax
   34b23:	dd 55 d0             	fstl   -0x30(%ebp)
   34b26:	85 c0                	test   %eax,%eax
   34b28:	dd 45 d8             	fldl   -0x28(%ebp)
   34b2b:	7e 1b                	jle    34b48 <__ratio+0x68>
   34b2d:	dd d8                	fstp   %st(0)
   34b2f:	c1 e0 14             	shl    $0x14,%eax
   34b32:	01 45 e4             	add    %eax,-0x1c(%ebp)
   34b35:	dd 45 e0             	fldl   -0x20(%ebp)
   34b38:	83 c4 30             	add    $0x30,%esp
   34b3b:	5b                   	pop    %ebx
   34b3c:	de f1                	fdivp  %st,%st(1)
   34b3e:	5e                   	pop    %esi
   34b3f:	5d                   	pop    %ebp
   34b40:	c3                   	ret    
   34b41:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   34b48:	dd d9                	fstp   %st(1)
   34b4a:	c1 e0 14             	shl    $0x14,%eax
   34b4d:	29 45 d4             	sub    %eax,-0x2c(%ebp)
   34b50:	dd 45 d0             	fldl   -0x30(%ebp)
   34b53:	83 c4 30             	add    $0x30,%esp
   34b56:	5b                   	pop    %ebx
   34b57:	de f9                	fdivrp %st,%st(1)
   34b59:	5e                   	pop    %esi
   34b5a:	5d                   	pop    %ebp
   34b5b:	c3                   	ret    
   34b5c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

00034b60 <_mprec_log10>:
   34b60:	55                   	push   %ebp
   34b61:	89 e5                	mov    %esp,%ebp
   34b63:	8b 45 08             	mov    0x8(%ebp),%eax
   34b66:	83 f8 17             	cmp    $0x17,%eax
   34b69:	7e 1d                	jle    34b88 <_mprec_log10+0x28>
   34b6b:	d9 e8                	fld1   
   34b6d:	d9 05 10 72 03 00    	flds   0x37210
   34b73:	90                   	nop
   34b74:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34b78:	83 e8 01             	sub    $0x1,%eax
   34b7b:	dc c9                	fmul   %st,%st(1)
   34b7d:	75 f9                	jne    34b78 <_mprec_log10+0x18>
   34b7f:	dd d8                	fstp   %st(0)
   34b81:	5d                   	pop    %ebp
   34b82:	c3                   	ret    
   34b83:	90                   	nop
   34b84:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34b88:	dd 04 c5 00 73 03 00 	fldl   0x37300(,%eax,8)
   34b8f:	5d                   	pop    %ebp
   34b90:	c3                   	ret    
   34b91:	eb 0d                	jmp    34ba0 <__copybits>
   34b93:	90                   	nop
   34b94:	90                   	nop
   34b95:	90                   	nop
   34b96:	90                   	nop
   34b97:	90                   	nop
   34b98:	90                   	nop
   34b99:	90                   	nop
   34b9a:	90                   	nop
   34b9b:	90                   	nop
   34b9c:	90                   	nop
   34b9d:	90                   	nop
   34b9e:	90                   	nop
   34b9f:	90                   	nop

00034ba0 <__copybits>:
   34ba0:	55                   	push   %ebp
   34ba1:	89 e5                	mov    %esp,%ebp
   34ba3:	57                   	push   %edi
   34ba4:	8b 7d 10             	mov    0x10(%ebp),%edi
   34ba7:	56                   	push   %esi
   34ba8:	8b 75 0c             	mov    0xc(%ebp),%esi
   34bab:	8b 45 08             	mov    0x8(%ebp),%eax
   34bae:	53                   	push   %ebx
   34baf:	8b 4f 10             	mov    0x10(%edi),%ecx
   34bb2:	8d 56 ff             	lea    -0x1(%esi),%edx
   34bb5:	c1 fa 05             	sar    $0x5,%edx
   34bb8:	8d 74 90 04          	lea    0x4(%eax,%edx,4),%esi
   34bbc:	8d 57 14             	lea    0x14(%edi),%edx
   34bbf:	8d 1c 8a             	lea    (%edx,%ecx,4),%ebx
   34bc2:	39 da                	cmp    %ebx,%edx
   34bc4:	73 34                	jae    34bfa <__copybits+0x5a>
   34bc6:	89 c1                	mov    %eax,%ecx
   34bc8:	83 c2 04             	add    $0x4,%edx
   34bcb:	8b 42 fc             	mov    -0x4(%edx),%eax
   34bce:	83 c1 04             	add    $0x4,%ecx
   34bd1:	39 d3                	cmp    %edx,%ebx
   34bd3:	89 41 fc             	mov    %eax,-0x4(%ecx)
   34bd6:	77 f0                	ja     34bc8 <__copybits+0x28>
   34bd8:	8b 45 08             	mov    0x8(%ebp),%eax
   34bdb:	29 fb                	sub    %edi,%ebx
   34bdd:	8d 53 eb             	lea    -0x15(%ebx),%edx
   34be0:	c1 ea 02             	shr    $0x2,%edx
   34be3:	8d 44 90 04          	lea    0x4(%eax,%edx,4),%eax
   34be7:	39 c6                	cmp    %eax,%esi
   34be9:	76 13                	jbe    34bfe <__copybits+0x5e>
   34beb:	90                   	nop
   34bec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34bf0:	83 c0 04             	add    $0x4,%eax
   34bf3:	c7 40 fc 00 00 00 00 	movl   $0x0,-0x4(%eax)
   34bfa:	39 c6                	cmp    %eax,%esi
   34bfc:	77 f2                	ja     34bf0 <__copybits+0x50>
   34bfe:	5b                   	pop    %ebx
   34bff:	5e                   	pop    %esi
   34c00:	5f                   	pop    %edi
   34c01:	5d                   	pop    %ebp
   34c02:	c3                   	ret    
   34c03:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   34c09:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00034c10 <__any_on>:
   34c10:	55                   	push   %ebp
   34c11:	89 e5                	mov    %esp,%ebp
   34c13:	8b 45 08             	mov    0x8(%ebp),%eax
   34c16:	57                   	push   %edi
   34c17:	56                   	push   %esi
   34c18:	53                   	push   %ebx
   34c19:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   34c1c:	8d 50 14             	lea    0x14(%eax),%edx
   34c1f:	8b 40 10             	mov    0x10(%eax),%eax
   34c22:	c1 fb 05             	sar    $0x5,%ebx
   34c25:	39 d8                	cmp    %ebx,%eax
   34c27:	7d 2f                	jge    34c58 <__any_on+0x48>
   34c29:	8d 1c 82             	lea    (%edx,%eax,4),%ebx
   34c2c:	39 da                	cmp    %ebx,%edx
   34c2e:	73 1d                	jae    34c4d <__any_on+0x3d>
   34c30:	8d 43 fc             	lea    -0x4(%ebx),%eax
   34c33:	8b 5b fc             	mov    -0x4(%ebx),%ebx
   34c36:	85 db                	test   %ebx,%ebx
   34c38:	74 0f                	je     34c49 <__any_on+0x39>
   34c3a:	eb 44                	jmp    34c80 <__any_on+0x70>
   34c3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34c40:	83 e8 04             	sub    $0x4,%eax
   34c43:	8b 08                	mov    (%eax),%ecx
   34c45:	85 c9                	test   %ecx,%ecx
   34c47:	75 37                	jne    34c80 <__any_on+0x70>
   34c49:	39 c2                	cmp    %eax,%edx
   34c4b:	72 f3                	jb     34c40 <__any_on+0x30>
   34c4d:	31 c0                	xor    %eax,%eax
   34c4f:	5b                   	pop    %ebx
   34c50:	5e                   	pop    %esi
   34c51:	5f                   	pop    %edi
   34c52:	5d                   	pop    %ebp
   34c53:	c3                   	ret    
   34c54:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34c58:	7e 1e                	jle    34c78 <__any_on+0x68>
   34c5a:	8b 4d 0c             	mov    0xc(%ebp),%ecx
   34c5d:	8d 1c 9a             	lea    (%edx,%ebx,4),%ebx
   34c60:	83 e1 1f             	and    $0x1f,%ecx
   34c63:	74 c7                	je     34c2c <__any_on+0x1c>
   34c65:	8b 3b                	mov    (%ebx),%edi
   34c67:	b8 01 00 00 00       	mov    $0x1,%eax
   34c6c:	89 fe                	mov    %edi,%esi
   34c6e:	d3 ee                	shr    %cl,%esi
   34c70:	d3 e6                	shl    %cl,%esi
   34c72:	39 fe                	cmp    %edi,%esi
   34c74:	75 d9                	jne    34c4f <__any_on+0x3f>
   34c76:	eb b4                	jmp    34c2c <__any_on+0x1c>
   34c78:	8d 1c 9a             	lea    (%edx,%ebx,4),%ebx
   34c7b:	eb af                	jmp    34c2c <__any_on+0x1c>
   34c7d:	8d 76 00             	lea    0x0(%esi),%esi
   34c80:	5b                   	pop    %ebx
   34c81:	b8 01 00 00 00       	mov    $0x1,%eax
   34c86:	5e                   	pop    %esi
   34c87:	5f                   	pop    %edi
   34c88:	5d                   	pop    %ebp
   34c89:	c3                   	ret    
   34c8a:	66 90                	xchg   %ax,%ax
   34c8c:	66 90                	xchg   %ax,%ax
   34c8e:	66 90                	xchg   %ax,%ax

00034c90 <_sbrk_r>:
   34c90:	55                   	push   %ebp
   34c91:	89 e5                	mov    %esp,%ebp
   34c93:	83 ec 18             	sub    $0x18,%esp
   34c96:	8b 45 0c             	mov    0xc(%ebp),%eax
   34c99:	c7 05 20 9a 03 00 00 	movl   $0x0,0x39a20
   34ca0:	00 00 00 
   34ca3:	89 04 24             	mov    %eax,(%esp)
   34ca6:	e8 5a b3 ff ff       	call   30005 <sbrk>
   34cab:	83 f8 ff             	cmp    $0xffffffff,%eax
   34cae:	74 08                	je     34cb8 <_sbrk_r+0x28>
   34cb0:	c9                   	leave  
   34cb1:	c3                   	ret    
   34cb2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   34cb8:	8b 15 20 9a 03 00    	mov    0x39a20,%edx
   34cbe:	85 d2                	test   %edx,%edx
   34cc0:	74 ee                	je     34cb0 <_sbrk_r+0x20>
   34cc2:	8b 4d 08             	mov    0x8(%ebp),%ecx
   34cc5:	89 11                	mov    %edx,(%ecx)
   34cc7:	c9                   	leave  
   34cc8:	c3                   	ret    
   34cc9:	66 90                	xchg   %ax,%ax
   34ccb:	66 90                	xchg   %ax,%ax
   34ccd:	66 90                	xchg   %ax,%ax
   34ccf:	90                   	nop

00034cd0 <__fpclassifyd>:
   34cd0:	55                   	push   %ebp
   34cd1:	b8 02 00 00 00       	mov    $0x2,%eax
   34cd6:	89 e5                	mov    %esp,%ebp
   34cd8:	53                   	push   %ebx
   34cd9:	83 ec 0c             	sub    $0xc,%esp
   34cdc:	dd 45 08             	fldl   0x8(%ebp)
   34cdf:	dd 5d f0             	fstpl  -0x10(%ebp)
   34ce2:	8b 55 f0             	mov    -0x10(%ebp),%edx
   34ce5:	8b 4d f4             	mov    -0xc(%ebp),%ecx
   34ce8:	89 d3                	mov    %edx,%ebx
   34cea:	09 cb                	or     %ecx,%ebx
   34cec:	75 0a                	jne    34cf8 <__fpclassifyd+0x28>
   34cee:	83 c4 0c             	add    $0xc,%esp
   34cf1:	5b                   	pop    %ebx
   34cf2:	5d                   	pop    %ebp
   34cf3:	c3                   	ret    
   34cf4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34cf8:	85 d2                	test   %edx,%edx
   34cfa:	0f 94 c2             	sete   %dl
   34cfd:	75 08                	jne    34d07 <__fpclassifyd+0x37>
   34cff:	81 f9 00 00 00 80    	cmp    $0x80000000,%ecx
   34d05:	74 e7                	je     34cee <__fpclassifyd+0x1e>
   34d07:	81 e1 ff ff ff 7f    	and    $0x7fffffff,%ecx
   34d0d:	b8 04 00 00 00       	mov    $0x4,%eax
   34d12:	8d 99 00 00 f0 ff    	lea    -0x100000(%ecx),%ebx
   34d18:	81 fb ff ff df 7f    	cmp    $0x7fdfffff,%ebx
   34d1e:	76 ce                	jbe    34cee <__fpclassifyd+0x1e>
   34d20:	81 f9 ff ff 0f 00    	cmp    $0xfffff,%ecx
   34d26:	b0 03                	mov    $0x3,%al
   34d28:	76 c4                	jbe    34cee <__fpclassifyd+0x1e>
   34d2a:	31 c0                	xor    %eax,%eax
   34d2c:	81 f9 00 00 f0 7f    	cmp    $0x7ff00000,%ecx
   34d32:	0f 94 c0             	sete   %al
   34d35:	21 d0                	and    %edx,%eax
   34d37:	eb b5                	jmp    34cee <__fpclassifyd+0x1e>
   34d39:	66 90                	xchg   %ax,%ax
   34d3b:	66 90                	xchg   %ax,%ax
   34d3d:	66 90                	xchg   %ax,%ax
   34d3f:	90                   	nop

00034d40 <strlen>:
   34d40:	55                   	push   %ebp
   34d41:	89 e5                	mov    %esp,%ebp
   34d43:	57                   	push   %edi
   34d44:	8b 55 08             	mov    0x8(%ebp),%edx
   34d47:	89 d7                	mov    %edx,%edi
   34d49:	f7 c7 03 00 00 00    	test   $0x3,%edi
   34d4f:	74 25                	je     34d76 <L5>
   34d51:	8a 0f                	mov    (%edi),%cl
   34d53:	47                   	inc    %edi
   34d54:	84 c9                	test   %cl,%cl
   34d56:	74 56                	je     34dae <L15>
   34d58:	f7 c7 03 00 00 00    	test   $0x3,%edi
   34d5e:	74 16                	je     34d76 <L5>
   34d60:	8a 0f                	mov    (%edi),%cl
   34d62:	47                   	inc    %edi
   34d63:	84 c9                	test   %cl,%cl
   34d65:	74 47                	je     34dae <L15>
   34d67:	f7 c7 03 00 00 00    	test   $0x3,%edi
   34d6d:	74 07                	je     34d76 <L5>
   34d6f:	8a 0f                	mov    (%edi),%cl
   34d71:	47                   	inc    %edi
   34d72:	84 c9                	test   %cl,%cl
   34d74:	74 38                	je     34dae <L15>

00034d76 <L5>:
   34d76:	83 ef 04             	sub    $0x4,%edi
   34d79:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00034d80 <L10>:
   34d80:	83 c7 04             	add    $0x4,%edi
   34d83:	8b 0f                	mov    (%edi),%ecx
   34d85:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
   34d8b:	f7 d1                	not    %ecx
   34d8d:	21 c8                	and    %ecx,%eax
   34d8f:	a9 80 80 80 80       	test   $0x80808080,%eax
   34d94:	74 ea                	je     34d80 <L10>
   34d96:	f7 d1                	not    %ecx
   34d98:	47                   	inc    %edi
   34d99:	84 c9                	test   %cl,%cl
   34d9b:	74 11                	je     34dae <L15>
   34d9d:	47                   	inc    %edi
   34d9e:	c1 e9 08             	shr    $0x8,%ecx
   34da1:	84 c9                	test   %cl,%cl
   34da3:	74 09                	je     34dae <L15>
   34da5:	47                   	inc    %edi
   34da6:	c1 e9 08             	shr    $0x8,%ecx
   34da9:	84 c9                	test   %cl,%cl
   34dab:	74 01                	je     34dae <L15>
   34dad:	47                   	inc    %edi

00034dae <L15>:
   34dae:	29 d7                	sub    %edx,%edi
   34db0:	8d 47 ff             	lea    -0x1(%edi),%eax
   34db3:	8d 65 fc             	lea    -0x4(%ebp),%esp
   34db6:	5f                   	pop    %edi
   34db7:	c9                   	leave  
   34db8:	c3                   	ret    
   34db9:	66 90                	xchg   %ax,%ax
   34dbb:	66 90                	xchg   %ax,%ax
   34dbd:	66 90                	xchg   %ax,%ax
   34dbf:	90                   	nop

00034dc0 <__ssprint_r>:
   34dc0:	55                   	push   %ebp
   34dc1:	89 e5                	mov    %esp,%ebp
   34dc3:	57                   	push   %edi
   34dc4:	56                   	push   %esi
   34dc5:	53                   	push   %ebx
   34dc6:	83 ec 2c             	sub    $0x2c,%esp
   34dc9:	8b 45 10             	mov    0x10(%ebp),%eax
   34dcc:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   34dcf:	8b 00                	mov    (%eax),%eax
   34dd1:	89 c7                	mov    %eax,%edi
   34dd3:	8b 45 10             	mov    0x10(%ebp),%eax
   34dd6:	8b 40 08             	mov    0x8(%eax),%eax
   34dd9:	85 c0                	test   %eax,%eax
   34ddb:	0f 84 af 01 00 00    	je     34f90 <__ssprint_r+0x1d0>
   34de1:	31 c9                	xor    %ecx,%ecx
   34de3:	31 d2                	xor    %edx,%edx
   34de5:	8b 03                	mov    (%ebx),%eax
   34de7:	89 ce                	mov    %ecx,%esi
   34de9:	85 f6                	test   %esi,%esi
   34deb:	89 55 e4             	mov    %edx,-0x1c(%ebp)
   34dee:	0f 84 ec 00 00 00    	je     34ee0 <__ssprint_r+0x120>
   34df4:	8b 53 08             	mov    0x8(%ebx),%edx
   34df7:	39 d6                	cmp    %edx,%esi
   34df9:	0f 82 fc 00 00 00    	jb     34efb <__ssprint_r+0x13b>
   34dff:	0f b7 4b 0c          	movzwl 0xc(%ebx),%ecx
   34e03:	66 f7 c1 80 04       	test   $0x480,%cx
   34e08:	0f 84 fa 00 00 00    	je     34f08 <__ssprint_r+0x148>
   34e0e:	8b 53 10             	mov    0x10(%ebx),%edx
   34e11:	29 d0                	sub    %edx,%eax
   34e13:	89 45 dc             	mov    %eax,-0x24(%ebp)
   34e16:	8b 43 14             	mov    0x14(%ebx),%eax
   34e19:	89 55 d8             	mov    %edx,-0x28(%ebp)
   34e1c:	8d 04 40             	lea    (%eax,%eax,2),%eax
   34e1f:	89 c2                	mov    %eax,%edx
   34e21:	c1 ea 1f             	shr    $0x1f,%edx
   34e24:	01 d0                	add    %edx,%eax
   34e26:	89 45 e0             	mov    %eax,-0x20(%ebp)
   34e29:	8b 45 dc             	mov    -0x24(%ebp),%eax
   34e2c:	d1 7d e0             	sarl   -0x20(%ebp)
   34e2f:	8d 44 06 01          	lea    0x1(%esi,%eax,1),%eax
   34e33:	39 45 e0             	cmp    %eax,-0x20(%ebp)
   34e36:	0f 83 34 01 00 00    	jae    34f70 <__ssprint_r+0x1b0>
   34e3c:	89 45 e0             	mov    %eax,-0x20(%ebp)
   34e3f:	80 e5 04             	and    $0x4,%ch
   34e42:	0f 84 c8 00 00 00    	je     34f10 <__ssprint_r+0x150>
   34e48:	89 44 24 04          	mov    %eax,0x4(%esp)
   34e4c:	8b 45 08             	mov    0x8(%ebp),%eax
   34e4f:	89 04 24             	mov    %eax,(%esp)
   34e52:	e8 19 e8 ff ff       	call   33670 <_malloc_r>
   34e57:	85 c0                	test   %eax,%eax
   34e59:	89 c2                	mov    %eax,%edx
   34e5b:	0f 84 e1 00 00 00    	je     34f42 <__ssprint_r+0x182>
   34e61:	8b 45 dc             	mov    -0x24(%ebp),%eax
   34e64:	89 55 d8             	mov    %edx,-0x28(%ebp)
   34e67:	89 44 24 08          	mov    %eax,0x8(%esp)
   34e6b:	8b 43 10             	mov    0x10(%ebx),%eax
   34e6e:	89 14 24             	mov    %edx,(%esp)
   34e71:	89 44 24 04          	mov    %eax,0x4(%esp)
   34e75:	e8 ce ef ff ff       	call   33e48 <memcpy>
   34e7a:	0f b7 43 0c          	movzwl 0xc(%ebx),%eax
   34e7e:	8b 55 d8             	mov    -0x28(%ebp),%edx
   34e81:	66 25 7f fb          	and    $0xfb7f,%ax
   34e85:	0c 80                	or     $0x80,%al
   34e87:	66 89 43 0c          	mov    %ax,0xc(%ebx)
   34e8b:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   34e8e:	8b 45 dc             	mov    -0x24(%ebp),%eax
   34e91:	89 53 10             	mov    %edx,0x10(%ebx)
   34e94:	89 4b 14             	mov    %ecx,0x14(%ebx)
   34e97:	2b 4d dc             	sub    -0x24(%ebp),%ecx
   34e9a:	01 d0                	add    %edx,%eax
   34e9c:	89 03                	mov    %eax,(%ebx)
   34e9e:	89 f2                	mov    %esi,%edx
   34ea0:	89 4b 08             	mov    %ecx,0x8(%ebx)
   34ea3:	89 f1                	mov    %esi,%ecx
   34ea5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
   34ea9:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   34eac:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   34eaf:	89 04 24             	mov    %eax,(%esp)
   34eb2:	89 55 dc             	mov    %edx,-0x24(%ebp)
   34eb5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
   34eb9:	e8 22 13 00 00       	call   361e0 <memmove>
   34ebe:	8b 03                	mov    (%ebx),%eax
   34ec0:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   34ec3:	8b 55 dc             	mov    -0x24(%ebp),%edx
   34ec6:	29 53 08             	sub    %edx,0x8(%ebx)
   34ec9:	01 c8                	add    %ecx,%eax
   34ecb:	8b 4d 10             	mov    0x10(%ebp),%ecx
   34ece:	89 03                	mov    %eax,(%ebx)
   34ed0:	8b 51 08             	mov    0x8(%ecx),%edx
   34ed3:	29 f2                	sub    %esi,%edx
   34ed5:	85 d2                	test   %edx,%edx
   34ed7:	89 51 08             	mov    %edx,0x8(%ecx)
   34eda:	0f 84 98 00 00 00    	je     34f78 <__ssprint_r+0x1b8>
   34ee0:	8b 77 04             	mov    0x4(%edi),%esi
   34ee3:	83 c7 08             	add    $0x8,%edi
   34ee6:	8b 4f f8             	mov    -0x8(%edi),%ecx
   34ee9:	85 f6                	test   %esi,%esi
   34eeb:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   34eee:	74 f0                	je     34ee0 <__ssprint_r+0x120>
   34ef0:	8b 53 08             	mov    0x8(%ebx),%edx
   34ef3:	39 d6                	cmp    %edx,%esi
   34ef5:	0f 83 04 ff ff ff    	jae    34dff <__ssprint_r+0x3f>
   34efb:	89 f2                	mov    %esi,%edx
   34efd:	89 f1                	mov    %esi,%ecx
   34eff:	eb a4                	jmp    34ea5 <__ssprint_r+0xe5>
   34f01:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   34f08:	89 d1                	mov    %edx,%ecx
   34f0a:	eb 99                	jmp    34ea5 <__ssprint_r+0xe5>
   34f0c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34f10:	89 44 24 08          	mov    %eax,0x8(%esp)
   34f14:	8b 45 d8             	mov    -0x28(%ebp),%eax
   34f17:	89 44 24 04          	mov    %eax,0x4(%esp)
   34f1b:	8b 45 08             	mov    0x8(%ebp),%eax
   34f1e:	89 04 24             	mov    %eax,(%esp)
   34f21:	e8 da 13 00 00       	call   36300 <_realloc_r>
   34f26:	85 c0                	test   %eax,%eax
   34f28:	89 c2                	mov    %eax,%edx
   34f2a:	0f 85 5b ff ff ff    	jne    34e8b <__ssprint_r+0xcb>
   34f30:	8b 43 10             	mov    0x10(%ebx),%eax
   34f33:	89 44 24 04          	mov    %eax,0x4(%esp)
   34f37:	8b 45 08             	mov    0x8(%ebp),%eax
   34f3a:	89 04 24             	mov    %eax,(%esp)
   34f3d:	e8 3e 10 00 00       	call   35f80 <_free_r>
   34f42:	8b 45 08             	mov    0x8(%ebp),%eax
   34f45:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
   34f4b:	8b 45 10             	mov    0x10(%ebp),%eax
   34f4e:	66 83 4b 0c 40       	orw    $0x40,0xc(%ebx)
   34f53:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
   34f5a:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
   34f61:	83 c4 2c             	add    $0x2c,%esp
   34f64:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   34f69:	5b                   	pop    %ebx
   34f6a:	5e                   	pop    %esi
   34f6b:	5f                   	pop    %edi
   34f6c:	5d                   	pop    %ebp
   34f6d:	c3                   	ret    
   34f6e:	66 90                	xchg   %ax,%ax
   34f70:	8b 45 e0             	mov    -0x20(%ebp),%eax
   34f73:	e9 c7 fe ff ff       	jmp    34e3f <__ssprint_r+0x7f>
   34f78:	c7 41 04 00 00 00 00 	movl   $0x0,0x4(%ecx)
   34f7f:	83 c4 2c             	add    $0x2c,%esp
   34f82:	31 c0                	xor    %eax,%eax
   34f84:	5b                   	pop    %ebx
   34f85:	5e                   	pop    %esi
   34f86:	5f                   	pop    %edi
   34f87:	5d                   	pop    %ebp
   34f88:	c3                   	ret    
   34f89:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   34f90:	8b 45 10             	mov    0x10(%ebp),%eax
   34f93:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
   34f9a:	83 c4 2c             	add    $0x2c,%esp
   34f9d:	31 c0                	xor    %eax,%eax
   34f9f:	5b                   	pop    %ebx
   34fa0:	5e                   	pop    %esi
   34fa1:	5f                   	pop    %edi
   34fa2:	5d                   	pop    %ebp
   34fa3:	c3                   	ret    
   34fa4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   34faa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

00034fb0 <_svfiprintf_r>:
   34fb0:	55                   	push   %ebp
   34fb1:	89 e5                	mov    %esp,%ebp
   34fb3:	57                   	push   %edi
   34fb4:	56                   	push   %esi
   34fb5:	53                   	push   %ebx
   34fb6:	81 ec cc 00 00 00    	sub    $0xcc,%esp
   34fbc:	8b 45 0c             	mov    0xc(%ebp),%eax
   34fbf:	f6 40 0c 80          	testb  $0x80,0xc(%eax)
   34fc3:	74 0b                	je     34fd0 <_svfiprintf_r+0x20>
   34fc5:	8b 50 10             	mov    0x10(%eax),%edx
   34fc8:	85 d2                	test   %edx,%edx
   34fca:	0f 84 1c 0d 00 00    	je     35cec <_svfiprintf_r+0xd3c>
   34fd0:	8d 45 a8             	lea    -0x58(%ebp),%eax
   34fd3:	8d 5d a7             	lea    -0x59(%ebp),%ebx
   34fd6:	89 c6                	mov    %eax,%esi
   34fd8:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
   34fde:	29 d8                	sub    %ebx,%eax
   34fe0:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
   34fe7:	00 00 00 
   34fea:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
   34ff1:	00 00 00 
   34ff4:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   34ffb:	00 00 00 
   34ffe:	c7 85 50 ff ff ff 00 	movl   $0x0,-0xb0(%ebp)
   35005:	00 00 00 
   35008:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
   3500e:	8b 45 10             	mov    0x10(%ebp),%eax
   35011:	8b 5d 10             	mov    0x10(%ebp),%ebx
   35014:	0f b6 00             	movzbl (%eax),%eax
   35017:	84 c0                	test   %al,%al
   35019:	74 58                	je     35073 <_svfiprintf_r+0xc3>
   3501b:	3c 25                	cmp    $0x25,%al
   3501d:	75 13                	jne    35032 <_svfiprintf_r+0x82>
   3501f:	eb 52                	jmp    35073 <_svfiprintf_r+0xc3>
   35021:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   35028:	84 c0                	test   %al,%al
   3502a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   35030:	74 0a                	je     3503c <_svfiprintf_r+0x8c>
   35032:	83 c3 01             	add    $0x1,%ebx
   35035:	0f b6 03             	movzbl (%ebx),%eax
   35038:	3c 25                	cmp    $0x25,%al
   3503a:	75 ec                	jne    35028 <_svfiprintf_r+0x78>
   3503c:	89 df                	mov    %ebx,%edi
   3503e:	2b 7d 10             	sub    0x10(%ebp),%edi
   35041:	74 30                	je     35073 <_svfiprintf_r+0xc3>
   35043:	8b 45 10             	mov    0x10(%ebp),%eax
   35046:	83 c6 08             	add    $0x8,%esi
   35049:	89 7e fc             	mov    %edi,-0x4(%esi)
   3504c:	01 bd 7c ff ff ff    	add    %edi,-0x84(%ebp)
   35052:	89 46 f8             	mov    %eax,-0x8(%esi)
   35055:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3505b:	83 c0 01             	add    $0x1,%eax
   3505e:	83 f8 07             	cmp    $0x7,%eax
   35061:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   35067:	0f 8f eb 0a 00 00    	jg     35b58 <_svfiprintf_r+0xba8>
   3506d:	01 bd 50 ff ff ff    	add    %edi,-0xb0(%ebp)
   35073:	80 3b 00             	cmpb   $0x0,(%ebx)
   35076:	0f 84 11 09 00 00    	je     3598d <_svfiprintf_r+0x9dd>
   3507c:	8d 43 01             	lea    0x1(%ebx),%eax
   3507f:	31 ff                	xor    %edi,%edi
   35081:	c6 85 71 ff ff ff 00 	movb   $0x0,-0x8f(%ebp)
   35088:	c7 85 5c ff ff ff ff 	movl   $0xffffffff,-0xa4(%ebp)
   3508f:	ff ff ff 
   35092:	c7 85 54 ff ff ff 00 	movl   $0x0,-0xac(%ebp)
   35099:	00 00 00 
   3509c:	c7 85 64 ff ff ff 00 	movl   $0x0,-0x9c(%ebp)
   350a3:	00 00 00 
   350a6:	8d 50 01             	lea    0x1(%eax),%edx
   350a9:	0f be 00             	movsbl (%eax),%eax
   350ac:	8d 48 e0             	lea    -0x20(%eax),%ecx
   350af:	83 f9 58             	cmp    $0x58,%ecx
   350b2:	0f 87 63 03 00 00    	ja     3541b <_svfiprintf_r+0x46b>
   350b8:	ff 24 8d c8 73 03 00 	jmp    *0x373c8(,%ecx,4)
   350bf:	90                   	nop
   350c0:	83 8d 64 ff ff ff 10 	orl    $0x10,-0x9c(%ebp)
   350c7:	89 d0                	mov    %edx,%eax
   350c9:	eb db                	jmp    350a6 <_svfiprintf_r+0xf6>
   350cb:	8b 45 14             	mov    0x14(%ebp),%eax
   350ce:	8b 5d 14             	mov    0x14(%ebp),%ebx
   350d1:	8b 00                	mov    (%eax),%eax
   350d3:	83 c3 04             	add    $0x4,%ebx
   350d6:	89 5d 14             	mov    %ebx,0x14(%ebp)
   350d9:	85 c0                	test   %eax,%eax
   350db:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
   350e1:	79 e4                	jns    350c7 <_svfiprintf_r+0x117>
   350e3:	f7 9d 54 ff ff ff    	negl   -0xac(%ebp)
   350e9:	83 8d 64 ff ff ff 04 	orl    $0x4,-0x9c(%ebp)
   350f0:	89 d0                	mov    %edx,%eax
   350f2:	eb b2                	jmp    350a6 <_svfiprintf_r+0xf6>
   350f4:	bf 2b 00 00 00       	mov    $0x2b,%edi
   350f9:	89 d0                	mov    %edx,%eax
   350fb:	eb a9                	jmp    350a6 <_svfiprintf_r+0xf6>
   350fd:	8b 45 14             	mov    0x14(%ebp),%eax
   35100:	83 8d 64 ff ff ff 02 	orl    $0x2,-0x9c(%ebp)
   35107:	89 55 10             	mov    %edx,0x10(%ebp)
   3510a:	ba 02 00 00 00       	mov    $0x2,%edx
   3510f:	8b 08                	mov    (%eax),%ecx
   35111:	83 c0 04             	add    $0x4,%eax
   35114:	c6 85 72 ff ff ff 30 	movb   $0x30,-0x8e(%ebp)
   3511b:	c6 85 73 ff ff ff 78 	movb   $0x78,-0x8d(%ebp)
   35122:	89 45 14             	mov    %eax,0x14(%ebp)
   35125:	c7 85 44 ff ff ff 58 	movl   $0x37058,-0xbc(%ebp)
   3512c:	70 03 00 
   3512f:	90                   	nop
   35130:	c6 85 71 ff ff ff 00 	movb   $0x0,-0x8f(%ebp)
   35137:	31 ff                	xor    %edi,%edi
   35139:	8b 9d 64 ff ff ff    	mov    -0x9c(%ebp),%ebx
   3513f:	89 d8                	mov    %ebx,%eax
   35141:	24 7f                	and    $0x7f,%al
   35143:	83 bd 5c ff ff ff 00 	cmpl   $0x0,-0xa4(%ebp)
   3514a:	0f 48 c3             	cmovs  %ebx,%eax
   3514d:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
   35153:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   35159:	85 c0                	test   %eax,%eax
   3515b:	75 08                	jne    35165 <_svfiprintf_r+0x1b5>
   3515d:	85 c9                	test   %ecx,%ecx
   3515f:	0f 84 03 08 00 00    	je     35968 <_svfiprintf_r+0x9b8>
   35165:	80 fa 01             	cmp    $0x1,%dl
   35168:	0f 84 8a 0a 00 00    	je     35bf8 <_svfiprintf_r+0xc48>
   3516e:	80 fa 02             	cmp    $0x2,%dl
   35171:	8d 5d a8             	lea    -0x58(%ebp),%ebx
   35174:	0f 85 86 01 00 00    	jne    35300 <_svfiprintf_r+0x350>
   3517a:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   35180:	89 c8                	mov    %ecx,%eax
   35182:	83 eb 01             	sub    $0x1,%ebx
   35185:	83 e0 0f             	and    $0xf,%eax
   35188:	0f b6 04 02          	movzbl (%edx,%eax,1),%eax
   3518c:	c1 e9 04             	shr    $0x4,%ecx
   3518f:	85 c9                	test   %ecx,%ecx
   35191:	88 03                	mov    %al,(%ebx)
   35193:	75 eb                	jne    35180 <_svfiprintf_r+0x1d0>
   35195:	8d 45 a8             	lea    -0x58(%ebp),%eax
   35198:	29 d8                	sub    %ebx,%eax
   3519a:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   351a0:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   351a6:	8b 8d 58 ff ff ff    	mov    -0xa8(%ebp),%ecx
   351ac:	39 c1                	cmp    %eax,%ecx
   351ae:	0f 4d c1             	cmovge %ecx,%eax
   351b1:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
   351b7:	89 f8                	mov    %edi,%eax
   351b9:	3c 01                	cmp    $0x1,%al
   351bb:	83 9d 60 ff ff ff ff 	sbbl   $0xffffffff,-0xa0(%ebp)
   351c2:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
   351c8:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
   351ce:	89 d0                	mov    %edx,%eax
   351d0:	89 cf                	mov    %ecx,%edi
   351d2:	83 c0 02             	add    $0x2,%eax
   351d5:	83 e7 02             	and    $0x2,%edi
   351d8:	89 bd 4c ff ff ff    	mov    %edi,-0xb4(%ebp)
   351de:	89 cf                	mov    %ecx,%edi
   351e0:	0f 44 c2             	cmove  %edx,%eax
   351e3:	81 e7 84 00 00 00    	and    $0x84,%edi
   351e9:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
   351ef:	89 bd 48 ff ff ff    	mov    %edi,-0xb8(%ebp)
   351f5:	0f 85 cd 04 00 00    	jne    356c8 <_svfiprintf_r+0x718>
   351fb:	8b bd 54 ff ff ff    	mov    -0xac(%ebp),%edi
   35201:	2b bd 60 ff ff ff    	sub    -0xa0(%ebp),%edi
   35207:	85 ff                	test   %edi,%edi
   35209:	0f 8e b9 04 00 00    	jle    356c8 <_svfiprintf_r+0x718>
   3520f:	83 ff 10             	cmp    $0x10,%edi
   35212:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   35218:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3521e:	7e 7c                	jle    3529c <_svfiprintf_r+0x2ec>
   35220:	89 9d 40 ff ff ff    	mov    %ebx,-0xc0(%ebp)
   35226:	89 f1                	mov    %esi,%ecx
   35228:	8b 5d 08             	mov    0x8(%ebp),%ebx
   3522b:	8b 75 0c             	mov    0xc(%ebp),%esi
   3522e:	eb 08                	jmp    35238 <_svfiprintf_r+0x288>
   35230:	83 ef 10             	sub    $0x10,%edi
   35233:	83 ff 10             	cmp    $0x10,%edi
   35236:	7e 5c                	jle    35294 <_svfiprintf_r+0x2e4>
   35238:	83 c0 01             	add    $0x1,%eax
   3523b:	83 c2 10             	add    $0x10,%edx
   3523e:	c7 01 3c 75 03 00    	movl   $0x3753c,(%ecx)
   35244:	83 c1 08             	add    $0x8,%ecx
   35247:	c7 41 fc 10 00 00 00 	movl   $0x10,-0x4(%ecx)
   3524e:	83 f8 07             	cmp    $0x7,%eax
   35251:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   35257:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3525d:	7e d1                	jle    35230 <_svfiprintf_r+0x280>
   3525f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   35265:	89 44 24 08          	mov    %eax,0x8(%esp)
   35269:	89 74 24 04          	mov    %esi,0x4(%esp)
   3526d:	89 1c 24             	mov    %ebx,(%esp)
   35270:	e8 4b fb ff ff       	call   34dc0 <__ssprint_r>
   35275:	85 c0                	test   %eax,%eax
   35277:	0f 85 3b 07 00 00    	jne    359b8 <_svfiprintf_r+0xa08>
   3527d:	83 ef 10             	sub    $0x10,%edi
   35280:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   35286:	83 ff 10             	cmp    $0x10,%edi
   35289:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3528f:	8d 4d a8             	lea    -0x58(%ebp),%ecx
   35292:	7f a4                	jg     35238 <_svfiprintf_r+0x288>
   35294:	8b 9d 40 ff ff ff    	mov    -0xc0(%ebp),%ebx
   3529a:	89 ce                	mov    %ecx,%esi
   3529c:	83 c0 01             	add    $0x1,%eax
   3529f:	01 fa                	add    %edi,%edx
   352a1:	c7 06 3c 75 03 00    	movl   $0x3753c,(%esi)
   352a7:	83 c6 08             	add    $0x8,%esi
   352aa:	89 7e fc             	mov    %edi,-0x4(%esi)
   352ad:	83 f8 07             	cmp    $0x7,%eax
   352b0:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   352b6:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   352bc:	0f 8e 12 04 00 00    	jle    356d4 <_svfiprintf_r+0x724>
   352c2:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   352c8:	89 44 24 08          	mov    %eax,0x8(%esp)
   352cc:	8b 45 0c             	mov    0xc(%ebp),%eax
   352cf:	89 44 24 04          	mov    %eax,0x4(%esp)
   352d3:	8b 45 08             	mov    0x8(%ebp),%eax
   352d6:	89 04 24             	mov    %eax,(%esp)
   352d9:	e8 e2 fa ff ff       	call   34dc0 <__ssprint_r>
   352de:	85 c0                	test   %eax,%eax
   352e0:	0f 85 d2 06 00 00    	jne    359b8 <_svfiprintf_r+0xa08>
   352e6:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   352ec:	8d 75 a8             	lea    -0x58(%ebp),%esi
   352ef:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   352f5:	e9 da 03 00 00       	jmp    356d4 <_svfiprintf_r+0x724>
   352fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   35300:	89 c8                	mov    %ecx,%eax
   35302:	83 eb 01             	sub    $0x1,%ebx
   35305:	83 e0 07             	and    $0x7,%eax
   35308:	c1 e9 03             	shr    $0x3,%ecx
   3530b:	83 c0 30             	add    $0x30,%eax
   3530e:	85 c9                	test   %ecx,%ecx
   35310:	88 03                	mov    %al,(%ebx)
   35312:	75 ec                	jne    35300 <_svfiprintf_r+0x350>
   35314:	f6 85 64 ff ff ff 01 	testb  $0x1,-0x9c(%ebp)
   3531b:	89 da                	mov    %ebx,%edx
   3531d:	0f 84 72 fe ff ff    	je     35195 <_svfiprintf_r+0x1e5>
   35323:	3c 30                	cmp    $0x30,%al
   35325:	0f 84 6a fe ff ff    	je     35195 <_svfiprintf_r+0x1e5>
   3532b:	83 eb 01             	sub    $0x1,%ebx
   3532e:	8d 45 a8             	lea    -0x58(%ebp),%eax
   35331:	29 d8                	sub    %ebx,%eax
   35333:	c6 42 ff 30          	movb   $0x30,-0x1(%edx)
   35337:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   3533d:	e9 5e fe ff ff       	jmp    351a0 <_svfiprintf_r+0x1f0>
   35342:	83 8d 64 ff ff ff 10 	orl    $0x10,-0x9c(%ebp)
   35349:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   35350:	89 55 10             	mov    %edx,0x10(%ebp)
   35353:	8b 45 14             	mov    0x14(%ebp),%eax
   35356:	0f 85 48 01 00 00    	jne    354a4 <_svfiprintf_r+0x4f4>
   3535c:	f6 85 64 ff ff ff 40 	testb  $0x40,-0x9c(%ebp)
   35363:	0f 84 3b 01 00 00    	je     354a4 <_svfiprintf_r+0x4f4>
   35369:	0f b7 08             	movzwl (%eax),%ecx
   3536c:	83 c0 04             	add    $0x4,%eax
   3536f:	31 d2                	xor    %edx,%edx
   35371:	89 45 14             	mov    %eax,0x14(%ebp)
   35374:	e9 b7 fd ff ff       	jmp    35130 <_svfiprintf_r+0x180>
   35379:	83 8d 64 ff ff ff 10 	orl    $0x10,-0x9c(%ebp)
   35380:	89 f8                	mov    %edi,%eax
   35382:	89 55 10             	mov    %edx,0x10(%ebp)
   35385:	88 85 71 ff ff ff    	mov    %al,-0x8f(%ebp)
   3538b:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   35392:	8b 45 14             	mov    0x14(%ebp),%eax
   35395:	75 0d                	jne    353a4 <_svfiprintf_r+0x3f4>
   35397:	f6 85 64 ff ff ff 40 	testb  $0x40,-0x9c(%ebp)
   3539e:	0f 85 f2 08 00 00    	jne    35c96 <_svfiprintf_r+0xce6>
   353a4:	8b 08                	mov    (%eax),%ecx
   353a6:	83 c0 04             	add    $0x4,%eax
   353a9:	89 45 14             	mov    %eax,0x14(%ebp)
   353ac:	85 c9                	test   %ecx,%ecx
   353ae:	0f 88 f3 08 00 00    	js     35ca7 <_svfiprintf_r+0xcf7>
   353b4:	0f b6 bd 71 ff ff ff 	movzbl -0x8f(%ebp),%edi
   353bb:	ba 01 00 00 00       	mov    $0x1,%edx
   353c0:	e9 74 fd ff ff       	jmp    35139 <_svfiprintf_r+0x189>
   353c5:	0f be 02             	movsbl (%edx),%eax
   353c8:	8d 5a 01             	lea    0x1(%edx),%ebx
   353cb:	83 f8 2a             	cmp    $0x2a,%eax
   353ce:	0f 84 af 09 00 00    	je     35d83 <_svfiprintf_r+0xdd3>
   353d4:	8d 48 d0             	lea    -0x30(%eax),%ecx
   353d7:	31 d2                	xor    %edx,%edx
   353d9:	83 f9 09             	cmp    $0x9,%ecx
   353dc:	0f 87 90 09 00 00    	ja     35d72 <_svfiprintf_r+0xdc2>
   353e2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   353e8:	8d 04 92             	lea    (%edx,%edx,4),%eax
   353eb:	83 c3 01             	add    $0x1,%ebx
   353ee:	8d 14 41             	lea    (%ecx,%eax,2),%edx
   353f1:	0f be 43 ff          	movsbl -0x1(%ebx),%eax
   353f5:	8d 48 d0             	lea    -0x30(%eax),%ecx
   353f8:	83 f9 09             	cmp    $0x9,%ecx
   353fb:	76 eb                	jbe    353e8 <_svfiprintf_r+0x438>
   353fd:	85 d2                	test   %edx,%edx
   353ff:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
   35404:	0f 48 d1             	cmovs  %ecx,%edx
   35407:	8d 48 e0             	lea    -0x20(%eax),%ecx
   3540a:	83 f9 58             	cmp    $0x58,%ecx
   3540d:	89 95 5c ff ff ff    	mov    %edx,-0xa4(%ebp)
   35413:	89 da                	mov    %ebx,%edx
   35415:	0f 86 9d fc ff ff    	jbe    350b8 <_svfiprintf_r+0x108>
   3541b:	89 fb                	mov    %edi,%ebx
   3541d:	85 c0                	test   %eax,%eax
   3541f:	89 55 10             	mov    %edx,0x10(%ebp)
   35422:	88 9d 71 ff ff ff    	mov    %bl,-0x8f(%ebp)
   35428:	0f 84 5f 05 00 00    	je     3598d <_svfiprintf_r+0x9dd>
   3542e:	88 45 80             	mov    %al,-0x80(%ebp)
   35431:	8d 5d 80             	lea    -0x80(%ebp),%ebx
   35434:	c6 85 71 ff ff ff 00 	movb   $0x0,-0x8f(%ebp)
   3543b:	c7 85 60 ff ff ff 01 	movl   $0x1,-0xa0(%ebp)
   35442:	00 00 00 
   35445:	c7 85 58 ff ff ff 01 	movl   $0x1,-0xa8(%ebp)
   3544c:	00 00 00 
   3544f:	e9 5a 01 00 00       	jmp    355ae <_svfiprintf_r+0x5fe>
   35454:	31 db                	xor    %ebx,%ebx
   35456:	8d 48 d0             	lea    -0x30(%eax),%ecx
   35459:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   35460:	8d 04 9b             	lea    (%ebx,%ebx,4),%eax
   35463:	83 c2 01             	add    $0x1,%edx
   35466:	8d 1c 41             	lea    (%ecx,%eax,2),%ebx
   35469:	0f be 42 ff          	movsbl -0x1(%edx),%eax
   3546d:	8d 48 d0             	lea    -0x30(%eax),%ecx
   35470:	83 f9 09             	cmp    $0x9,%ecx
   35473:	76 eb                	jbe    35460 <_svfiprintf_r+0x4b0>
   35475:	89 9d 54 ff ff ff    	mov    %ebx,-0xac(%ebp)
   3547b:	e9 2c fc ff ff       	jmp    350ac <_svfiprintf_r+0xfc>
   35480:	81 8d 64 ff ff ff 80 	orl    $0x80,-0x9c(%ebp)
   35487:	00 00 00 
   3548a:	89 d0                	mov    %edx,%eax
   3548c:	e9 15 fc ff ff       	jmp    350a6 <_svfiprintf_r+0xf6>
   35491:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   35498:	89 55 10             	mov    %edx,0x10(%ebp)
   3549b:	8b 45 14             	mov    0x14(%ebp),%eax
   3549e:	0f 84 b8 fe ff ff    	je     3535c <_svfiprintf_r+0x3ac>
   354a4:	8b 08                	mov    (%eax),%ecx
   354a6:	83 c0 04             	add    $0x4,%eax
   354a9:	31 d2                	xor    %edx,%edx
   354ab:	89 45 14             	mov    %eax,0x14(%ebp)
   354ae:	e9 7d fc ff ff       	jmp    35130 <_svfiprintf_r+0x180>
   354b3:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   354ba:	89 f8                	mov    %edi,%eax
   354bc:	89 55 10             	mov    %edx,0x10(%ebp)
   354bf:	88 85 71 ff ff ff    	mov    %al,-0x8f(%ebp)
   354c5:	0f 85 a2 07 00 00    	jne    35c6d <_svfiprintf_r+0xcbd>
   354cb:	f6 85 64 ff ff ff 40 	testb  $0x40,-0x9c(%ebp)
   354d2:	0f 84 95 07 00 00    	je     35c6d <_svfiprintf_r+0xcbd>
   354d8:	8b 45 14             	mov    0x14(%ebp),%eax
   354db:	0f b7 9d 50 ff ff ff 	movzwl -0xb0(%ebp),%ebx
   354e2:	8b 00                	mov    (%eax),%eax
   354e4:	66 89 18             	mov    %bx,(%eax)
   354e7:	8b 45 14             	mov    0x14(%ebp),%eax
   354ea:	83 c0 04             	add    $0x4,%eax
   354ed:	89 45 14             	mov    %eax,0x14(%ebp)
   354f0:	e9 19 fb ff ff       	jmp    3500e <_svfiprintf_r+0x5e>
   354f5:	89 fb                	mov    %edi,%ebx
   354f7:	89 55 10             	mov    %edx,0x10(%ebp)
   354fa:	88 9d 71 ff ff ff    	mov    %bl,-0x8f(%ebp)
   35500:	c7 85 44 ff ff ff 58 	movl   $0x37058,-0xbc(%ebp)
   35507:	70 03 00 
   3550a:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   35511:	8b 5d 14             	mov    0x14(%ebp),%ebx
   35514:	75 0d                	jne    35523 <_svfiprintf_r+0x573>
   35516:	f6 85 64 ff ff ff 40 	testb  $0x40,-0x9c(%ebp)
   3551d:	0f 85 65 07 00 00    	jne    35c88 <_svfiprintf_r+0xcd8>
   35523:	8b 0b                	mov    (%ebx),%ecx
   35525:	83 c3 04             	add    $0x4,%ebx
   35528:	89 5d 14             	mov    %ebx,0x14(%ebp)
   3552b:	f6 85 64 ff ff ff 01 	testb  $0x1,-0x9c(%ebp)
   35532:	ba 02 00 00 00       	mov    $0x2,%edx
   35537:	0f 84 f3 fb ff ff    	je     35130 <_svfiprintf_r+0x180>
   3553d:	85 c9                	test   %ecx,%ecx
   3553f:	0f 84 eb fb ff ff    	je     35130 <_svfiprintf_r+0x180>
   35545:	c6 85 72 ff ff ff 30 	movb   $0x30,-0x8e(%ebp)
   3554c:	88 85 73 ff ff ff    	mov    %al,-0x8d(%ebp)
   35552:	83 8d 64 ff ff ff 02 	orl    $0x2,-0x9c(%ebp)
   35559:	e9 d2 fb ff ff       	jmp    35130 <_svfiprintf_r+0x180>
   3555e:	83 8d 64 ff ff ff 40 	orl    $0x40,-0x9c(%ebp)
   35565:	89 d0                	mov    %edx,%eax
   35567:	e9 3a fb ff ff       	jmp    350a6 <_svfiprintf_r+0xf6>
   3556c:	89 f8                	mov    %edi,%eax
   3556e:	89 55 10             	mov    %edx,0x10(%ebp)
   35571:	88 85 71 ff ff ff    	mov    %al,-0x8f(%ebp)
   35577:	e9 0f fe ff ff       	jmp    3538b <_svfiprintf_r+0x3db>
   3557c:	8b 45 14             	mov    0x14(%ebp),%eax
   3557f:	8d 5d 80             	lea    -0x80(%ebp),%ebx
   35582:	89 55 10             	mov    %edx,0x10(%ebp)
   35585:	c6 85 71 ff ff ff 00 	movb   $0x0,-0x8f(%ebp)
   3558c:	c7 85 60 ff ff ff 01 	movl   $0x1,-0xa0(%ebp)
   35593:	00 00 00 
   35596:	8b 00                	mov    (%eax),%eax
   35598:	c7 85 58 ff ff ff 01 	movl   $0x1,-0xa8(%ebp)
   3559f:	00 00 00 
   355a2:	88 45 80             	mov    %al,-0x80(%ebp)
   355a5:	8b 45 14             	mov    0x14(%ebp),%eax
   355a8:	83 c0 04             	add    $0x4,%eax
   355ab:	89 45 14             	mov    %eax,0x14(%ebp)
   355ae:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
   355b5:	00 00 00 
   355b8:	e9 05 fc ff ff       	jmp    351c2 <_svfiprintf_r+0x212>
   355bd:	89 fb                	mov    %edi,%ebx
   355bf:	89 55 10             	mov    %edx,0x10(%ebp)
   355c2:	88 9d 71 ff ff ff    	mov    %bl,-0x8f(%ebp)
   355c8:	c7 85 44 ff ff ff 47 	movl   $0x37047,-0xbc(%ebp)
   355cf:	70 03 00 
   355d2:	e9 33 ff ff ff       	jmp    3550a <_svfiprintf_r+0x55a>
   355d7:	83 8d 64 ff ff ff 10 	orl    $0x10,-0x9c(%ebp)
   355de:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   355e5:	89 55 10             	mov    %edx,0x10(%ebp)
   355e8:	8b 45 14             	mov    0x14(%ebp),%eax
   355eb:	75 39                	jne    35626 <_svfiprintf_r+0x676>
   355ed:	f6 85 64 ff ff ff 40 	testb  $0x40,-0x9c(%ebp)
   355f4:	74 30                	je     35626 <_svfiprintf_r+0x676>
   355f6:	0f b7 08             	movzwl (%eax),%ecx
   355f9:	83 c0 04             	add    $0x4,%eax
   355fc:	ba 01 00 00 00       	mov    $0x1,%edx
   35601:	89 45 14             	mov    %eax,0x14(%ebp)
   35604:	e9 27 fb ff ff       	jmp    35130 <_svfiprintf_r+0x180>
   35609:	83 8d 64 ff ff ff 01 	orl    $0x1,-0x9c(%ebp)
   35610:	89 d0                	mov    %edx,%eax
   35612:	e9 8f fa ff ff       	jmp    350a6 <_svfiprintf_r+0xf6>
   35617:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   3561e:	89 55 10             	mov    %edx,0x10(%ebp)
   35621:	8b 45 14             	mov    0x14(%ebp),%eax
   35624:	74 c7                	je     355ed <_svfiprintf_r+0x63d>
   35626:	8b 08                	mov    (%eax),%ecx
   35628:	83 c0 04             	add    $0x4,%eax
   3562b:	ba 01 00 00 00       	mov    $0x1,%edx
   35630:	89 45 14             	mov    %eax,0x14(%ebp)
   35633:	e9 f8 fa ff ff       	jmp    35130 <_svfiprintf_r+0x180>
   35638:	8b 45 14             	mov    0x14(%ebp),%eax
   3563b:	89 55 10             	mov    %edx,0x10(%ebp)
   3563e:	c6 85 71 ff ff ff 00 	movb   $0x0,-0x8f(%ebp)
   35645:	8b 18                	mov    (%eax),%ebx
   35647:	8d 50 04             	lea    0x4(%eax),%edx
   3564a:	85 db                	test   %ebx,%ebx
   3564c:	0f 84 cc 06 00 00    	je     35d1e <_svfiprintf_r+0xd6e>
   35652:	8b bd 5c ff ff ff    	mov    -0xa4(%ebp),%edi
   35658:	89 95 60 ff ff ff    	mov    %edx,-0xa0(%ebp)
   3565e:	85 ff                	test   %edi,%edi
   35660:	0f 88 59 06 00 00    	js     35cbf <_svfiprintf_r+0xd0f>
   35666:	89 7c 24 08          	mov    %edi,0x8(%esp)
   3566a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   35671:	00 
   35672:	89 1c 24             	mov    %ebx,(%esp)
   35675:	e8 36 e7 ff ff       	call   33db0 <memchr>
   3567a:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
   35680:	85 c0                	test   %eax,%eax
   35682:	0f 84 c5 06 00 00    	je     35d4d <_svfiprintf_r+0xd9d>
   35688:	29 d8                	sub    %ebx,%eax
   3568a:	39 f8                	cmp    %edi,%eax
   3568c:	0f 4f c7             	cmovg  %edi,%eax
   3568f:	0f b6 bd 71 ff ff ff 	movzbl -0x8f(%ebp),%edi
   35696:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   3569c:	89 55 14             	mov    %edx,0x14(%ebp)
   3569f:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
   356a6:	00 00 00 
   356a9:	e9 f2 fa ff ff       	jmp    351a0 <_svfiprintf_r+0x1f0>
   356ae:	89 f8                	mov    %edi,%eax
   356b0:	84 c0                	test   %al,%al
   356b2:	b8 20 00 00 00       	mov    $0x20,%eax
   356b7:	0f 44 f8             	cmove  %eax,%edi
   356ba:	89 d0                	mov    %edx,%eax
   356bc:	e9 e5 f9 ff ff       	jmp    350a6 <_svfiprintf_r+0xf6>
   356c1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   356c8:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   356ce:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   356d4:	80 bd 71 ff ff ff 00 	cmpb   $0x0,-0x8f(%ebp)
   356db:	74 2e                	je     3570b <_svfiprintf_r+0x75b>
   356dd:	83 c0 01             	add    $0x1,%eax
   356e0:	83 c2 01             	add    $0x1,%edx
   356e3:	8d 8d 71 ff ff ff    	lea    -0x8f(%ebp),%ecx
   356e9:	83 c6 08             	add    $0x8,%esi
   356ec:	89 4e f8             	mov    %ecx,-0x8(%esi)
   356ef:	c7 46 fc 01 00 00 00 	movl   $0x1,-0x4(%esi)
   356f6:	83 f8 07             	cmp    $0x7,%eax
   356f9:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   356ff:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   35705:	0f 8f b5 04 00 00    	jg     35bc0 <_svfiprintf_r+0xc10>
   3570b:	8b 8d 4c ff ff ff    	mov    -0xb4(%ebp),%ecx
   35711:	85 c9                	test   %ecx,%ecx
   35713:	74 2e                	je     35743 <_svfiprintf_r+0x793>
   35715:	83 c0 01             	add    $0x1,%eax
   35718:	83 c2 02             	add    $0x2,%edx
   3571b:	8d 8d 72 ff ff ff    	lea    -0x8e(%ebp),%ecx
   35721:	83 c6 08             	add    $0x8,%esi
   35724:	89 4e f8             	mov    %ecx,-0x8(%esi)
   35727:	c7 46 fc 02 00 00 00 	movl   $0x2,-0x4(%esi)
   3572e:	83 f8 07             	cmp    $0x7,%eax
   35731:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   35737:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3573d:	0f 8f 45 04 00 00    	jg     35b88 <_svfiprintf_r+0xbd8>
   35743:	81 bd 48 ff ff ff 80 	cmpl   $0x80,-0xb8(%ebp)
   3574a:	00 00 00 
   3574d:	0f 84 9d 02 00 00    	je     359f0 <_svfiprintf_r+0xa40>
   35753:	8b bd 5c ff ff ff    	mov    -0xa4(%ebp),%edi
   35759:	2b bd 58 ff ff ff    	sub    -0xa8(%ebp),%edi
   3575f:	85 ff                	test   %edi,%edi
   35761:	0f 8e e1 00 00 00    	jle    35848 <_svfiprintf_r+0x898>
   35767:	83 ff 10             	cmp    $0x10,%edi
   3576a:	0f 8e 7c 00 00 00    	jle    357ec <_svfiprintf_r+0x83c>
   35770:	89 9d 5c ff ff ff    	mov    %ebx,-0xa4(%ebp)
   35776:	89 f1                	mov    %esi,%ecx
   35778:	8b 5d 08             	mov    0x8(%ebp),%ebx
   3577b:	8b 75 0c             	mov    0xc(%ebp),%esi
   3577e:	eb 08                	jmp    35788 <_svfiprintf_r+0x7d8>
   35780:	83 ef 10             	sub    $0x10,%edi
   35783:	83 ff 10             	cmp    $0x10,%edi
   35786:	7e 5c                	jle    357e4 <_svfiprintf_r+0x834>
   35788:	83 c0 01             	add    $0x1,%eax
   3578b:	83 c2 10             	add    $0x10,%edx
   3578e:	c7 01 2c 75 03 00    	movl   $0x3752c,(%ecx)
   35794:	83 c1 08             	add    $0x8,%ecx
   35797:	c7 41 fc 10 00 00 00 	movl   $0x10,-0x4(%ecx)
   3579e:	83 f8 07             	cmp    $0x7,%eax
   357a1:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   357a7:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   357ad:	7e d1                	jle    35780 <_svfiprintf_r+0x7d0>
   357af:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   357b5:	89 44 24 08          	mov    %eax,0x8(%esp)
   357b9:	89 74 24 04          	mov    %esi,0x4(%esp)
   357bd:	89 1c 24             	mov    %ebx,(%esp)
   357c0:	e8 fb f5 ff ff       	call   34dc0 <__ssprint_r>
   357c5:	85 c0                	test   %eax,%eax
   357c7:	0f 85 eb 01 00 00    	jne    359b8 <_svfiprintf_r+0xa08>
   357cd:	83 ef 10             	sub    $0x10,%edi
   357d0:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   357d6:	83 ff 10             	cmp    $0x10,%edi
   357d9:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   357df:	8d 4d a8             	lea    -0x58(%ebp),%ecx
   357e2:	7f a4                	jg     35788 <_svfiprintf_r+0x7d8>
   357e4:	8b 9d 5c ff ff ff    	mov    -0xa4(%ebp),%ebx
   357ea:	89 ce                	mov    %ecx,%esi
   357ec:	83 c0 01             	add    $0x1,%eax
   357ef:	01 fa                	add    %edi,%edx
   357f1:	c7 06 2c 75 03 00    	movl   $0x3752c,(%esi)
   357f7:	83 c6 08             	add    $0x8,%esi
   357fa:	89 7e fc             	mov    %edi,-0x4(%esi)
   357fd:	83 f8 07             	cmp    $0x7,%eax
   35800:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   35806:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3580c:	7e 3a                	jle    35848 <_svfiprintf_r+0x898>
   3580e:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   35814:	89 44 24 08          	mov    %eax,0x8(%esp)
   35818:	8b 45 0c             	mov    0xc(%ebp),%eax
   3581b:	89 44 24 04          	mov    %eax,0x4(%esp)
   3581f:	8b 45 08             	mov    0x8(%ebp),%eax
   35822:	89 04 24             	mov    %eax,(%esp)
   35825:	e8 96 f5 ff ff       	call   34dc0 <__ssprint_r>
   3582a:	85 c0                	test   %eax,%eax
   3582c:	0f 85 86 01 00 00    	jne    359b8 <_svfiprintf_r+0xa08>
   35832:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   35838:	8d 75 a8             	lea    -0x58(%ebp),%esi
   3583b:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   35841:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   35848:	89 1e                	mov    %ebx,(%esi)
   3584a:	8b 9d 58 ff ff ff    	mov    -0xa8(%ebp),%ebx
   35850:	83 c0 01             	add    $0x1,%eax
   35853:	83 c6 08             	add    $0x8,%esi
   35856:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3585c:	89 5e fc             	mov    %ebx,-0x4(%esi)
   3585f:	01 da                	add    %ebx,%edx
   35861:	83 f8 07             	cmp    $0x7,%eax
   35864:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   3586a:	0f 8f 80 02 00 00    	jg     35af0 <_svfiprintf_r+0xb40>
   35870:	f6 85 64 ff ff ff 04 	testb  $0x4,-0x9c(%ebp)
   35877:	0f 84 b9 00 00 00    	je     35936 <_svfiprintf_r+0x986>
   3587d:	8b bd 54 ff ff ff    	mov    -0xac(%ebp),%edi
   35883:	2b bd 60 ff ff ff    	sub    -0xa0(%ebp),%edi
   35889:	85 ff                	test   %edi,%edi
   3588b:	0f 8e a5 00 00 00    	jle    35936 <_svfiprintf_r+0x986>
   35891:	83 ff 10             	cmp    $0x10,%edi
   35894:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3589a:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   358a0:	7e 71                	jle    35913 <_svfiprintf_r+0x963>
   358a2:	89 f1                	mov    %esi,%ecx
   358a4:	8b 75 08             	mov    0x8(%ebp),%esi
   358a7:	eb 0f                	jmp    358b8 <_svfiprintf_r+0x908>
   358a9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   358b0:	83 ef 10             	sub    $0x10,%edi
   358b3:	83 ff 10             	cmp    $0x10,%edi
   358b6:	7e 59                	jle    35911 <_svfiprintf_r+0x961>
   358b8:	83 c0 01             	add    $0x1,%eax
   358bb:	83 c2 10             	add    $0x10,%edx
   358be:	c7 01 3c 75 03 00    	movl   $0x3753c,(%ecx)
   358c4:	83 c1 08             	add    $0x8,%ecx
   358c7:	c7 41 fc 10 00 00 00 	movl   $0x10,-0x4(%ecx)
   358ce:	83 f8 07             	cmp    $0x7,%eax
   358d1:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   358d7:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   358dd:	7e d1                	jle    358b0 <_svfiprintf_r+0x900>
   358df:	8b 45 0c             	mov    0xc(%ebp),%eax
   358e2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   358e6:	89 34 24             	mov    %esi,(%esp)
   358e9:	89 44 24 04          	mov    %eax,0x4(%esp)
   358ed:	e8 ce f4 ff ff       	call   34dc0 <__ssprint_r>
   358f2:	85 c0                	test   %eax,%eax
   358f4:	0f 85 be 00 00 00    	jne    359b8 <_svfiprintf_r+0xa08>
   358fa:	83 ef 10             	sub    $0x10,%edi
   358fd:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   35903:	83 ff 10             	cmp    $0x10,%edi
   35906:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3590c:	8d 4d a8             	lea    -0x58(%ebp),%ecx
   3590f:	7f a7                	jg     358b8 <_svfiprintf_r+0x908>
   35911:	89 ce                	mov    %ecx,%esi
   35913:	83 c0 01             	add    $0x1,%eax
   35916:	01 fa                	add    %edi,%edx
   35918:	83 f8 07             	cmp    $0x7,%eax
   3591b:	c7 06 3c 75 03 00    	movl   $0x3753c,(%esi)
   35921:	89 7e 04             	mov    %edi,0x4(%esi)
   35924:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   3592a:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   35930:	0f 8f ee 02 00 00    	jg     35c24 <_svfiprintf_r+0xc74>
   35936:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
   3593c:	8b b5 60 ff ff ff    	mov    -0xa0(%ebp),%esi
   35942:	39 c6                	cmp    %eax,%esi
   35944:	0f 4d c6             	cmovge %esi,%eax
   35947:	01 85 50 ff ff ff    	add    %eax,-0xb0(%ebp)
   3594d:	85 d2                	test   %edx,%edx
   3594f:	0f 85 d3 01 00 00    	jne    35b28 <_svfiprintf_r+0xb78>
   35955:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
   3595c:	00 00 00 
   3595f:	8d 75 a8             	lea    -0x58(%ebp),%esi
   35962:	e9 a7 f6 ff ff       	jmp    3500e <_svfiprintf_r+0x5e>
   35967:	90                   	nop
   35968:	84 d2                	test   %dl,%dl
   3596a:	75 6c                	jne    359d8 <_svfiprintf_r+0xa28>
   3596c:	f6 85 64 ff ff ff 01 	testb  $0x1,-0x9c(%ebp)
   35973:	74 63                	je     359d8 <_svfiprintf_r+0xa28>
   35975:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
   3597b:	8d 5d a7             	lea    -0x59(%ebp),%ebx
   3597e:	c6 45 a7 30          	movb   $0x30,-0x59(%ebp)
   35982:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   35988:	e9 13 f8 ff ff       	jmp    351a0 <_svfiprintf_r+0x1f0>
   3598d:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
   35993:	85 c0                	test   %eax,%eax
   35995:	74 21                	je     359b8 <_svfiprintf_r+0xa08>
   35997:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3599d:	89 44 24 08          	mov    %eax,0x8(%esp)
   359a1:	8b 45 0c             	mov    0xc(%ebp),%eax
   359a4:	89 44 24 04          	mov    %eax,0x4(%esp)
   359a8:	8b 45 08             	mov    0x8(%ebp),%eax
   359ab:	89 04 24             	mov    %eax,(%esp)
   359ae:	e8 0d f4 ff ff       	call   34dc0 <__ssprint_r>
   359b3:	90                   	nop
   359b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   359b8:	8b 75 0c             	mov    0xc(%ebp),%esi
   359bb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   359c0:	f6 46 0c 40          	testb  $0x40,0xc(%esi)
   359c4:	0f 44 85 50 ff ff ff 	cmove  -0xb0(%ebp),%eax
   359cb:	81 c4 cc 00 00 00    	add    $0xcc,%esp
   359d1:	5b                   	pop    %ebx
   359d2:	5e                   	pop    %esi
   359d3:	5f                   	pop    %edi
   359d4:	5d                   	pop    %ebp
   359d5:	c3                   	ret    
   359d6:	66 90                	xchg   %ax,%ax
   359d8:	c7 85 58 ff ff ff 00 	movl   $0x0,-0xa8(%ebp)
   359df:	00 00 00 
   359e2:	8d 5d a8             	lea    -0x58(%ebp),%ebx
   359e5:	e9 b6 f7 ff ff       	jmp    351a0 <_svfiprintf_r+0x1f0>
   359ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   359f0:	8b bd 54 ff ff ff    	mov    -0xac(%ebp),%edi
   359f6:	2b bd 60 ff ff ff    	sub    -0xa0(%ebp),%edi
   359fc:	85 ff                	test   %edi,%edi
   359fe:	0f 8e 4f fd ff ff    	jle    35753 <_svfiprintf_r+0x7a3>
   35a04:	83 ff 10             	cmp    $0x10,%edi
   35a07:	0f 8e 7f 00 00 00    	jle    35a8c <_svfiprintf_r+0xadc>
   35a0d:	89 9d 4c ff ff ff    	mov    %ebx,-0xb4(%ebp)
   35a13:	89 f1                	mov    %esi,%ecx
   35a15:	8b 5d 08             	mov    0x8(%ebp),%ebx
   35a18:	8b 75 0c             	mov    0xc(%ebp),%esi
   35a1b:	eb 0b                	jmp    35a28 <_svfiprintf_r+0xa78>
   35a1d:	8d 76 00             	lea    0x0(%esi),%esi
   35a20:	83 ef 10             	sub    $0x10,%edi
   35a23:	83 ff 10             	cmp    $0x10,%edi
   35a26:	7e 5c                	jle    35a84 <_svfiprintf_r+0xad4>
   35a28:	83 c0 01             	add    $0x1,%eax
   35a2b:	83 c2 10             	add    $0x10,%edx
   35a2e:	c7 01 2c 75 03 00    	movl   $0x3752c,(%ecx)
   35a34:	83 c1 08             	add    $0x8,%ecx
   35a37:	c7 41 fc 10 00 00 00 	movl   $0x10,-0x4(%ecx)
   35a3e:	83 f8 07             	cmp    $0x7,%eax
   35a41:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   35a47:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   35a4d:	7e d1                	jle    35a20 <_svfiprintf_r+0xa70>
   35a4f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   35a55:	89 44 24 08          	mov    %eax,0x8(%esp)
   35a59:	89 74 24 04          	mov    %esi,0x4(%esp)
   35a5d:	89 1c 24             	mov    %ebx,(%esp)
   35a60:	e8 5b f3 ff ff       	call   34dc0 <__ssprint_r>
   35a65:	85 c0                	test   %eax,%eax
   35a67:	0f 85 4b ff ff ff    	jne    359b8 <_svfiprintf_r+0xa08>
   35a6d:	83 ef 10             	sub    $0x10,%edi
   35a70:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   35a76:	83 ff 10             	cmp    $0x10,%edi
   35a79:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   35a7f:	8d 4d a8             	lea    -0x58(%ebp),%ecx
   35a82:	7f a4                	jg     35a28 <_svfiprintf_r+0xa78>
   35a84:	8b 9d 4c ff ff ff    	mov    -0xb4(%ebp),%ebx
   35a8a:	89 ce                	mov    %ecx,%esi
   35a8c:	83 c0 01             	add    $0x1,%eax
   35a8f:	01 fa                	add    %edi,%edx
   35a91:	c7 06 2c 75 03 00    	movl   $0x3752c,(%esi)
   35a97:	83 c6 08             	add    $0x8,%esi
   35a9a:	89 7e fc             	mov    %edi,-0x4(%esi)
   35a9d:	83 f8 07             	cmp    $0x7,%eax
   35aa0:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   35aa6:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   35aac:	0f 8e a1 fc ff ff    	jle    35753 <_svfiprintf_r+0x7a3>
   35ab2:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   35ab8:	89 44 24 08          	mov    %eax,0x8(%esp)
   35abc:	8b 45 0c             	mov    0xc(%ebp),%eax
   35abf:	89 44 24 04          	mov    %eax,0x4(%esp)
   35ac3:	8b 45 08             	mov    0x8(%ebp),%eax
   35ac6:	89 04 24             	mov    %eax,(%esp)
   35ac9:	e8 f2 f2 ff ff       	call   34dc0 <__ssprint_r>
   35ace:	85 c0                	test   %eax,%eax
   35ad0:	0f 85 e2 fe ff ff    	jne    359b8 <_svfiprintf_r+0xa08>
   35ad6:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   35adc:	8d 75 a8             	lea    -0x58(%ebp),%esi
   35adf:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   35ae5:	e9 69 fc ff ff       	jmp    35753 <_svfiprintf_r+0x7a3>
   35aea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   35af0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   35af6:	89 44 24 08          	mov    %eax,0x8(%esp)
   35afa:	8b 45 0c             	mov    0xc(%ebp),%eax
   35afd:	89 44 24 04          	mov    %eax,0x4(%esp)
   35b01:	8b 45 08             	mov    0x8(%ebp),%eax
   35b04:	89 04 24             	mov    %eax,(%esp)
   35b07:	e8 b4 f2 ff ff       	call   34dc0 <__ssprint_r>
   35b0c:	85 c0                	test   %eax,%eax
   35b0e:	0f 85 a4 fe ff ff    	jne    359b8 <_svfiprintf_r+0xa08>
   35b14:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   35b1a:	8d 75 a8             	lea    -0x58(%ebp),%esi
   35b1d:	e9 4e fd ff ff       	jmp    35870 <_svfiprintf_r+0x8c0>
   35b22:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   35b28:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   35b2e:	89 44 24 08          	mov    %eax,0x8(%esp)
   35b32:	8b 45 0c             	mov    0xc(%ebp),%eax
   35b35:	89 44 24 04          	mov    %eax,0x4(%esp)
   35b39:	8b 45 08             	mov    0x8(%ebp),%eax
   35b3c:	89 04 24             	mov    %eax,(%esp)
   35b3f:	e8 7c f2 ff ff       	call   34dc0 <__ssprint_r>
   35b44:	85 c0                	test   %eax,%eax
   35b46:	0f 84 09 fe ff ff    	je     35955 <_svfiprintf_r+0x9a5>
   35b4c:	e9 67 fe ff ff       	jmp    359b8 <_svfiprintf_r+0xa08>
   35b51:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   35b58:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   35b5e:	89 44 24 08          	mov    %eax,0x8(%esp)
   35b62:	8b 45 0c             	mov    0xc(%ebp),%eax
   35b65:	89 44 24 04          	mov    %eax,0x4(%esp)
   35b69:	8b 45 08             	mov    0x8(%ebp),%eax
   35b6c:	89 04 24             	mov    %eax,(%esp)
   35b6f:	e8 4c f2 ff ff       	call   34dc0 <__ssprint_r>
   35b74:	85 c0                	test   %eax,%eax
   35b76:	0f 85 3c fe ff ff    	jne    359b8 <_svfiprintf_r+0xa08>
   35b7c:	8d 75 a8             	lea    -0x58(%ebp),%esi
   35b7f:	e9 e9 f4 ff ff       	jmp    3506d <_svfiprintf_r+0xbd>
   35b84:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35b88:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   35b8e:	89 44 24 08          	mov    %eax,0x8(%esp)
   35b92:	8b 45 0c             	mov    0xc(%ebp),%eax
   35b95:	89 44 24 04          	mov    %eax,0x4(%esp)
   35b99:	8b 45 08             	mov    0x8(%ebp),%eax
   35b9c:	89 04 24             	mov    %eax,(%esp)
   35b9f:	e8 1c f2 ff ff       	call   34dc0 <__ssprint_r>
   35ba4:	85 c0                	test   %eax,%eax
   35ba6:	0f 85 0c fe ff ff    	jne    359b8 <_svfiprintf_r+0xa08>
   35bac:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   35bb2:	8d 75 a8             	lea    -0x58(%ebp),%esi
   35bb5:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   35bbb:	e9 83 fb ff ff       	jmp    35743 <_svfiprintf_r+0x793>
   35bc0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   35bc6:	89 44 24 08          	mov    %eax,0x8(%esp)
   35bca:	8b 45 0c             	mov    0xc(%ebp),%eax
   35bcd:	89 44 24 04          	mov    %eax,0x4(%esp)
   35bd1:	8b 45 08             	mov    0x8(%ebp),%eax
   35bd4:	89 04 24             	mov    %eax,(%esp)
   35bd7:	e8 e4 f1 ff ff       	call   34dc0 <__ssprint_r>
   35bdc:	85 c0                	test   %eax,%eax
   35bde:	0f 85 d4 fd ff ff    	jne    359b8 <_svfiprintf_r+0xa08>
   35be4:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   35bea:	8d 75 a8             	lea    -0x58(%ebp),%esi
   35bed:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   35bf3:	e9 13 fb ff ff       	jmp    3570b <_svfiprintf_r+0x75b>
   35bf8:	83 f9 09             	cmp    $0x9,%ecx
   35bfb:	76 56                	jbe    35c53 <_svfiprintf_r+0xca3>
   35bfd:	8d 5d a8             	lea    -0x58(%ebp),%ebx
   35c00:	b8 cd cc cc cc       	mov    $0xcccccccd,%eax
   35c05:	83 eb 01             	sub    $0x1,%ebx
   35c08:	f7 e1                	mul    %ecx
   35c0a:	c1 ea 03             	shr    $0x3,%edx
   35c0d:	8d 04 92             	lea    (%edx,%edx,4),%eax
   35c10:	01 c0                	add    %eax,%eax
   35c12:	29 c1                	sub    %eax,%ecx
   35c14:	83 c1 30             	add    $0x30,%ecx
   35c17:	85 d2                	test   %edx,%edx
   35c19:	88 0b                	mov    %cl,(%ebx)
   35c1b:	89 d1                	mov    %edx,%ecx
   35c1d:	75 e1                	jne    35c00 <_svfiprintf_r+0xc50>
   35c1f:	e9 71 f5 ff ff       	jmp    35195 <_svfiprintf_r+0x1e5>
   35c24:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   35c2a:	89 44 24 08          	mov    %eax,0x8(%esp)
   35c2e:	8b 45 0c             	mov    0xc(%ebp),%eax
   35c31:	89 44 24 04          	mov    %eax,0x4(%esp)
   35c35:	8b 45 08             	mov    0x8(%ebp),%eax
   35c38:	89 04 24             	mov    %eax,(%esp)
   35c3b:	e8 80 f1 ff ff       	call   34dc0 <__ssprint_r>
   35c40:	85 c0                	test   %eax,%eax
   35c42:	0f 85 70 fd ff ff    	jne    359b8 <_svfiprintf_r+0xa08>
   35c48:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   35c4e:	e9 e3 fc ff ff       	jmp    35936 <_svfiprintf_r+0x986>
   35c53:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
   35c59:	83 c1 30             	add    $0x30,%ecx
   35c5c:	88 4d a7             	mov    %cl,-0x59(%ebp)
   35c5f:	8d 5d a7             	lea    -0x59(%ebp),%ebx
   35c62:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   35c68:	e9 33 f5 ff ff       	jmp    351a0 <_svfiprintf_r+0x1f0>
   35c6d:	8b 45 14             	mov    0x14(%ebp),%eax
   35c70:	8b 9d 50 ff ff ff    	mov    -0xb0(%ebp),%ebx
   35c76:	8b 00                	mov    (%eax),%eax
   35c78:	89 18                	mov    %ebx,(%eax)
   35c7a:	8b 45 14             	mov    0x14(%ebp),%eax
   35c7d:	83 c0 04             	add    $0x4,%eax
   35c80:	89 45 14             	mov    %eax,0x14(%ebp)
   35c83:	e9 86 f3 ff ff       	jmp    3500e <_svfiprintf_r+0x5e>
   35c88:	0f b7 0b             	movzwl (%ebx),%ecx
   35c8b:	83 c3 04             	add    $0x4,%ebx
   35c8e:	89 5d 14             	mov    %ebx,0x14(%ebp)
   35c91:	e9 95 f8 ff ff       	jmp    3552b <_svfiprintf_r+0x57b>
   35c96:	0f bf 08             	movswl (%eax),%ecx
   35c99:	83 c0 04             	add    $0x4,%eax
   35c9c:	89 45 14             	mov    %eax,0x14(%ebp)
   35c9f:	85 c9                	test   %ecx,%ecx
   35ca1:	0f 89 0d f7 ff ff    	jns    353b4 <_svfiprintf_r+0x404>
   35ca7:	f7 d9                	neg    %ecx
   35ca9:	bf 2d 00 00 00       	mov    $0x2d,%edi
   35cae:	c6 85 71 ff ff ff 2d 	movb   $0x2d,-0x8f(%ebp)
   35cb5:	ba 01 00 00 00       	mov    $0x1,%edx
   35cba:	e9 7a f4 ff ff       	jmp    35139 <_svfiprintf_r+0x189>
   35cbf:	89 1c 24             	mov    %ebx,(%esp)
   35cc2:	e8 79 f0 ff ff       	call   34d40 <strlen>
   35cc7:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
   35ccd:	0f b6 bd 71 ff ff ff 	movzbl -0x8f(%ebp),%edi
   35cd4:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
   35cdb:	00 00 00 
   35cde:	89 55 14             	mov    %edx,0x14(%ebp)
   35ce1:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   35ce7:	e9 b4 f4 ff ff       	jmp    351a0 <_svfiprintf_r+0x1f0>
   35cec:	8b 45 08             	mov    0x8(%ebp),%eax
   35cef:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
   35cf6:	00 
   35cf7:	89 04 24             	mov    %eax,(%esp)
   35cfa:	e8 71 d9 ff ff       	call   33670 <_malloc_r>
   35cff:	8b 75 0c             	mov    0xc(%ebp),%esi
   35d02:	85 c0                	test   %eax,%eax
   35d04:	89 06                	mov    %eax,(%esi)
   35d06:	89 46 10             	mov    %eax,0x10(%esi)
   35d09:	0f 84 a3 00 00 00    	je     35db2 <_svfiprintf_r+0xe02>
   35d0f:	8b 45 0c             	mov    0xc(%ebp),%eax
   35d12:	c7 40 14 40 00 00 00 	movl   $0x40,0x14(%eax)
   35d19:	e9 b2 f2 ff ff       	jmp    34fd0 <_svfiprintf_r+0x20>
   35d1e:	8b bd 5c ff ff ff    	mov    -0xa4(%ebp),%edi
   35d24:	b8 06 00 00 00       	mov    $0x6,%eax
   35d29:	89 55 14             	mov    %edx,0x14(%ebp)
   35d2c:	83 ff 06             	cmp    $0x6,%edi
   35d2f:	0f 46 c7             	cmovbe %edi,%eax
   35d32:	85 c0                	test   %eax,%eax
   35d34:	0f 49 d8             	cmovns %eax,%ebx
   35d37:	89 9d 60 ff ff ff    	mov    %ebx,-0xa0(%ebp)
   35d3d:	bb 69 70 03 00       	mov    $0x37069,%ebx
   35d42:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   35d48:	e9 61 f8 ff ff       	jmp    355ae <_svfiprintf_r+0x5fe>
   35d4d:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   35d53:	0f b6 bd 71 ff ff ff 	movzbl -0x8f(%ebp),%edi
   35d5a:	89 55 14             	mov    %edx,0x14(%ebp)
   35d5d:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
   35d64:	00 00 00 
   35d67:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   35d6d:	e9 2e f4 ff ff       	jmp    351a0 <_svfiprintf_r+0x1f0>
   35d72:	89 da                	mov    %ebx,%edx
   35d74:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
   35d7b:	00 00 00 
   35d7e:	e9 29 f3 ff ff       	jmp    350ac <_svfiprintf_r+0xfc>
   35d83:	8b 4d 14             	mov    0x14(%ebp),%ecx
   35d86:	89 da                	mov    %ebx,%edx
   35d88:	8b 45 14             	mov    0x14(%ebp),%eax
   35d8b:	8b 09                	mov    (%ecx),%ecx
   35d8d:	83 c0 04             	add    $0x4,%eax
   35d90:	89 45 14             	mov    %eax,0x14(%ebp)
   35d93:	85 c9                	test   %ecx,%ecx
   35d95:	89 8d 5c ff ff ff    	mov    %ecx,-0xa4(%ebp)
   35d9b:	0f 89 26 f3 ff ff    	jns    350c7 <_svfiprintf_r+0x117>
   35da1:	c7 85 5c ff ff ff ff 	movl   $0xffffffff,-0xa4(%ebp)
   35da8:	ff ff ff 
   35dab:	89 d0                	mov    %edx,%eax
   35dad:	e9 f4 f2 ff ff       	jmp    350a6 <_svfiprintf_r+0xf6>
   35db2:	8b 45 08             	mov    0x8(%ebp),%eax
   35db5:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
   35dbb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   35dc0:	e9 06 fc ff ff       	jmp    359cb <_svfiprintf_r+0xa1b>
   35dc5:	66 90                	xchg   %ax,%ax
   35dc7:	66 90                	xchg   %ax,%ax
   35dc9:	66 90                	xchg   %ax,%ax
   35dcb:	66 90                	xchg   %ax,%ax
   35dcd:	66 90                	xchg   %ax,%ax
   35dcf:	90                   	nop

00035dd0 <_calloc_r>:
   35dd0:	55                   	push   %ebp
   35dd1:	89 e5                	mov    %esp,%ebp
   35dd3:	53                   	push   %ebx
   35dd4:	83 ec 14             	sub    $0x14,%esp
   35dd7:	8b 45 10             	mov    0x10(%ebp),%eax
   35dda:	0f af 45 0c          	imul   0xc(%ebp),%eax
   35dde:	89 44 24 04          	mov    %eax,0x4(%esp)
   35de2:	8b 45 08             	mov    0x8(%ebp),%eax
   35de5:	89 04 24             	mov    %eax,(%esp)
   35de8:	e8 83 d8 ff ff       	call   33670 <_malloc_r>
   35ded:	85 c0                	test   %eax,%eax
   35def:	89 c3                	mov    %eax,%ebx
   35df1:	0f 84 91 00 00 00    	je     35e88 <_calloc_r+0xb8>
   35df7:	8b 40 fc             	mov    -0x4(%eax),%eax
   35dfa:	83 e0 fc             	and    $0xfffffffc,%eax
   35dfd:	83 e8 04             	sub    $0x4,%eax
   35e00:	83 f8 24             	cmp    $0x24,%eax
   35e03:	77 63                	ja     35e68 <_calloc_r+0x98>
   35e05:	83 f8 13             	cmp    $0x13,%eax
   35e08:	89 da                	mov    %ebx,%edx
   35e0a:	77 1c                	ja     35e28 <_calloc_r+0x58>
   35e0c:	c7 02 00 00 00 00    	movl   $0x0,(%edx)
   35e12:	89 d8                	mov    %ebx,%eax
   35e14:	c7 42 04 00 00 00 00 	movl   $0x0,0x4(%edx)
   35e1b:	c7 42 08 00 00 00 00 	movl   $0x0,0x8(%edx)
   35e22:	83 c4 14             	add    $0x14,%esp
   35e25:	5b                   	pop    %ebx
   35e26:	5d                   	pop    %ebp
   35e27:	c3                   	ret    
   35e28:	83 f8 1b             	cmp    $0x1b,%eax
   35e2b:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
   35e31:	8d 53 08             	lea    0x8(%ebx),%edx
   35e34:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
   35e3b:	76 cf                	jbe    35e0c <_calloc_r+0x3c>
   35e3d:	83 f8 24             	cmp    $0x24,%eax
   35e40:	c7 43 08 00 00 00 00 	movl   $0x0,0x8(%ebx)
   35e47:	8d 53 10             	lea    0x10(%ebx),%edx
   35e4a:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
   35e51:	75 b9                	jne    35e0c <_calloc_r+0x3c>
   35e53:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
   35e5a:	8d 53 18             	lea    0x18(%ebx),%edx
   35e5d:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
   35e64:	eb a6                	jmp    35e0c <_calloc_r+0x3c>
   35e66:	66 90                	xchg   %ax,%ax
   35e68:	89 1c 24             	mov    %ebx,(%esp)
   35e6b:	89 44 24 08          	mov    %eax,0x8(%esp)
   35e6f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   35e76:	00 
   35e77:	e8 f1 03 00 00       	call   3626d <memset>
   35e7c:	83 c4 14             	add    $0x14,%esp
   35e7f:	89 d8                	mov    %ebx,%eax
   35e81:	5b                   	pop    %ebx
   35e82:	5d                   	pop    %ebp
   35e83:	c3                   	ret    
   35e84:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35e88:	31 c0                	xor    %eax,%eax
   35e8a:	eb 96                	jmp    35e22 <_calloc_r+0x52>
   35e8c:	66 90                	xchg   %ax,%ax
   35e8e:	66 90                	xchg   %ax,%ax

00035e90 <_malloc_trim_r>:
   35e90:	55                   	push   %ebp
   35e91:	89 e5                	mov    %esp,%ebp
   35e93:	57                   	push   %edi
   35e94:	56                   	push   %esi
   35e95:	53                   	push   %ebx
   35e96:	83 ec 1c             	sub    $0x1c,%esp
   35e99:	8b 75 08             	mov    0x8(%ebp),%esi
   35e9c:	89 34 24             	mov    %esi,(%esp)
   35e9f:	e8 ec df ff ff       	call   33e90 <__malloc_lock>
   35ea4:	a1 28 95 03 00       	mov    0x39528,%eax
   35ea9:	8b 58 04             	mov    0x4(%eax),%ebx
   35eac:	83 e3 fc             	and    $0xfffffffc,%ebx
   35eaf:	89 d8                	mov    %ebx,%eax
   35eb1:	2b 45 0c             	sub    0xc(%ebp),%eax
   35eb4:	05 ef 0f 00 00       	add    $0xfef,%eax
   35eb9:	25 00 f0 ff ff       	and    $0xfffff000,%eax
   35ebe:	8d b8 00 f0 ff ff    	lea    -0x1000(%eax),%edi
   35ec4:	81 ff ff 0f 00 00    	cmp    $0xfff,%edi
   35eca:	7e 1c                	jle    35ee8 <_malloc_trim_r+0x58>
   35ecc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   35ed3:	00 
   35ed4:	89 34 24             	mov    %esi,(%esp)
   35ed7:	e8 b4 ed ff ff       	call   34c90 <_sbrk_r>
   35edc:	8b 15 28 95 03 00    	mov    0x39528,%edx
   35ee2:	01 da                	add    %ebx,%edx
   35ee4:	39 d0                	cmp    %edx,%eax
   35ee6:	74 18                	je     35f00 <_malloc_trim_r+0x70>
   35ee8:	89 34 24             	mov    %esi,(%esp)
   35eeb:	e8 b0 df ff ff       	call   33ea0 <__malloc_unlock>
   35ef0:	83 c4 1c             	add    $0x1c,%esp
   35ef3:	31 c0                	xor    %eax,%eax
   35ef5:	5b                   	pop    %ebx
   35ef6:	5e                   	pop    %esi
   35ef7:	5f                   	pop    %edi
   35ef8:	5d                   	pop    %ebp
   35ef9:	c3                   	ret    
   35efa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   35f00:	89 f8                	mov    %edi,%eax
   35f02:	f7 d8                	neg    %eax
   35f04:	89 44 24 04          	mov    %eax,0x4(%esp)
   35f08:	89 34 24             	mov    %esi,(%esp)
   35f0b:	e8 80 ed ff ff       	call   34c90 <_sbrk_r>
   35f10:	83 f8 ff             	cmp    $0xffffffff,%eax
   35f13:	74 2b                	je     35f40 <_malloc_trim_r+0xb0>
   35f15:	a1 28 95 03 00       	mov    0x39528,%eax
   35f1a:	29 fb                	sub    %edi,%ebx
   35f1c:	83 cb 01             	or     $0x1,%ebx
   35f1f:	29 3d 60 99 03 00    	sub    %edi,0x39960
   35f25:	89 58 04             	mov    %ebx,0x4(%eax)
   35f28:	89 34 24             	mov    %esi,(%esp)
   35f2b:	e8 70 df ff ff       	call   33ea0 <__malloc_unlock>
   35f30:	83 c4 1c             	add    $0x1c,%esp
   35f33:	b8 01 00 00 00       	mov    $0x1,%eax
   35f38:	5b                   	pop    %ebx
   35f39:	5e                   	pop    %esi
   35f3a:	5f                   	pop    %edi
   35f3b:	5d                   	pop    %ebp
   35f3c:	c3                   	ret    
   35f3d:	8d 76 00             	lea    0x0(%esi),%esi
   35f40:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   35f47:	00 
   35f48:	89 34 24             	mov    %esi,(%esp)
   35f4b:	e8 40 ed ff ff       	call   34c90 <_sbrk_r>
   35f50:	8b 15 28 95 03 00    	mov    0x39528,%edx
   35f56:	89 c1                	mov    %eax,%ecx
   35f58:	29 d1                	sub    %edx,%ecx
   35f5a:	83 f9 0f             	cmp    $0xf,%ecx
   35f5d:	7e 89                	jle    35ee8 <_malloc_trim_r+0x58>
   35f5f:	2b 05 00 95 03 00    	sub    0x39500,%eax
   35f65:	83 c9 01             	or     $0x1,%ecx
   35f68:	89 4a 04             	mov    %ecx,0x4(%edx)
   35f6b:	a3 60 99 03 00       	mov    %eax,0x39960
   35f70:	e9 73 ff ff ff       	jmp    35ee8 <_malloc_trim_r+0x58>
   35f75:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35f79:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00035f80 <_free_r>:
   35f80:	55                   	push   %ebp
   35f81:	89 e5                	mov    %esp,%ebp
   35f83:	57                   	push   %edi
   35f84:	56                   	push   %esi
   35f85:	53                   	push   %ebx
   35f86:	83 ec 1c             	sub    $0x1c,%esp
   35f89:	8b 75 0c             	mov    0xc(%ebp),%esi
   35f8c:	8b 45 08             	mov    0x8(%ebp),%eax
   35f8f:	85 f6                	test   %esi,%esi
   35f91:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   35f94:	0f 84 fe 00 00 00    	je     36098 <_free_r+0x118>
   35f9a:	89 04 24             	mov    %eax,(%esp)
   35f9d:	e8 ee de ff ff       	call   33e90 <__malloc_lock>
   35fa2:	8b 7e fc             	mov    -0x4(%esi),%edi
   35fa5:	8d 56 f8             	lea    -0x8(%esi),%edx
   35fa8:	89 f8                	mov    %edi,%eax
   35faa:	83 e0 fe             	and    $0xfffffffe,%eax
   35fad:	8d 0c 02             	lea    (%edx,%eax,1),%ecx
   35fb0:	8b 59 04             	mov    0x4(%ecx),%ebx
   35fb3:	83 e3 fc             	and    $0xfffffffc,%ebx
   35fb6:	39 0d 28 95 03 00    	cmp    %ecx,0x39528
   35fbc:	0f 84 0e 01 00 00    	je     360d0 <_free_r+0x150>
   35fc2:	83 e7 01             	and    $0x1,%edi
   35fc5:	89 59 04             	mov    %ebx,0x4(%ecx)
   35fc8:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
   35fcf:	75 1f                	jne    35ff0 <_free_r+0x70>
   35fd1:	8b 76 f8             	mov    -0x8(%esi),%esi
   35fd4:	29 f2                	sub    %esi,%edx
   35fd6:	01 f0                	add    %esi,%eax
   35fd8:	8b 72 08             	mov    0x8(%edx),%esi
   35fdb:	81 fe 28 95 03 00    	cmp    $0x39528,%esi
   35fe1:	0f 84 39 01 00 00    	je     36120 <_free_r+0x1a0>
   35fe7:	8b 7a 0c             	mov    0xc(%edx),%edi
   35fea:	89 7e 0c             	mov    %edi,0xc(%esi)
   35fed:	89 77 08             	mov    %esi,0x8(%edi)
   35ff0:	f6 44 19 04 01       	testb  $0x1,0x4(%ecx,%ebx,1)
   35ff5:	75 21                	jne    36018 <_free_r+0x98>
   35ff7:	8b 75 e0             	mov    -0x20(%ebp),%esi
   35ffa:	01 d8                	add    %ebx,%eax
   35ffc:	8b 59 08             	mov    0x8(%ecx),%ebx
   35fff:	85 f6                	test   %esi,%esi
   36001:	75 0c                	jne    3600f <_free_r+0x8f>
   36003:	81 fb 28 95 03 00    	cmp    $0x39528,%ebx
   36009:	0f 84 21 01 00 00    	je     36130 <_free_r+0x1b0>
   3600f:	8b 49 0c             	mov    0xc(%ecx),%ecx
   36012:	89 4b 0c             	mov    %ecx,0xc(%ebx)
   36015:	89 59 08             	mov    %ebx,0x8(%ecx)
   36018:	89 c1                	mov    %eax,%ecx
   3601a:	83 c9 01             	or     $0x1,%ecx
   3601d:	89 4a 04             	mov    %ecx,0x4(%edx)
   36020:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   36023:	89 04 02             	mov    %eax,(%edx,%eax,1)
   36026:	85 c9                	test   %ecx,%ecx
   36028:	75 56                	jne    36080 <_free_r+0x100>
   3602a:	3d ff 01 00 00       	cmp    $0x1ff,%eax
   3602f:	76 6f                	jbe    360a0 <_free_r+0x120>
   36031:	89 c1                	mov    %eax,%ecx
   36033:	c1 e9 09             	shr    $0x9,%ecx
   36036:	83 f9 04             	cmp    $0x4,%ecx
   36039:	0f 87 21 01 00 00    	ja     36160 <_free_r+0x1e0>
   3603f:	89 c1                	mov    %eax,%ecx
   36041:	c1 e9 06             	shr    $0x6,%ecx
   36044:	83 c1 38             	add    $0x38,%ecx
   36047:	8d 1c 09             	lea    (%ecx,%ecx,1),%ebx
   3604a:	8d 34 9d 20 95 03 00 	lea    0x39520(,%ebx,4),%esi
   36051:	8b 5e 08             	mov    0x8(%esi),%ebx
   36054:	39 f3                	cmp    %esi,%ebx
   36056:	0f 84 14 01 00 00    	je     36170 <_free_r+0x1f0>
   3605c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36060:	8b 4b 04             	mov    0x4(%ebx),%ecx
   36063:	83 e1 fc             	and    $0xfffffffc,%ecx
   36066:	39 c8                	cmp    %ecx,%eax
   36068:	73 07                	jae    36071 <_free_r+0xf1>
   3606a:	8b 5b 08             	mov    0x8(%ebx),%ebx
   3606d:	39 de                	cmp    %ebx,%esi
   3606f:	75 ef                	jne    36060 <_free_r+0xe0>
   36071:	8b 43 0c             	mov    0xc(%ebx),%eax
   36074:	89 42 0c             	mov    %eax,0xc(%edx)
   36077:	89 5a 08             	mov    %ebx,0x8(%edx)
   3607a:	89 50 08             	mov    %edx,0x8(%eax)
   3607d:	89 53 0c             	mov    %edx,0xc(%ebx)
   36080:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   36083:	89 45 08             	mov    %eax,0x8(%ebp)
   36086:	83 c4 1c             	add    $0x1c,%esp
   36089:	5b                   	pop    %ebx
   3608a:	5e                   	pop    %esi
   3608b:	5f                   	pop    %edi
   3608c:	5d                   	pop    %ebp
   3608d:	e9 0e de ff ff       	jmp    33ea0 <__malloc_unlock>
   36092:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36098:	83 c4 1c             	add    $0x1c,%esp
   3609b:	5b                   	pop    %ebx
   3609c:	5e                   	pop    %esi
   3609d:	5f                   	pop    %edi
   3609e:	5d                   	pop    %ebp
   3609f:	c3                   	ret    
   360a0:	c1 e8 03             	shr    $0x3,%eax
   360a3:	bb 01 00 00 00       	mov    $0x1,%ebx
   360a8:	89 c1                	mov    %eax,%ecx
   360aa:	c1 f9 02             	sar    $0x2,%ecx
   360ad:	8d 04 c5 20 95 03 00 	lea    0x39520(,%eax,8),%eax
   360b4:	d3 e3                	shl    %cl,%ebx
   360b6:	8b 48 08             	mov    0x8(%eax),%ecx
   360b9:	09 1d 24 95 03 00    	or     %ebx,0x39524
   360bf:	89 42 0c             	mov    %eax,0xc(%edx)
   360c2:	89 4a 08             	mov    %ecx,0x8(%edx)
   360c5:	89 50 08             	mov    %edx,0x8(%eax)
   360c8:	89 51 0c             	mov    %edx,0xc(%ecx)
   360cb:	eb b3                	jmp    36080 <_free_r+0x100>
   360cd:	8d 76 00             	lea    0x0(%esi),%esi
   360d0:	01 d8                	add    %ebx,%eax
   360d2:	83 e7 01             	and    $0x1,%edi
   360d5:	75 13                	jne    360ea <_free_r+0x16a>
   360d7:	8b 4e f8             	mov    -0x8(%esi),%ecx
   360da:	29 ca                	sub    %ecx,%edx
   360dc:	01 c8                	add    %ecx,%eax
   360de:	8b 5a 08             	mov    0x8(%edx),%ebx
   360e1:	8b 4a 0c             	mov    0xc(%edx),%ecx
   360e4:	89 4b 0c             	mov    %ecx,0xc(%ebx)
   360e7:	89 59 08             	mov    %ebx,0x8(%ecx)
   360ea:	89 c1                	mov    %eax,%ecx
   360ec:	83 c9 01             	or     $0x1,%ecx
   360ef:	3b 05 04 95 03 00    	cmp    0x39504,%eax
   360f5:	89 4a 04             	mov    %ecx,0x4(%edx)
   360f8:	89 15 28 95 03 00    	mov    %edx,0x39528
   360fe:	72 80                	jb     36080 <_free_r+0x100>
   36100:	a1 90 99 03 00       	mov    0x39990,%eax
   36105:	89 44 24 04          	mov    %eax,0x4(%esp)
   36109:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   3610c:	89 04 24             	mov    %eax,(%esp)
   3610f:	e8 7c fd ff ff       	call   35e90 <_malloc_trim_r>
   36114:	e9 67 ff ff ff       	jmp    36080 <_free_r+0x100>
   36119:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   36120:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
   36127:	e9 c4 fe ff ff       	jmp    35ff0 <_free_r+0x70>
   3612c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36130:	89 c1                	mov    %eax,%ecx
   36132:	83 c9 01             	or     $0x1,%ecx
   36135:	89 15 34 95 03 00    	mov    %edx,0x39534
   3613b:	89 15 30 95 03 00    	mov    %edx,0x39530
   36141:	c7 42 0c 28 95 03 00 	movl   $0x39528,0xc(%edx)
   36148:	c7 42 08 28 95 03 00 	movl   $0x39528,0x8(%edx)
   3614f:	89 4a 04             	mov    %ecx,0x4(%edx)
   36152:	89 04 02             	mov    %eax,(%edx,%eax,1)
   36155:	e9 26 ff ff ff       	jmp    36080 <_free_r+0x100>
   3615a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36160:	83 f9 14             	cmp    $0x14,%ecx
   36163:	77 23                	ja     36188 <_free_r+0x208>
   36165:	83 c1 5b             	add    $0x5b,%ecx
   36168:	8d 1c 09             	lea    (%ecx,%ecx,1),%ebx
   3616b:	e9 da fe ff ff       	jmp    3604a <_free_r+0xca>
   36170:	c1 f9 02             	sar    $0x2,%ecx
   36173:	b8 01 00 00 00       	mov    $0x1,%eax
   36178:	d3 e0                	shl    %cl,%eax
   3617a:	09 05 24 95 03 00    	or     %eax,0x39524
   36180:	89 d8                	mov    %ebx,%eax
   36182:	e9 ed fe ff ff       	jmp    36074 <_free_r+0xf4>
   36187:	90                   	nop
   36188:	83 f9 54             	cmp    $0x54,%ecx
   3618b:	77 10                	ja     3619d <_free_r+0x21d>
   3618d:	89 c1                	mov    %eax,%ecx
   3618f:	c1 e9 0c             	shr    $0xc,%ecx
   36192:	83 c1 6e             	add    $0x6e,%ecx
   36195:	8d 1c 09             	lea    (%ecx,%ecx,1),%ebx
   36198:	e9 ad fe ff ff       	jmp    3604a <_free_r+0xca>
   3619d:	81 f9 54 01 00 00    	cmp    $0x154,%ecx
   361a3:	77 10                	ja     361b5 <_free_r+0x235>
   361a5:	89 c1                	mov    %eax,%ecx
   361a7:	c1 e9 0f             	shr    $0xf,%ecx
   361aa:	83 c1 77             	add    $0x77,%ecx
   361ad:	8d 1c 09             	lea    (%ecx,%ecx,1),%ebx
   361b0:	e9 95 fe ff ff       	jmp    3604a <_free_r+0xca>
   361b5:	81 f9 54 05 00 00    	cmp    $0x554,%ecx
   361bb:	77 10                	ja     361cd <_free_r+0x24d>
   361bd:	89 c1                	mov    %eax,%ecx
   361bf:	c1 e9 12             	shr    $0x12,%ecx
   361c2:	83 c1 7c             	add    $0x7c,%ecx
   361c5:	8d 1c 09             	lea    (%ecx,%ecx,1),%ebx
   361c8:	e9 7d fe ff ff       	jmp    3604a <_free_r+0xca>
   361cd:	bb fc 00 00 00       	mov    $0xfc,%ebx
   361d2:	b9 7e 00 00 00       	mov    $0x7e,%ecx
   361d7:	e9 6e fe ff ff       	jmp    3604a <_free_r+0xca>
   361dc:	66 90                	xchg   %ax,%ax
   361de:	66 90                	xchg   %ax,%ax

000361e0 <memmove>:
   361e0:	55                   	push   %ebp
   361e1:	89 e5                	mov    %esp,%ebp
   361e3:	56                   	push   %esi
   361e4:	57                   	push   %edi
   361e5:	53                   	push   %ebx
   361e6:	8b 7d 08             	mov    0x8(%ebp),%edi
   361e9:	8b 4d 10             	mov    0x10(%ebp),%ecx
   361ec:	8b 75 0c             	mov    0xc(%ebp),%esi
   361ef:	fc                   	cld    
   361f0:	39 fe                	cmp    %edi,%esi
   361f2:	73 43                	jae    36237 <memmove+0x57>
   361f4:	8d 5c 31 ff          	lea    -0x1(%ecx,%esi,1),%ebx
   361f8:	39 df                	cmp    %ebx,%edi
   361fa:	77 3b                	ja     36237 <memmove+0x57>
   361fc:	01 ce                	add    %ecx,%esi
   361fe:	01 cf                	add    %ecx,%edi
   36200:	fd                   	std    
   36201:	83 f9 08             	cmp    $0x8,%ecx
   36204:	76 2b                	jbe    36231 <memmove+0x51>
   36206:	89 fa                	mov    %edi,%edx
   36208:	89 cb                	mov    %ecx,%ebx
   3620a:	83 e2 03             	and    $0x3,%edx
   3620d:	74 0c                	je     3621b <memmove+0x3b>
   3620f:	89 d1                	mov    %edx,%ecx
   36211:	4e                   	dec    %esi
   36212:	4f                   	dec    %edi
   36213:	29 cb                	sub    %ecx,%ebx
   36215:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   36217:	89 d9                	mov    %ebx,%ecx
   36219:	46                   	inc    %esi
   3621a:	47                   	inc    %edi
   3621b:	c1 e9 02             	shr    $0x2,%ecx
   3621e:	83 ee 04             	sub    $0x4,%esi
   36221:	83 ef 04             	sub    $0x4,%edi
   36224:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
   36226:	83 c6 04             	add    $0x4,%esi
   36229:	83 c7 04             	add    $0x4,%edi
   3622c:	89 d9                	mov    %ebx,%ecx
   3622e:	83 e1 03             	and    $0x3,%ecx
   36231:	4e                   	dec    %esi
   36232:	4f                   	dec    %edi
   36233:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   36235:	eb 2a                	jmp    36261 <memmove+0x81>
   36237:	83 f9 08             	cmp    $0x8,%ecx
   3623a:	76 23                	jbe    3625f <memmove+0x7f>
   3623c:	89 fa                	mov    %edi,%edx
   3623e:	89 cb                	mov    %ecx,%ebx
   36240:	83 e2 03             	and    $0x3,%edx
   36243:	74 10                	je     36255 <memmove+0x75>
   36245:	b9 04 00 00 00       	mov    $0x4,%ecx
   3624a:	29 d1                	sub    %edx,%ecx
   3624c:	83 e1 03             	and    $0x3,%ecx
   3624f:	29 cb                	sub    %ecx,%ebx
   36251:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   36253:	89 d9                	mov    %ebx,%ecx
   36255:	c1 e9 02             	shr    $0x2,%ecx
   36258:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
   3625a:	89 d9                	mov    %ebx,%ecx
   3625c:	83 e1 03             	and    $0x3,%ecx
   3625f:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   36261:	8b 45 08             	mov    0x8(%ebp),%eax
   36264:	fc                   	cld    
   36265:	8d 65 f4             	lea    -0xc(%ebp),%esp
   36268:	5b                   	pop    %ebx
   36269:	5f                   	pop    %edi
   3626a:	5e                   	pop    %esi
   3626b:	c9                   	leave  
   3626c:	c3                   	ret    

0003626d <memset>:
   3626d:	55                   	push   %ebp
   3626e:	89 e5                	mov    %esp,%ebp
   36270:	57                   	push   %edi
   36271:	8b 7d 08             	mov    0x8(%ebp),%edi
   36274:	0f b6 45 0c          	movzbl 0xc(%ebp),%eax
   36278:	8b 4d 10             	mov    0x10(%ebp),%ecx
   3627b:	fc                   	cld    
   3627c:	83 f9 10             	cmp    $0x10,%ecx
   3627f:	76 69                	jbe    362ea <memset+0x7d>
   36281:	f7 c7 07 00 00 00    	test   $0x7,%edi
   36287:	74 4c                	je     362d5 <memset+0x68>
   36289:	88 07                	mov    %al,(%edi)
   3628b:	47                   	inc    %edi
   3628c:	49                   	dec    %ecx
   3628d:	f7 c7 07 00 00 00    	test   $0x7,%edi
   36293:	74 40                	je     362d5 <memset+0x68>
   36295:	88 07                	mov    %al,(%edi)
   36297:	47                   	inc    %edi
   36298:	49                   	dec    %ecx
   36299:	f7 c7 07 00 00 00    	test   $0x7,%edi
   3629f:	74 34                	je     362d5 <memset+0x68>
   362a1:	88 07                	mov    %al,(%edi)
   362a3:	47                   	inc    %edi
   362a4:	49                   	dec    %ecx
   362a5:	f7 c7 07 00 00 00    	test   $0x7,%edi
   362ab:	74 28                	je     362d5 <memset+0x68>
   362ad:	88 07                	mov    %al,(%edi)
   362af:	47                   	inc    %edi
   362b0:	49                   	dec    %ecx
   362b1:	f7 c7 07 00 00 00    	test   $0x7,%edi
   362b7:	74 1c                	je     362d5 <memset+0x68>
   362b9:	88 07                	mov    %al,(%edi)
   362bb:	47                   	inc    %edi
   362bc:	49                   	dec    %ecx
   362bd:	f7 c7 07 00 00 00    	test   $0x7,%edi
   362c3:	74 10                	je     362d5 <memset+0x68>
   362c5:	88 07                	mov    %al,(%edi)
   362c7:	47                   	inc    %edi
   362c8:	49                   	dec    %ecx
   362c9:	f7 c7 07 00 00 00    	test   $0x7,%edi
   362cf:	74 04                	je     362d5 <memset+0x68>
   362d1:	88 07                	mov    %al,(%edi)
   362d3:	47                   	inc    %edi
   362d4:	49                   	dec    %ecx
   362d5:	88 c4                	mov    %al,%ah
   362d7:	89 c2                	mov    %eax,%edx
   362d9:	c1 e2 10             	shl    $0x10,%edx
   362dc:	09 d0                	or     %edx,%eax
   362de:	89 ca                	mov    %ecx,%edx
   362e0:	c1 e9 02             	shr    $0x2,%ecx
   362e3:	83 e2 03             	and    $0x3,%edx
   362e6:	f3 ab                	rep stos %eax,%es:(%edi)
   362e8:	89 d1                	mov    %edx,%ecx
   362ea:	f3 aa                	rep stos %al,%es:(%edi)
   362ec:	8b 45 08             	mov    0x8(%ebp),%eax
   362ef:	8d 65 fc             	lea    -0x4(%ebp),%esp
   362f2:	5f                   	pop    %edi
   362f3:	c9                   	leave  
   362f4:	c3                   	ret    
   362f5:	66 90                	xchg   %ax,%ax
   362f7:	66 90                	xchg   %ax,%ax
   362f9:	66 90                	xchg   %ax,%ax
   362fb:	66 90                	xchg   %ax,%ax
   362fd:	66 90                	xchg   %ax,%ax
   362ff:	90                   	nop

00036300 <_realloc_r>:
   36300:	55                   	push   %ebp
   36301:	89 e5                	mov    %esp,%ebp
   36303:	57                   	push   %edi
   36304:	56                   	push   %esi
   36305:	53                   	push   %ebx
   36306:	83 ec 3c             	sub    $0x3c,%esp
   36309:	8b 45 08             	mov    0x8(%ebp),%eax
   3630c:	8b 7d 0c             	mov    0xc(%ebp),%edi
   3630f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   36312:	8b 45 10             	mov    0x10(%ebp),%eax
   36315:	85 ff                	test   %edi,%edi
   36317:	89 45 e0             	mov    %eax,-0x20(%ebp)
   3631a:	0f 84 50 02 00 00    	je     36570 <_realloc_r+0x270>
   36320:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   36323:	8d 77 f8             	lea    -0x8(%edi),%esi
   36326:	89 04 24             	mov    %eax,(%esp)
   36329:	e8 62 db ff ff       	call   33e90 <__malloc_lock>
   3632e:	8b 47 fc             	mov    -0x4(%edi),%eax
   36331:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   36334:	89 c3                	mov    %eax,%ebx
   36336:	8d 51 0b             	lea    0xb(%ecx),%edx
   36339:	83 e3 fc             	and    $0xfffffffc,%ebx
   3633c:	83 fa 16             	cmp    $0x16,%edx
   3633f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   36342:	0f 87 00 01 00 00    	ja     36448 <_realloc_r+0x148>
   36348:	31 d2                	xor    %edx,%edx
   3634a:	c7 45 d8 10 00 00 00 	movl   $0x10,-0x28(%ebp)
   36351:	c7 45 dc 10 00 00 00 	movl   $0x10,-0x24(%ebp)
   36358:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   3635b:	39 4d dc             	cmp    %ecx,-0x24(%ebp)
   3635e:	0f 82 1c 02 00 00    	jb     36580 <_realloc_r+0x280>
   36364:	84 d2                	test   %dl,%dl
   36366:	0f 85 14 02 00 00    	jne    36580 <_realloc_r+0x280>
   3636c:	3b 5d d8             	cmp    -0x28(%ebp),%ebx
   3636f:	0f 8d eb 00 00 00    	jge    36460 <_realloc_r+0x160>
   36375:	8b 0d 28 95 03 00    	mov    0x39528,%ecx
   3637b:	8d 14 1e             	lea    (%esi,%ebx,1),%edx
   3637e:	39 d1                	cmp    %edx,%ecx
   36380:	89 4d cc             	mov    %ecx,-0x34(%ebp)
   36383:	0f 84 6f 02 00 00    	je     365f8 <_realloc_r+0x2f8>
   36389:	8b 4a 04             	mov    0x4(%edx),%ecx
   3638c:	89 c8                	mov    %ecx,%eax
   3638e:	83 e0 fe             	and    $0xfffffffe,%eax
   36391:	f6 44 02 04 01       	testb  $0x1,0x4(%edx,%eax,1)
   36396:	0f 84 f4 00 00 00    	je     36490 <_realloc_r+0x190>
   3639c:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
   363a3:	31 d2                	xor    %edx,%edx
   363a5:	f6 45 d4 01          	testb  $0x1,-0x2c(%ebp)
   363a9:	0f 85 39 01 00 00    	jne    364e8 <_realloc_r+0x1e8>
   363af:	89 f1                	mov    %esi,%ecx
   363b1:	2b 4f f8             	sub    -0x8(%edi),%ecx
   363b4:	8b 41 04             	mov    0x4(%ecx),%eax
   363b7:	83 e0 fc             	and    $0xfffffffc,%eax
   363ba:	85 d2                	test   %edx,%edx
   363bc:	0f 84 f6 02 00 00    	je     366b8 <_realloc_r+0x3b8>
   363c2:	3b 55 cc             	cmp    -0x34(%ebp),%edx
   363c5:	0f 84 f5 02 00 00    	je     366c0 <_realloc_r+0x3c0>
   363cb:	89 55 d4             	mov    %edx,-0x2c(%ebp)
   363ce:	8b 55 d0             	mov    -0x30(%ebp),%edx
   363d1:	01 d8                	add    %ebx,%eax
   363d3:	01 c2                	add    %eax,%edx
   363d5:	3b 55 d8             	cmp    -0x28(%ebp),%edx
   363d8:	89 55 d0             	mov    %edx,-0x30(%ebp)
   363db:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   363de:	0f 8c ac 01 00 00    	jl     36590 <_realloc_r+0x290>
   363e4:	8b 42 0c             	mov    0xc(%edx),%eax
   363e7:	83 eb 04             	sub    $0x4,%ebx
   363ea:	8b 52 08             	mov    0x8(%edx),%edx
   363ed:	83 fb 24             	cmp    $0x24,%ebx
   363f0:	8d 71 08             	lea    0x8(%ecx),%esi
   363f3:	89 42 0c             	mov    %eax,0xc(%edx)
   363f6:	89 50 08             	mov    %edx,0x8(%eax)
   363f9:	8b 41 0c             	mov    0xc(%ecx),%eax
   363fc:	8b 51 08             	mov    0x8(%ecx),%edx
   363ff:	89 42 0c             	mov    %eax,0xc(%edx)
   36402:	89 50 08             	mov    %edx,0x8(%eax)
   36405:	0f 87 85 03 00 00    	ja     36790 <_realloc_r+0x490>
   3640b:	83 fb 13             	cmp    $0x13,%ebx
   3640e:	89 f0                	mov    %esi,%eax
   36410:	76 1a                	jbe    3642c <_realloc_r+0x12c>
   36412:	8b 07                	mov    (%edi),%eax
   36414:	83 fb 1b             	cmp    $0x1b,%ebx
   36417:	89 41 08             	mov    %eax,0x8(%ecx)
   3641a:	8b 47 04             	mov    0x4(%edi),%eax
   3641d:	89 41 0c             	mov    %eax,0xc(%ecx)
   36420:	0f 87 8f 03 00 00    	ja     367b5 <_realloc_r+0x4b5>
   36426:	8d 41 10             	lea    0x10(%ecx),%eax
   36429:	83 c7 08             	add    $0x8,%edi
   3642c:	8b 17                	mov    (%edi),%edx
   3642e:	8b 5d d0             	mov    -0x30(%ebp),%ebx
   36431:	89 10                	mov    %edx,(%eax)
   36433:	8b 57 04             	mov    0x4(%edi),%edx
   36436:	89 50 04             	mov    %edx,0x4(%eax)
   36439:	8b 57 08             	mov    0x8(%edi),%edx
   3643c:	89 f7                	mov    %esi,%edi
   3643e:	89 ce                	mov    %ecx,%esi
   36440:	89 50 08             	mov    %edx,0x8(%eax)
   36443:	8b 41 04             	mov    0x4(%ecx),%eax
   36446:	eb 1b                	jmp    36463 <_realloc_r+0x163>
   36448:	83 e2 f8             	and    $0xfffffff8,%edx
   3644b:	89 55 dc             	mov    %edx,-0x24(%ebp)
   3644e:	89 55 d8             	mov    %edx,-0x28(%ebp)
   36451:	c1 ea 1f             	shr    $0x1f,%edx
   36454:	e9 ff fe ff ff       	jmp    36358 <_realloc_r+0x58>
   36459:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   36460:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   36463:	89 da                	mov    %ebx,%edx
   36465:	2b 55 dc             	sub    -0x24(%ebp),%edx
   36468:	83 fa 0f             	cmp    $0xf,%edx
   3646b:	77 4b                	ja     364b8 <_realloc_r+0x1b8>
   3646d:	83 e0 01             	and    $0x1,%eax
   36470:	09 d8                	or     %ebx,%eax
   36472:	89 46 04             	mov    %eax,0x4(%esi)
   36475:	83 4c 1e 04 01       	orl    $0x1,0x4(%esi,%ebx,1)
   3647a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   3647d:	89 04 24             	mov    %eax,(%esp)
   36480:	e8 1b da ff ff       	call   33ea0 <__malloc_unlock>
   36485:	89 f8                	mov    %edi,%eax
   36487:	83 c4 3c             	add    $0x3c,%esp
   3648a:	5b                   	pop    %ebx
   3648b:	5e                   	pop    %esi
   3648c:	5f                   	pop    %edi
   3648d:	5d                   	pop    %ebp
   3648e:	c3                   	ret    
   3648f:	90                   	nop
   36490:	83 e1 fc             	and    $0xfffffffc,%ecx
   36493:	89 4d d0             	mov    %ecx,-0x30(%ebp)
   36496:	01 d9                	add    %ebx,%ecx
   36498:	3b 4d d8             	cmp    -0x28(%ebp),%ecx
   3649b:	0f 8c 04 ff ff ff    	jl     363a5 <_realloc_r+0xa5>
   364a1:	8b 5a 0c             	mov    0xc(%edx),%ebx
   364a4:	8b 52 08             	mov    0x8(%edx),%edx
   364a7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   364aa:	89 5a 0c             	mov    %ebx,0xc(%edx)
   364ad:	89 53 08             	mov    %edx,0x8(%ebx)
   364b0:	89 cb                	mov    %ecx,%ebx
   364b2:	eb af                	jmp    36463 <_realloc_r+0x163>
   364b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   364b8:	8b 5d dc             	mov    -0x24(%ebp),%ebx
   364bb:	83 e0 01             	and    $0x1,%eax
   364be:	09 d8                	or     %ebx,%eax
   364c0:	89 46 04             	mov    %eax,0x4(%esi)
   364c3:	89 d0                	mov    %edx,%eax
   364c5:	8d 0c 1e             	lea    (%esi,%ebx,1),%ecx
   364c8:	83 c8 01             	or     $0x1,%eax
   364cb:	89 41 04             	mov    %eax,0x4(%ecx)
   364ce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   364d1:	83 4c 11 04 01       	orl    $0x1,0x4(%ecx,%edx,1)
   364d6:	83 c1 08             	add    $0x8,%ecx
   364d9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
   364dd:	89 04 24             	mov    %eax,(%esp)
   364e0:	e8 9b fa ff ff       	call   35f80 <_free_r>
   364e5:	eb 93                	jmp    3647a <_realloc_r+0x17a>
   364e7:	90                   	nop
   364e8:	8b 45 e0             	mov    -0x20(%ebp),%eax
   364eb:	89 44 24 04          	mov    %eax,0x4(%esp)
   364ef:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   364f2:	89 04 24             	mov    %eax,(%esp)
   364f5:	e8 76 d1 ff ff       	call   33670 <_malloc_r>
   364fa:	85 c0                	test   %eax,%eax
   364fc:	89 c1                	mov    %eax,%ecx
   364fe:	0f 84 65 03 00 00    	je     36869 <_realloc_r+0x569>
   36504:	8b 47 fc             	mov    -0x4(%edi),%eax
   36507:	8d 51 f8             	lea    -0x8(%ecx),%edx
   3650a:	89 55 e0             	mov    %edx,-0x20(%ebp)
   3650d:	89 c2                	mov    %eax,%edx
   3650f:	83 e2 fe             	and    $0xfffffffe,%edx
   36512:	01 f2                	add    %esi,%edx
   36514:	39 55 e0             	cmp    %edx,-0x20(%ebp)
   36517:	0f 84 63 02 00 00    	je     36780 <_realloc_r+0x480>
   3651d:	83 eb 04             	sub    $0x4,%ebx
   36520:	83 fb 24             	cmp    $0x24,%ebx
   36523:	0f 87 6f 01 00 00    	ja     36698 <_realloc_r+0x398>
   36529:	83 fb 13             	cmp    $0x13,%ebx
   3652c:	0f 87 ee 00 00 00    	ja     36620 <_realloc_r+0x320>
   36532:	89 c8                	mov    %ecx,%eax
   36534:	89 fa                	mov    %edi,%edx
   36536:	8b 1a                	mov    (%edx),%ebx
   36538:	89 18                	mov    %ebx,(%eax)
   3653a:	8b 5a 04             	mov    0x4(%edx),%ebx
   3653d:	89 58 04             	mov    %ebx,0x4(%eax)
   36540:	8b 52 08             	mov    0x8(%edx),%edx
   36543:	89 50 08             	mov    %edx,0x8(%eax)
   36546:	8b 75 e4             	mov    -0x1c(%ebp),%esi
   36549:	89 7c 24 04          	mov    %edi,0x4(%esp)
   3654d:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   36550:	89 34 24             	mov    %esi,(%esp)
   36553:	e8 28 fa ff ff       	call   35f80 <_free_r>
   36558:	89 34 24             	mov    %esi,(%esp)
   3655b:	e8 40 d9 ff ff       	call   33ea0 <__malloc_unlock>
   36560:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   36563:	83 c4 3c             	add    $0x3c,%esp
   36566:	5b                   	pop    %ebx
   36567:	5e                   	pop    %esi
   36568:	5f                   	pop    %edi
   36569:	89 c8                	mov    %ecx,%eax
   3656b:	5d                   	pop    %ebp
   3656c:	c3                   	ret    
   3656d:	8d 76 00             	lea    0x0(%esi),%esi
   36570:	89 45 0c             	mov    %eax,0xc(%ebp)
   36573:	83 c4 3c             	add    $0x3c,%esp
   36576:	5b                   	pop    %ebx
   36577:	5e                   	pop    %esi
   36578:	5f                   	pop    %edi
   36579:	5d                   	pop    %ebp
   3657a:	e9 f1 d0 ff ff       	jmp    33670 <_malloc_r>
   3657f:	90                   	nop
   36580:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   36583:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
   36589:	31 c0                	xor    %eax,%eax
   3658b:	e9 f7 fe ff ff       	jmp    36487 <_realloc_r+0x187>
   36590:	89 c2                	mov    %eax,%edx
   36592:	3b 55 d8             	cmp    -0x28(%ebp),%edx
   36595:	0f 8c 4d ff ff ff    	jl     364e8 <_realloc_r+0x1e8>
   3659b:	8b 71 08             	mov    0x8(%ecx),%esi
   3659e:	83 eb 04             	sub    $0x4,%ebx
   365a1:	8b 41 0c             	mov    0xc(%ecx),%eax
   365a4:	83 fb 24             	cmp    $0x24,%ebx
   365a7:	89 46 0c             	mov    %eax,0xc(%esi)
   365aa:	89 70 08             	mov    %esi,0x8(%eax)
   365ad:	8d 71 08             	lea    0x8(%ecx),%esi
   365b0:	0f 87 88 00 00 00    	ja     3663e <_realloc_r+0x33e>
   365b6:	83 fb 13             	cmp    $0x13,%ebx
   365b9:	89 f0                	mov    %esi,%eax
   365bb:	76 1a                	jbe    365d7 <_realloc_r+0x2d7>
   365bd:	8b 07                	mov    (%edi),%eax
   365bf:	83 fb 1b             	cmp    $0x1b,%ebx
   365c2:	89 41 08             	mov    %eax,0x8(%ecx)
   365c5:	8b 47 04             	mov    0x4(%edi),%eax
   365c8:	89 41 0c             	mov    %eax,0xc(%ecx)
   365cb:	0f 87 17 02 00 00    	ja     367e8 <_realloc_r+0x4e8>
   365d1:	8d 41 10             	lea    0x10(%ecx),%eax
   365d4:	83 c7 08             	add    $0x8,%edi
   365d7:	8b 1f                	mov    (%edi),%ebx
   365d9:	89 18                	mov    %ebx,(%eax)
   365db:	8b 5f 04             	mov    0x4(%edi),%ebx
   365de:	89 58 04             	mov    %ebx,0x4(%eax)
   365e1:	8b 5f 08             	mov    0x8(%edi),%ebx
   365e4:	89 f7                	mov    %esi,%edi
   365e6:	89 ce                	mov    %ecx,%esi
   365e8:	89 58 08             	mov    %ebx,0x8(%eax)
   365eb:	89 d3                	mov    %edx,%ebx
   365ed:	8b 41 04             	mov    0x4(%ecx),%eax
   365f0:	e9 6e fe ff ff       	jmp    36463 <_realloc_r+0x163>
   365f5:	8d 76 00             	lea    0x0(%esi),%esi
   365f8:	8b 45 cc             	mov    -0x34(%ebp),%eax
   365fb:	8b 55 dc             	mov    -0x24(%ebp),%edx
   365fe:	8b 48 04             	mov    0x4(%eax),%ecx
   36601:	83 c2 10             	add    $0x10,%edx
   36604:	89 4d d0             	mov    %ecx,-0x30(%ebp)
   36607:	83 65 d0 fc          	andl   $0xfffffffc,-0x30(%ebp)
   3660b:	8b 4d d0             	mov    -0x30(%ebp),%ecx
   3660e:	01 d9                	add    %ebx,%ecx
   36610:	39 d1                	cmp    %edx,%ecx
   36612:	7d 54                	jge    36668 <_realloc_r+0x368>
   36614:	89 c2                	mov    %eax,%edx
   36616:	e9 8a fd ff ff       	jmp    363a5 <_realloc_r+0xa5>
   3661b:	90                   	nop
   3661c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36620:	8b 07                	mov    (%edi),%eax
   36622:	83 fb 1b             	cmp    $0x1b,%ebx
   36625:	89 01                	mov    %eax,(%ecx)
   36627:	8b 47 04             	mov    0x4(%edi),%eax
   3662a:	89 41 04             	mov    %eax,0x4(%ecx)
   3662d:	0f 87 2d 01 00 00    	ja     36760 <_realloc_r+0x460>
   36633:	8d 41 08             	lea    0x8(%ecx),%eax
   36636:	8d 57 08             	lea    0x8(%edi),%edx
   36639:	e9 f8 fe ff ff       	jmp    36536 <_realloc_r+0x236>
   3663e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   36642:	89 7c 24 04          	mov    %edi,0x4(%esp)
   36646:	89 f7                	mov    %esi,%edi
   36648:	89 34 24             	mov    %esi,(%esp)
   3664b:	89 55 d8             	mov    %edx,-0x28(%ebp)
   3664e:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   36651:	e8 8a fb ff ff       	call   361e0 <memmove>
   36656:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   36659:	8b 55 d8             	mov    -0x28(%ebp),%edx
   3665c:	8b 41 04             	mov    0x4(%ecx),%eax
   3665f:	89 ce                	mov    %ecx,%esi
   36661:	89 d3                	mov    %edx,%ebx
   36663:	e9 fb fd ff ff       	jmp    36463 <_realloc_r+0x163>
   36668:	8b 5d dc             	mov    -0x24(%ebp),%ebx
   3666b:	29 d9                	sub    %ebx,%ecx
   3666d:	01 de                	add    %ebx,%esi
   3666f:	83 c9 01             	or     $0x1,%ecx
   36672:	89 35 28 95 03 00    	mov    %esi,0x39528
   36678:	89 4e 04             	mov    %ecx,0x4(%esi)
   3667b:	8b 47 fc             	mov    -0x4(%edi),%eax
   3667e:	83 e0 01             	and    $0x1,%eax
   36681:	09 d8                	or     %ebx,%eax
   36683:	89 47 fc             	mov    %eax,-0x4(%edi)
   36686:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   36689:	89 04 24             	mov    %eax,(%esp)
   3668c:	e8 0f d8 ff ff       	call   33ea0 <__malloc_unlock>
   36691:	89 f8                	mov    %edi,%eax
   36693:	e9 ef fd ff ff       	jmp    36487 <_realloc_r+0x187>
   36698:	89 0c 24             	mov    %ecx,(%esp)
   3669b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   3669f:	89 7c 24 04          	mov    %edi,0x4(%esp)
   366a3:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   366a6:	e8 35 fb ff ff       	call   361e0 <memmove>
   366ab:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   366ae:	e9 93 fe ff ff       	jmp    36546 <_realloc_r+0x246>
   366b3:	90                   	nop
   366b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   366b8:	8d 14 18             	lea    (%eax,%ebx,1),%edx
   366bb:	e9 d2 fe ff ff       	jmp    36592 <_realloc_r+0x292>
   366c0:	8d 14 18             	lea    (%eax,%ebx,1),%edx
   366c3:	8b 45 d0             	mov    -0x30(%ebp),%eax
   366c6:	01 d0                	add    %edx,%eax
   366c8:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   366cb:	8b 45 dc             	mov    -0x24(%ebp),%eax
   366ce:	83 c0 10             	add    $0x10,%eax
   366d1:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
   366d4:	0f 8c b8 fe ff ff    	jl     36592 <_realloc_r+0x292>
   366da:	8b 41 0c             	mov    0xc(%ecx),%eax
   366dd:	83 eb 04             	sub    $0x4,%ebx
   366e0:	8b 51 08             	mov    0x8(%ecx),%edx
   366e3:	83 fb 24             	cmp    $0x24,%ebx
   366e6:	8d 71 08             	lea    0x8(%ecx),%esi
   366e9:	89 42 0c             	mov    %eax,0xc(%edx)
   366ec:	89 50 08             	mov    %edx,0x8(%eax)
   366ef:	0f 87 3d 01 00 00    	ja     36832 <_realloc_r+0x532>
   366f5:	83 fb 13             	cmp    $0x13,%ebx
   366f8:	89 f0                	mov    %esi,%eax
   366fa:	76 1a                	jbe    36716 <_realloc_r+0x416>
   366fc:	8b 07                	mov    (%edi),%eax
   366fe:	83 fb 1b             	cmp    $0x1b,%ebx
   36701:	89 41 08             	mov    %eax,0x8(%ecx)
   36704:	8b 47 04             	mov    0x4(%edi),%eax
   36707:	89 41 0c             	mov    %eax,0xc(%ecx)
   3670a:	0f 87 3d 01 00 00    	ja     3684d <_realloc_r+0x54d>
   36710:	8d 41 10             	lea    0x10(%ecx),%eax
   36713:	83 c7 08             	add    $0x8,%edi
   36716:	8b 17                	mov    (%edi),%edx
   36718:	89 10                	mov    %edx,(%eax)
   3671a:	8b 57 04             	mov    0x4(%edi),%edx
   3671d:	89 50 04             	mov    %edx,0x4(%eax)
   36720:	8b 57 08             	mov    0x8(%edi),%edx
   36723:	89 50 08             	mov    %edx,0x8(%eax)
   36726:	8b 5d dc             	mov    -0x24(%ebp),%ebx
   36729:	8b 7d d4             	mov    -0x2c(%ebp),%edi
   3672c:	89 d8                	mov    %ebx,%eax
   3672e:	29 df                	sub    %ebx,%edi
   36730:	01 c8                	add    %ecx,%eax
   36732:	83 cf 01             	or     $0x1,%edi
   36735:	a3 28 95 03 00       	mov    %eax,0x39528
   3673a:	89 78 04             	mov    %edi,0x4(%eax)
   3673d:	8b 41 04             	mov    0x4(%ecx),%eax
   36740:	83 e0 01             	and    $0x1,%eax
   36743:	09 d8                	or     %ebx,%eax
   36745:	89 41 04             	mov    %eax,0x4(%ecx)
   36748:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   3674b:	89 04 24             	mov    %eax,(%esp)
   3674e:	e8 4d d7 ff ff       	call   33ea0 <__malloc_unlock>
   36753:	89 f0                	mov    %esi,%eax
   36755:	e9 2d fd ff ff       	jmp    36487 <_realloc_r+0x187>
   3675a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36760:	8b 47 08             	mov    0x8(%edi),%eax
   36763:	83 fb 24             	cmp    $0x24,%ebx
   36766:	89 41 08             	mov    %eax,0x8(%ecx)
   36769:	8b 47 0c             	mov    0xc(%edi),%eax
   3676c:	89 41 0c             	mov    %eax,0xc(%ecx)
   3676f:	74 60                	je     367d1 <_realloc_r+0x4d1>
   36771:	8d 41 10             	lea    0x10(%ecx),%eax
   36774:	8d 57 10             	lea    0x10(%edi),%edx
   36777:	e9 ba fd ff ff       	jmp    36536 <_realloc_r+0x236>
   3677c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36780:	8b 51 fc             	mov    -0x4(%ecx),%edx
   36783:	83 e2 fc             	and    $0xfffffffc,%edx
   36786:	01 d3                	add    %edx,%ebx
   36788:	e9 d6 fc ff ff       	jmp    36463 <_realloc_r+0x163>
   3678d:	8d 76 00             	lea    0x0(%esi),%esi
   36790:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   36794:	89 7c 24 04          	mov    %edi,0x4(%esp)
   36798:	89 f7                	mov    %esi,%edi
   3679a:	89 34 24             	mov    %esi,(%esp)
   3679d:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   367a0:	e8 3b fa ff ff       	call   361e0 <memmove>
   367a5:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   367a8:	8b 5d d0             	mov    -0x30(%ebp),%ebx
   367ab:	8b 41 04             	mov    0x4(%ecx),%eax
   367ae:	89 ce                	mov    %ecx,%esi
   367b0:	e9 ae fc ff ff       	jmp    36463 <_realloc_r+0x163>
   367b5:	8b 47 08             	mov    0x8(%edi),%eax
   367b8:	83 fb 24             	cmp    $0x24,%ebx
   367bb:	89 41 10             	mov    %eax,0x10(%ecx)
   367be:	8b 47 0c             	mov    0xc(%edi),%eax
   367c1:	89 41 14             	mov    %eax,0x14(%ecx)
   367c4:	74 3e                	je     36804 <_realloc_r+0x504>
   367c6:	8d 41 18             	lea    0x18(%ecx),%eax
   367c9:	83 c7 10             	add    $0x10,%edi
   367cc:	e9 5b fc ff ff       	jmp    3642c <_realloc_r+0x12c>
   367d1:	8b 47 10             	mov    0x10(%edi),%eax
   367d4:	8d 57 18             	lea    0x18(%edi),%edx
   367d7:	89 41 10             	mov    %eax,0x10(%ecx)
   367da:	8b 5f 14             	mov    0x14(%edi),%ebx
   367dd:	8d 41 18             	lea    0x18(%ecx),%eax
   367e0:	89 59 14             	mov    %ebx,0x14(%ecx)
   367e3:	e9 4e fd ff ff       	jmp    36536 <_realloc_r+0x236>
   367e8:	8b 47 08             	mov    0x8(%edi),%eax
   367eb:	83 fb 24             	cmp    $0x24,%ebx
   367ee:	89 41 10             	mov    %eax,0x10(%ecx)
   367f1:	8b 47 0c             	mov    0xc(%edi),%eax
   367f4:	89 41 14             	mov    %eax,0x14(%ecx)
   367f7:	74 22                	je     3681b <_realloc_r+0x51b>
   367f9:	8d 41 18             	lea    0x18(%ecx),%eax
   367fc:	83 c7 10             	add    $0x10,%edi
   367ff:	e9 d3 fd ff ff       	jmp    365d7 <_realloc_r+0x2d7>
   36804:	8b 47 10             	mov    0x10(%edi),%eax
   36807:	83 c7 18             	add    $0x18,%edi
   3680a:	89 41 18             	mov    %eax,0x18(%ecx)
   3680d:	8b 57 fc             	mov    -0x4(%edi),%edx
   36810:	8d 41 20             	lea    0x20(%ecx),%eax
   36813:	89 51 1c             	mov    %edx,0x1c(%ecx)
   36816:	e9 11 fc ff ff       	jmp    3642c <_realloc_r+0x12c>
   3681b:	8b 47 10             	mov    0x10(%edi),%eax
   3681e:	83 c7 18             	add    $0x18,%edi
   36821:	89 41 18             	mov    %eax,0x18(%ecx)
   36824:	8b 5f fc             	mov    -0x4(%edi),%ebx
   36827:	8d 41 20             	lea    0x20(%ecx),%eax
   3682a:	89 59 1c             	mov    %ebx,0x1c(%ecx)
   3682d:	e9 a5 fd ff ff       	jmp    365d7 <_realloc_r+0x2d7>
   36832:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   36836:	89 7c 24 04          	mov    %edi,0x4(%esp)
   3683a:	89 34 24             	mov    %esi,(%esp)
   3683d:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   36840:	e8 9b f9 ff ff       	call   361e0 <memmove>
   36845:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   36848:	e9 d9 fe ff ff       	jmp    36726 <_realloc_r+0x426>
   3684d:	8b 47 08             	mov    0x8(%edi),%eax
   36850:	83 fb 24             	cmp    $0x24,%ebx
   36853:	89 41 10             	mov    %eax,0x10(%ecx)
   36856:	8b 47 0c             	mov    0xc(%edi),%eax
   36859:	89 41 14             	mov    %eax,0x14(%ecx)
   3685c:	74 1d                	je     3687b <_realloc_r+0x57b>
   3685e:	8d 41 18             	lea    0x18(%ecx),%eax
   36861:	83 c7 10             	add    $0x10,%edi
   36864:	e9 ad fe ff ff       	jmp    36716 <_realloc_r+0x416>
   36869:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   3686c:	89 04 24             	mov    %eax,(%esp)
   3686f:	e8 2c d6 ff ff       	call   33ea0 <__malloc_unlock>
   36874:	31 c0                	xor    %eax,%eax
   36876:	e9 0c fc ff ff       	jmp    36487 <_realloc_r+0x187>
   3687b:	8b 47 10             	mov    0x10(%edi),%eax
   3687e:	83 c7 18             	add    $0x18,%edi
   36881:	89 41 18             	mov    %eax,0x18(%ecx)
   36884:	8b 57 fc             	mov    -0x4(%edi),%edx
   36887:	8d 41 20             	lea    0x20(%ecx),%eax
   3688a:	89 51 1c             	mov    %edx,0x1c(%ecx)
   3688d:	e9 84 fe ff ff       	jmp    36716 <_realloc_r+0x416>
   36892:	66 90                	xchg   %ax,%ax
   36894:	66 90                	xchg   %ax,%ax
   36896:	66 90                	xchg   %ax,%ax
   36898:	66 90                	xchg   %ax,%ax
   3689a:	66 90                	xchg   %ax,%ax
   3689c:	66 90                	xchg   %ax,%ax
   3689e:	66 90                	xchg   %ax,%ax

000368a0 <cleanup_glue>:
   368a0:	55                   	push   %ebp
   368a1:	89 e5                	mov    %esp,%ebp
   368a3:	56                   	push   %esi
   368a4:	53                   	push   %ebx
   368a5:	83 ec 10             	sub    $0x10,%esp
   368a8:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   368ab:	8b 75 08             	mov    0x8(%ebp),%esi
   368ae:	8b 03                	mov    (%ebx),%eax
   368b0:	85 c0                	test   %eax,%eax
   368b2:	74 0c                	je     368c0 <cleanup_glue+0x20>
   368b4:	89 44 24 04          	mov    %eax,0x4(%esp)
   368b8:	89 34 24             	mov    %esi,(%esp)
   368bb:	e8 e0 ff ff ff       	call   368a0 <cleanup_glue>
   368c0:	89 5d 0c             	mov    %ebx,0xc(%ebp)
   368c3:	89 75 08             	mov    %esi,0x8(%ebp)
   368c6:	83 c4 10             	add    $0x10,%esp
   368c9:	5b                   	pop    %ebx
   368ca:	5e                   	pop    %esi
   368cb:	5d                   	pop    %ebp
   368cc:	e9 af f6 ff ff       	jmp    35f80 <_free_r>
   368d1:	eb 0d                	jmp    368e0 <_reclaim_reent>
   368d3:	90                   	nop
   368d4:	90                   	nop
   368d5:	90                   	nop
   368d6:	90                   	nop
   368d7:	90                   	nop
   368d8:	90                   	nop
   368d9:	90                   	nop
   368da:	90                   	nop
   368db:	90                   	nop
   368dc:	90                   	nop
   368dd:	90                   	nop
   368de:	90                   	nop
   368df:	90                   	nop

000368e0 <_reclaim_reent>:
   368e0:	55                   	push   %ebp
   368e1:	89 e5                	mov    %esp,%ebp
   368e3:	57                   	push   %edi
   368e4:	56                   	push   %esi
   368e5:	53                   	push   %ebx
   368e6:	83 ec 1c             	sub    $0x1c,%esp
   368e9:	8b 5d 08             	mov    0x8(%ebp),%ebx
   368ec:	3b 1d 20 90 03 00    	cmp    0x39020,%ebx
   368f2:	0f 84 a6 00 00 00    	je     3699e <_reclaim_reent+0xbe>
   368f8:	8b 53 4c             	mov    0x4c(%ebx),%edx
   368fb:	85 d2                	test   %edx,%edx
   368fd:	74 46                	je     36945 <_reclaim_reent+0x65>
   368ff:	31 c0                	xor    %eax,%eax
   36901:	31 f6                	xor    %esi,%esi
   36903:	90                   	nop
   36904:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36908:	8b 04 82             	mov    (%edx,%eax,4),%eax
   3690b:	85 c0                	test   %eax,%eax
   3690d:	75 0b                	jne    3691a <_reclaim_reent+0x3a>
   3690f:	eb 1e                	jmp    3692f <_reclaim_reent+0x4f>
   36911:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   36918:	89 f8                	mov    %edi,%eax
   3691a:	8b 38                	mov    (%eax),%edi
   3691c:	89 44 24 04          	mov    %eax,0x4(%esp)
   36920:	89 1c 24             	mov    %ebx,(%esp)
   36923:	e8 58 f6 ff ff       	call   35f80 <_free_r>
   36928:	85 ff                	test   %edi,%edi
   3692a:	75 ec                	jne    36918 <_reclaim_reent+0x38>
   3692c:	8b 53 4c             	mov    0x4c(%ebx),%edx
   3692f:	83 c6 01             	add    $0x1,%esi
   36932:	83 fe 20             	cmp    $0x20,%esi
   36935:	89 f0                	mov    %esi,%eax
   36937:	75 cf                	jne    36908 <_reclaim_reent+0x28>
   36939:	89 54 24 04          	mov    %edx,0x4(%esp)
   3693d:	89 1c 24             	mov    %ebx,(%esp)
   36940:	e8 3b f6 ff ff       	call   35f80 <_free_r>
   36945:	8b 43 40             	mov    0x40(%ebx),%eax
   36948:	85 c0                	test   %eax,%eax
   3694a:	74 0c                	je     36958 <_reclaim_reent+0x78>
   3694c:	89 44 24 04          	mov    %eax,0x4(%esp)
   36950:	89 1c 24             	mov    %ebx,(%esp)
   36953:	e8 28 f6 ff ff       	call   35f80 <_free_r>
   36958:	8b 83 48 01 00 00    	mov    0x148(%ebx),%eax
   3695e:	85 c0                	test   %eax,%eax
   36960:	74 22                	je     36984 <_reclaim_reent+0xa4>
   36962:	8d b3 4c 01 00 00    	lea    0x14c(%ebx),%esi
   36968:	39 f0                	cmp    %esi,%eax
   3696a:	75 06                	jne    36972 <_reclaim_reent+0x92>
   3696c:	eb 16                	jmp    36984 <_reclaim_reent+0xa4>
   3696e:	66 90                	xchg   %ax,%ax
   36970:	89 f8                	mov    %edi,%eax
   36972:	8b 38                	mov    (%eax),%edi
   36974:	89 44 24 04          	mov    %eax,0x4(%esp)
   36978:	89 1c 24             	mov    %ebx,(%esp)
   3697b:	e8 00 f6 ff ff       	call   35f80 <_free_r>
   36980:	39 fe                	cmp    %edi,%esi
   36982:	75 ec                	jne    36970 <_reclaim_reent+0x90>
   36984:	8b 43 54             	mov    0x54(%ebx),%eax
   36987:	85 c0                	test   %eax,%eax
   36989:	74 0c                	je     36997 <_reclaim_reent+0xb7>
   3698b:	89 44 24 04          	mov    %eax,0x4(%esp)
   3698f:	89 1c 24             	mov    %ebx,(%esp)
   36992:	e8 e9 f5 ff ff       	call   35f80 <_free_r>
   36997:	8b 43 38             	mov    0x38(%ebx),%eax
   3699a:	85 c0                	test   %eax,%eax
   3699c:	75 08                	jne    369a6 <_reclaim_reent+0xc6>
   3699e:	83 c4 1c             	add    $0x1c,%esp
   369a1:	5b                   	pop    %ebx
   369a2:	5e                   	pop    %esi
   369a3:	5f                   	pop    %edi
   369a4:	5d                   	pop    %ebp
   369a5:	c3                   	ret    
   369a6:	89 1c 24             	mov    %ebx,(%esp)
   369a9:	ff 53 3c             	call   *0x3c(%ebx)
   369ac:	8b 83 e0 02 00 00    	mov    0x2e0(%ebx),%eax
   369b2:	85 c0                	test   %eax,%eax
   369b4:	74 e8                	je     3699e <_reclaim_reent+0xbe>
   369b6:	89 1c 24             	mov    %ebx,(%esp)
   369b9:	89 44 24 04          	mov    %eax,0x4(%esp)
   369bd:	e8 de fe ff ff       	call   368a0 <cleanup_glue>
   369c2:	83 c4 1c             	add    $0x1c,%esp
   369c5:	5b                   	pop    %ebx
   369c6:	5e                   	pop    %esi
   369c7:	5f                   	pop    %edi
   369c8:	5d                   	pop    %ebp
   369c9:	c3                   	ret    
