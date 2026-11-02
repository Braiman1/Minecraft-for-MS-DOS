
/workspace/Minecraft-for-MS-DOS/BetaPlusPlus.exe:     file format pei-i386


Disassembly of section .text:

004318c0 <.text+0x308c0>:
  4318c0:	55                   	push   %ebp
  4318c1:	89 e5                	mov    %esp,%ebp
  4318c3:	57                   	push   %edi
  4318c4:	56                   	push   %esi
  4318c5:	89 ce                	mov    %ecx,%esi
  4318c7:	53                   	push   %ebx
  4318c8:	83 ec 0c             	sub    $0xc,%esp
  4318cb:	8b 41 04             	mov    0x4(%ecx),%eax
  4318ce:	c7 45 f0 7f 00 00 00 	movl   $0x7f,-0x10(%ebp)
  4318d5:	31 c9                	xor    %ecx,%ecx
  4318d7:	89 45 ec             	mov    %eax,-0x14(%ebp)
  4318da:	89 c8                	mov    %ecx,%eax
  4318dc:	31 d2                	xor    %edx,%edx
  4318de:	c1 e0 0b             	shl    $0xb,%eax
  4318e1:	89 45 e8             	mov    %eax,-0x18(%ebp)
  4318e4:	8b 7d ec             	mov    -0x14(%ebp),%edi
  4318e7:	8d 1c d5 00 00 00 00 	lea    0x0(,%edx,8),%ebx
  4318ee:	0b 5d e8             	or     -0x18(%ebp),%ebx
  4318f1:	b8 7f 00 00 00       	mov    $0x7f,%eax
  4318f6:	01 df                	add    %ebx,%edi
  4318f8:	0f b6 5c 38 ff       	movzbl -0x1(%eax,%edi,1),%ebx
  4318fd:	83 3c 9d 20 6a a0 00 	cmpl   $0x0,0xa06a20(,%ebx,4)
  431904:	00 
  431905:	75 03                	jne    0x43190a
  431907:	48                   	dec    %eax
  431908:	75 ee                	jne    0x4318f8
  43190a:	89 d3                	mov    %edx,%ebx
  43190c:	09 cb                	or     %ecx,%ebx
  43190e:	39 45 f0             	cmp    %eax,-0x10(%ebp)
  431911:	88 44 1e 3c          	mov    %al,0x3c(%esi,%ebx,1)
  431915:	0f 4e 45 f0          	cmovle -0x10(%ebp),%eax
  431919:	83 c2 10             	add    $0x10,%edx
  43191c:	89 45 f0             	mov    %eax,-0x10(%ebp)
  43191f:	81 fa 00 01 00 00    	cmp    $0x100,%edx
  431925:	75 bd                	jne    0x4318e4
  431927:	41                   	inc    %ecx
  431928:	83 f9 10             	cmp    $0x10,%ecx
  43192b:	75 ad                	jne    0x4318da
  43192d:	8b 45 f0             	mov    -0x10(%ebp),%eax
  431930:	c6 86 e5 01 00 00 01 	movb   $0x1,0x1e5(%esi)
  431937:	89 86 3c 01 00 00    	mov    %eax,0x13c(%esi)
  43193d:	83 c4 0c             	add    $0xc,%esp
  431940:	5b                   	pop    %ebx
  431941:	5e                   	pop    %esi
  431942:	5f                   	pop    %edi
  431943:	5d                   	pop    %ebp
  431944:	c3                   	ret
  431945:	90                   	nop
  431946:	55                   	push   %ebp
  431947:	89 e5                	mov    %esp,%ebp
  431949:	8b 45 10             	mov    0x10(%ebp),%eax
  43194c:	8b 55 08             	mov    0x8(%ebp),%edx
  43194f:	c1 e0 07             	shl    $0x7,%eax
  431952:	c1 e2 0b             	shl    $0xb,%edx
  431955:	0b 45 0c             	or     0xc(%ebp),%eax
  431958:	5d                   	pop    %ebp
  431959:	09 d0                	or     %edx,%eax
  43195b:	8b 51 04             	mov    0x4(%ecx),%edx
  43195e:	0f b6 04 02          	movzbl (%edx,%eax,1),%eax
  431962:	c2 0c 00             	ret    $0xc
