
/workspace/Minecraft-for-MS-DOS/BetaPlusPlus.exe:     file format pei-i386


Disassembly of section .text:

0048e49e <.text+0x8d49e>:
  48e49e:	55                   	push   %ebp
  48e49f:	89 e5                	mov    %esp,%ebp
  48e4a1:	53                   	push   %ebx
  48e4a2:	89 cb                	mov    %ecx,%ebx
  48e4a4:	83 ec 14             	sub    $0x14,%esp
  48e4a7:	8b 45 08             	mov    0x8(%ebp),%eax
  48e4aa:	8b 55 0c             	mov    0xc(%ebp),%edx
  48e4ad:	8b 49 04             	mov    0x4(%ecx),%ecx
  48e4b0:	8b 5b 08             	mov    0x8(%ebx),%ebx
  48e4b3:	83 f8 23             	cmp    $0x23,%eax
  48e4b6:	7e 05                	jle    0x48e4bd
  48e4b8:	83 e8 24             	sub    $0x24,%eax
  48e4bb:	89 d9                	mov    %ebx,%ecx
  48e4bd:	8d 1c 81             	lea    (%ecx,%eax,4),%ebx
  48e4c0:	8b 03                	mov    (%ebx),%eax
  48e4c2:	85 c0                	test   %eax,%eax
  48e4c4:	74 1a                	je     0x48e4e0
  48e4c6:	39 10                	cmp    %edx,(%eax)
  48e4c8:	7e 12                	jle    0x48e4dc
  48e4ca:	89 14 24             	mov    %edx,(%esp)
  48e4cd:	89 c1                	mov    %eax,%ecx
  48e4cf:	e8 9a 9e 00 00       	call   0x49836e
  48e4d4:	51                   	push   %ecx
  48e4d5:	8b 13                	mov    (%ebx),%edx
  48e4d7:	83 3a 00             	cmpl   $0x0,(%edx)
  48e4da:	75 04                	jne    0x48e4e0
  48e4dc:	31 d2                	xor    %edx,%edx
  48e4de:	89 13                	mov    %edx,(%ebx)
  48e4e0:	8b 5d fc             	mov    -0x4(%ebp),%ebx
  48e4e3:	c9                   	leave
  48e4e4:	c2 08 00             	ret    $0x8
  48e4e7:	90                   	nop
  48e4e8:	55                   	push   %ebp
  48e4e9:	89 c8                	mov    %ecx,%eax
  48e4eb:	89 e5                	mov    %esp,%ebp
  48e4ed:	53                   	push   %ebx
  48e4ee:	83 ec 24             	sub    $0x24,%esp
  48e4f1:	8b 50 14             	mov    0x14(%eax),%edx
  48e4f4:	8b 4d 08             	mov    0x8(%ebp),%ecx
  48e4f7:	31 c0                	xor    %eax,%eax
  48e4f9:	85 d2                	test   %edx,%edx
  48e4fb:	74 2e                	je     0x48e52b
  48e4fd:	8a 82 bb 00 00 00    	mov    0xbb(%edx),%al
  48e503:	83 f0 01             	xor    $0x1,%eax
  48e506:	85 c9                	test   %ecx,%ecx
  48e508:	0f                   	.byte 0xf
  48e509:	95                   	xchg   %eax,%ebp
