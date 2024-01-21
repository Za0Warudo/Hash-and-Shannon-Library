# Hash-and-Shannon-Library
C implementation of a Hash static Lib and a Shannon dinamic Lib

AUTHOR:
Za0Waraudo, Vinicius Gomes 

EMAIL:
viniciugomes24@gmail.com

HOW TO EXECUTE:
Use the makefile to create the libs and test, to include lib export the current dir to lib path
then compile with the lib include. use the Makefile commands to compile test as example. 

to execute test, in a terminal with all files, use the following command line: 

./test

then chose a seed and voila!

TESTS:

$ ./test 1

Time to generate magic vector: 0.009545

Time to generate string: 0.010572

Time to step1: 0.000012

Time to step2: 0.000021

Time to step3: 0.000286

Time to step4: 0.000006

Time to step4: 0.000033

Time to shannon: 0.000044

String generate:
TxmECoScQYSCBIqbgoriNhyftzJeGEikIsxdvwOOWKmCLlViCUEiREVjIiXsgEPSbxtyEKoLuABMsdzdXKKOuKVUyWCwXrnaMsgQNueQslsrkXrGsHOZSignHMcylbPBzMYjBcWyQKADpZhWqvjFtrXrALYLrdmvVwuZAxOUQolNlXlDjjTjGiGPZZKLnKQmJHBJEaTfKNjzImhYiThSGPhamjCRIpqkOagkjrQFprRfXQhFxyZcdqRznUqXWUtmxXDDSmMXKpdzckAwqrMfnSSnaNUHuvJcxfjASJEhSBmgNxXTTVixbKwoVskcObeWehbdBFwcJIsYavsONCLOAxskaWWwvuZvhyJQdydaIRcIOGcCmzYloBQUgvBXqBg

Correspondent Hash:
39b509030b52d0527a3e29bacfdbc0f2

Shannon Entropy of Hash:
3.441428


$ ./test 2

Time to generate magic vector: 0.009441

Time to generate string: 0.011235

Time to step1: 0.000011

Time to step2: 0.000028

Time to step3: 0.000279

Time to step4: 0.000006

Time to step4: 0.000007

Time to shannon: 0.000062

String generate:
cSMIOEdLjraOyxrZNueTqarNzzJCgqesnbepSIOAjuclyhJFBHkDBXGVjgJVmTMdrbjyEMNRzIQPwHNRyFRJYiRtmNJphlbnHnloMubbxyKIigrUfZvEhrkvpffUQtXXpVKWuLiULaDnDcHeJwEcJdLpDiaPniHxEFqcXFvbZNIZUVigiPwSKTQfGromWrTfXqpaYLOqfWKkMRLoKfLHHPODjIxcEgLlnCMyHAKKcKavfsCqBaAkRTscxUwSNWhkpPyXxaJAMHlFfpXjlyGxbYkGMRXhwBDJBE

Correspondent Hash:
beefc9056610b818a0af05237855b4df

Shannon Entropy of Hash:
3.804229


$ ./test 3

Time to generate magic vector: 0.009590

Time to generate string: 0.023132

Time to step1: 0.000025

Time to step2: 0.000026

Time to step3: 0.000454

Time to step4: 0.000003

Time to step4: 0.000004

Time to shannon: 0.000034

String generate:
KrhVSEVPtjAcdLyzhWdpQCebbFLlkylumyWMTtsDscRQdgZqZSWvtOKDuttIyFsJemwrIRGXuheIDdkpnwEMEwcmZUWNlnaqkeaeagWlTjAIKiSepqwfspHdbcOaWkVUqiJeZKrzJCjhtNXpgjJqNvUcyFnercymhxiGQBEzYnvjOqUBkdAfTNFXMqoqnLkaKpFCBSfuXIRoPLQTTPlntmlcFawGJVGaBVULLPmiBtWLzenRVvhVkHOSBWLDAnAlYbQeQgFKesLylRZHIEGNfcqTAfunztBLpWDErvDsjYDfdVjOxdSGHdajIHHhZHSMihkuRTPpStPxnPMKYwICWIuJDsFAiFeVZATIFBRtCYQwrIZEbDqNshojhrivRhDAfLaQnXIunFfgGUiRGrpMqWPUMThjWRMvPKHxAuNTYLPtHcoIUcDzsjxoYFdMElTMaLKfrYgoyUmkQKdyEUwyeVmvjVaNIXYFRFCWvFswjUEgsYOdXZRUVVzSMGVLrKpqLUKdHlWhqIoQAhdFELdOTtKlPIRIDUPgTDhTyccaDxhmwuBCdaoMEaMiMBXuySNptVcycGPDRNHhEOVsYtihdFxlctNqhZSWKEAqCemKrGDkFHdVmWylFXrpGYyVWJvDnHPdnDBqoPHGgWCrnJtCOMxKRxfoqQzSitoXFquJvoUnBbkGOBeUDUkIFvFfMHOZmaAQLNRcUXBwPpruJDTkshtgUFQIQtxNacepXcuyoj

Correspondent Hash:
cfebd881687a23fa25ffed0cfe394ee6

Shannon Entropy of Hash:
3.750807


$ ./test 4

Time to generate magic vector: 0.009528

Time to generate string: 0.014042

Time to step1: 0.000008

Time to step2: 0.000020

Time to step3: 0.000295

Time to step4: 0.000006

Time to step4: 0.000005

Time to shannon: 0.000076

String generate:
FeeOpkWgVYLjBigltoFlQElAafeNnWhHfryvAUzHpdMeLhxwAEMrdaOBYiPmdXyfWbOHRgnvPcCRVhYOJoPbVAMxtewfYWHWfECSqLLsFcrfxnQieNXwKWxJRNujyWUSdwoIAtekurKeNrLlhDCeNutLrQhZNsSlEpNjBeboVOUyaZQQSpkepKyjNbeLysZFIBkovQncKHploCvdjtIwaKfxXGxLcvFeGKTFmWicQBMRZcJLARTjSuHBIloXEivcHBWaZObnVCKDfgdLhOUoVuQTWPehwXHaKQnvszXLcfSeE

Correspondent Hash:
4d82dd8e1d13db0f64f2ede5d5b41945

Shannon Entropy of Hash:
3.440120


$ ./test 5

Time to generate magic vector: 0.009317

Time to generate string: 0.007802

Time to step1: 0.000017

Time to step2: 0.000013

Time to step3: 0.000263

Time to step4: 0.000002

Time to step4: 0.000002

Time to shannon: 0.000029

String generate:
DNtZMQtxyToScaqyHDAfpjEJErZFZjuNferzfRPGfeNgxozfcmdIxZyAVWzWsSaQaommhtXbhnenXlCwEuXfLFxYzenBrEAovYVzrNaAlrwWoYmucmEYwyIgUfEcKOnBhZvJOJFpWlOruHiZMJhLhhhdwGwmxtcVAexMsVajegOxVlMkGrnOQOXgzAQGjAcbkVNfkJgKfsZaPATvfzBmymMUqhmYcPLTuzpHRigiKNCDZfGdIhEDmSEchBhxgLrsMXTHeoXdpfjTqmefzNddYWLDEUckhlWDwFQmixbiZfRwyjkFECfZABVjzLOKfBpNbmkWugGkljSCaneKqopdIXKfDXnciJrDwdxEZTgMGrtUpotbakvyKJCtYqJRCptWgfoHbHUfxCVUcvRXiQaOjrIytKIHDIKIbxIvmNKwslaGRLkZWZGCswUIQezoNZyyhXhmmRdCdSgoYLsylspdCqaWDRBNyWNCfxjknorDFWqydTrLbVssQKJmhQhlhfNMMpXHDSzySMoLRqTFHBJMMUinbkKfUHFNlvypTtGucakpIGfaipocSaTYIUmUEZeBRxdumYwMtXKSdlzJGosLgcXbgMPHmkBqpcNDDswGwXoOXAcffiQweCdvvnbmofXNlfBCUGPdiSRdEVuRFoTbPSrKeIpOYcNcUMX

Correspondent Hash:
7bceb49868f00a2e1ad4920299fe0f46

Shannon Entropy of Hash:
3.655639


$ ./test 6

Time to generate magic vector: 0.009411

Time to generate string: 0.016374

Time to step1: 0.000009

Time to step2: 0.000038

Time to step3: 0.000323

Time to step4: 0.000004

Time to step4: 0.000004

Time to shannon: 0.000036

String generate:
wPiCPSGWoElaKRepsjNtvWskmBxXxoKEoLEFdhLislfsitDKfAAccEDFyEgjDfieqYuWBIspnkthdfbKqrXlFsuZGHToWqotcZRWZllovgpdPGXPriqHmqPRovhkONHnNbhkrqxhQFKtPlzmTRdyzRaJgzysuJIjPtPXCCSPtDCyNYqRYwshfrxvxdXhHryawOOumbxesHuyLArmpiXwzRhvzrrgNVykfzwmRWQseTxDgNhkhXCNNhthENVCXuwDrnfKdzvWiXAPUQMUhDvULQEplcyxeYZhrJMlQHhkutfEUHZiZYAnMhOSXNJmfnBYfrBJuENmeOsQdIhUMfNIGlCHTTOidKQymIDmEOiePSiCBmsKRBrsfUvYfTenpcDbGLWsttgQYquAqYuFKKTFaLOuvzCCAoTUYnCJrmozjPqQXFQRXBISCvXUgfONklyoZGkRsnaWRcJcHIfiUTiIOHURwzgUlcmqfYVwaxCUgtsUsezSFBArcLmISWyWsDatvbKbEKMPgQHtOUGuSUguVpYmXNDfz

Correspondent Hash:
5c9ccce3954c6fa0b2bfda7c4fa8b7b9

Shannon Entropy of Hash:
3.632049


$ ./test 7

Time to generate magic vector: 0.009571

Time to generate string: 0.019881

Time to step1: 0.000018

Time to step2: 0.000023

Time to step3: 0.000426

Time to step4: 0.000004

Time to step4: 0.000004

Time to shannon: 0.000078

String generate:
nsctXRvgORpWCpmPOzojoSMYkQDQfNwQmSdoOapIdSgWiDSIoUoFHQkCjXQrrXKFUOeDhTuLrsuqfvokGYztviCKiPwMcgDWmbSagjTgQHTZFjIirOMnUMbqWGIPJMnqqSEmpXSrxRMhthGpMXJsvZkvhYxLEOPNbhYcxFntCfPDhofQvAqhDAKLPYkJBwiqJQpueUIRTAZLuRpuNOAcwettHbxyFmhIaYdfTWvQBYiQZgiFEblFbQmhxILTltEXYNMZOZdPbsoZULQcfUuHKKanSPXOoJoshrjZdpxZvhFujBkIxKAPKwOrDWVgZvVSwIAXQpRSeXQntCJBtvcJVxuaXuOWRSBUKNYobLpPseRlPPVgNwxvgeeDSznnZMOLtrNFiWDYMGiMEBtBtTTdDopSGEasEloWqrkwvvxPCoDjQLPSoydLFweTkgPiALvCudzfDmlFWlzZqYErGSzPHasUmGDBFRGfQiyOoUneAagmQPmiGRBSpJWbPAUzOvLvgLRVLPsMZsNczoUFhvPxVGswqCMerCwhwsHvLqErEyUzvdqGfJxjmgZMQLXOFCdGLKYztGyRcZMzmiuJwmRJcjdxxzMemaSVcxVTuXBWUdGsUNBhYtDLrCLSnRtzAAuUqNhzteTHiQSlDuMUrzgULamskWdaurUvhjhIQ

Correspondent Hash:
6f6ffe71bc111f5b31ad039409ebd117

Shannon Entropy of Hash:
3.549801


$ ./test 8

Time to generate magic vector: 0.009556

Time to generate string: 0.024409

Time to step1: 0.000028

Time to step2: 0.000024

Time to step3: 0.000418

Time to step4: 0.000002

Time to step4: 0.000003

Time to shannon: 0.000039

String generate:
nNsRFTonviSZYlidUCAsRrrFqdruxHAVnbroHFLXvYGSRifRaECWhQKtGqSWYgZsgUMbKOmHAIGhkJHBalnTPqIjyeCtIricEQTWvXvAXRKNTyMtTZZPodOTBAyCVzXpSoFXRgxNNommEEauAFZZfMLymqnvONDPABXSRgNaaAQeAZyzNPIVxqAQOWMoEqQFSHtfarvraEcYgxtUUYhrNUtCDEISWHpHsqBljrxGygfDUBxDkwTLWfylsxZBgQtsCrkWmrkDZPrXlEMDgSOjxKWHZfSTiVCFTeVVOrnmOtytmtOwaacUoyqLbvDgLpviMbLhkFHsWOWBRJwblSVRHROErYvfXkGyHlsTwZYHxSjBPUSbzwflyuADvUWtmGnIyfMjjmzEXNHAAZpjBFdZwtQeLlsyqsFhArHLrdmGKoIHjATFUWTMpvUmfKUTGpXbyUPplOvtmgoGUfqStQJdLWjzrwRAjEGpbrpGaZfwNsvWnpVYZVYBQnAwNeiIRSoKISNNDOIDAZGOfPkRCwZGzOfGDHaUvwofoMxjKgIoIgZtzMAzTMDeEKlBdxSVsWQjXDRjnrTFoLvLWTGGqyaNUQGsSSQCmiAFXftHBwWkZkWHwqbhdwtTCWfvTEqlowDnLGvwNZxENilZMEeEXRcxvSCxQQPVuHxKeKWoPMNurxhwovBVeQZnvcXzktbzsfkmcPDBYpSDdJJDJKSqWHcqetgYySxBseFqqmCVSOYsipdNUuveSRyKMlEzOSXGmcURCmJCjtUrCktGzgOebbzUDZCNlsfHcodCMNeKZbccEVcwVuucLuHQZyonvvhNzZmQKwCwBgOIbiMiDFnLitFBMAKgDprtrZMtOniePlNhxdGVKAQnoWUveGyqtgWnAxJv

Correspondent Hash:
2977d7f8f2c2c0d590ffe3b2d281bbf2

Shannon Entropy of Hash:
3.456748

DEPENDENCIES: 
all test was made only in a machine with the following versions:  
Ubuntu 22.04.3 LTS 
gcc version 11.4.0 (Ubuntu 11.4.0-1ubuntu1~22.04) 
