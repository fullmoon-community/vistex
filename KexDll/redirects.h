//
// General DLL Redirects. These apply to applications, application DLLs, and DLLs
// outside of KexDir and WinDir. The DLL redirect routine strips the .dll suffix,
// if present, from the DLL name.
//

#define DLL_REDIRECT(Key, Value) {RTL_CONSTANT_STRING(_L(Key)), RTL_CONSTANT_STRING(_L(Value))},

STATIC CONST UNICODE_STRING DllRedirects[][2] = {
	DLL_REDIRECT("ntdll",										"kxnt"				)

	DLL_REDIRECT("cfgmgr32",									"kxbase"			)
	DLL_REDIRECT("kernel32",									"kxbase"			)
	DLL_REDIRECT("kernelbase",									"kxbase"			)

	DLL_REDIRECT("bcrypt",										"kxcryp"			)
	DLL_REDIRECT("bcryptprimitives",							"kxcryp"			)
	DLL_REDIRECT("secur32",										"kxcryp"			)
	
	DLL_REDIRECT("BluetoothApis",								"kxuser"			)
	DLL_REDIRECT("shcore",										"kxuser"			)
	DLL_REDIRECT("user32",										"kxuser"			)
	
	DLL_REDIRECT("combase",										"kxcom"				)
	DLL_REDIRECT("ole32",										"kxcom"				)

	DLL_REDIRECT("msvcrt",										"kxcrt"				)
	
	DLL_REDIRECT("d3d12",										"kxdx"				)
	DLL_REDIRECT("dxgi",										"kxdx"				)
	DLL_REDIRECT("MFPlat",										"kxdx"				)
	DLL_REDIRECT("xinput1_4",									"xinput1_3"			)

	DLL_REDIRECT("dcomp",										"dcow8"				)

	DLL_REDIRECT("powrprof",									"kxmi"				)
	DLL_REDIRECT("userenv",										"kxmi"				)
	DLL_REDIRECT("version",										"kxmi"				)
	DLL_REDIRECT("wldp",										"kxmi"				)

	DLL_REDIRECT("dnsapi",										"kxnet"				)
	DLL_REDIRECT("winhttp",										"kxnet"				)
	DLL_REDIRECT("ws2_32",										"kxnet"				)

	DLL_REDIRECT("advapi32",									"kxadvapi"			)

	//
	// The DLL rewriting routine strips the -lX-Y-Z suffix from the API set name to
	// avoid excessive duplication.
	// Keep this list in alphabetical order to avoid accidental duplicates.
	//

	DLL_REDIRECT("api-ms-win-appmodel-identity",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-appmodel-runtime",					"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-apiquery",					"kxnt"				)
	DLL_REDIRECT("api-ms-win-core-atoms",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-crt",							"kxcrt"				)
	DLL_REDIRECT("api-ms-win-core-com",							"kxcom"				)
	DLL_REDIRECT("api-ms-win-core-console",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-datetime",					"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-debug",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-delayload",					"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-errorhandling",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-fibers",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-file",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-handle",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-heap",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-heap-obsolete",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-interlocked",					"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-io",							"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-job",							"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-kernel32-legacy",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-largeinteger",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-libraryloader",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-localization-ansi",			"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-localization",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-localization-obsolete",		"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-memory",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-namedpipe-ansi",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-namedpipe",					"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-path",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-privateprofile",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-processenvironment",			"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-processsnapshot",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-processthreads",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-processtopology",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-processtopology-obsolete",	"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-profile",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-psapi",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-quirks",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-realtime",					"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-registry",					"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-rtlsupport",					"kxnt"				)
	DLL_REDIRECT("api-ms-win-core-shlwapi-legacy",				"kxuser"			)
	DLL_REDIRECT("api-ms-win-core-shlwapi-obsolete",			"kxuser"			)
	DLL_REDIRECT("api-ms-win-core-string-obsolete",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-sidebyside",					"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-string",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-string-obsolete",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-synch",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-synch-ansi",					"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-sysinfo",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-systemtopology",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-threadpool",					"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-threadpool-legacy",			"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-threadpool-private",			"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-toolhelp",					"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-timezone",					"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-url",							"kxuser"			)
	DLL_REDIRECT("api-ms-win-core-util",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-version",						"version"			)
	DLL_REDIRECT("api-ms-win-core-versionansi",					"version"			)
	DLL_REDIRECT("api-ms-win-core-windowserrorreporting",		"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-winrt",						"kxcom"				)
	DLL_REDIRECT("api-ms-win-core-winrt-error",					"kxcom"				)
	DLL_REDIRECT("api-ms-win-core-winrt-robuffer",				"kxcom"				)
	DLL_REDIRECT("api-ms-win-core-winrt-string",				"kxcom"				)
	DLL_REDIRECT("api-ms-win-core-wow64",						"kxbase"			)
	DLL_REDIRECT("api-ms-win-core-xstate",						"kxnt"				)
	DLL_REDIRECT("api-ms-win-crt-conio",						"ucrtbase"			)
	DLL_REDIRECT("api-ms-win-crt-convert",						"ucrtbase"			)
	DLL_REDIRECT("api-ms-win-crt-environment",					"ucrtbase"			)
	DLL_REDIRECT("api-ms-win-crt-filesystem",					"ucrtbase"			)
	DLL_REDIRECT("api-ms-win-crt-heap",							"ucrtbase"			)
	DLL_REDIRECT("api-ms-win-crt-locale",						"ucrtbase"			)
	DLL_REDIRECT("api-ms-win-crt-math",							"ucrtbase"			)
	DLL_REDIRECT("api-ms-win-crt-multibyte",					"ucrtbase"			)
	DLL_REDIRECT("api-ms-win-crt-private",						"ucrtbase"			)
	DLL_REDIRECT("api-ms-win-crt-process",						"ucrtbase"			)
	DLL_REDIRECT("api-ms-win-crt-runtime",						"ucrtbase"			)
	DLL_REDIRECT("api-ms-win-crt-stdio",						"ucrtbase"			)
	DLL_REDIRECT("api-ms-win-crt-string",						"ucrtbase"			)
	DLL_REDIRECT("api-ms-win-crt-time",							"ucrtbase"			)
	DLL_REDIRECT("api-ms-win-crt-utility",						"ucrtbase"			)
	DLL_REDIRECT("api-ms-win-downlevel-kernel32",				"kxbase"			)
	DLL_REDIRECT("api-ms-win-downlevel-ole32",					"kxcom"				)
	DLL_REDIRECT("api-ms-win-eventing-classicprovider",			"kxadvapi"			)
	DLL_REDIRECT("api-ms-win-eventing-provider",				"kxadvapi"			)
	DLL_REDIRECT("api-ms-win-kernel32-package-current",			"kxbase"			)
	DLL_REDIRECT("api-ms-win-mm-time",							"winmm"				)
	DLL_REDIRECT("api-ms-win-ntuser-sysparams",					"kxuser"			)
	DLL_REDIRECT("api-ms-win-power-base",						"kxmi"				)
	DLL_REDIRECT("api-ms-win-power-setting",					"kxmi"				)
	DLL_REDIRECT("api-ms-win-security-base-ansi",				"kxadvapi"			)
	DLL_REDIRECT("api-ms-win-security-base",					"kxbase"			)
	DLL_REDIRECT("api-ms-win-security-cryptoapi",				"cryptsp"			)
	DLL_REDIRECT("api-ms-win-security-lsalookup-ansi",			"kxadvapi"			)
	DLL_REDIRECT("api-ms-win-security-lsalookup",				"sechost"			)
	DLL_REDIRECT("api-ms-win-security-sddl-ansi",				"kxadvapi"			)
	DLL_REDIRECT("api-ms-win-security-sddl",					"sechost"			)
	DLL_REDIRECT("api-ms-win-security-systemfunctions",			"kxadvapi"			)
	DLL_REDIRECT("api-ms-win-service-core-ansi",				"kxadvapi"			)
	DLL_REDIRECT("api-ms-win-service-core",						"sechost"			)
	DLL_REDIRECT("api-ms-win-service-management",				"kxadvapi"			)
	DLL_REDIRECT("api-ms-win-service-private",					"sechost"			)
	DLL_REDIRECT("api-ms-win-service-winsvc",					"sechost"			)
	DLL_REDIRECT("api-ms-win-shcore-obsolete",					"kxuser"			)
	DLL_REDIRECT("api-ms-win-shcore-scaling",					"kxuser"			)
	DLL_REDIRECT("api-ms-win-shell-namespace",					"kxuser"			)

	DLL_REDIRECT("ext-ms-win-gdi-dc",							"gdi32"				)
	DLL_REDIRECT("ext-ms-win-gdi-dc-create",					"gdi32"				)
	DLL_REDIRECT("ext-ms-win-gdi-draw",							"gdi32"				)
	DLL_REDIRECT("ext-ms-win-gdi-font",							"gdi32"				)
	DLL_REDIRECT("ext-ms-win-gdi-path",							"gdi32"				)
	DLL_REDIRECT("ext-ms-win-ntuser-rotationmanager",			"kxuser"			)
	DLL_REDIRECT("ext-ms-win-rtcore-gdi-devcaps",				"gdi32"				)
	DLL_REDIRECT("ext-ms-win-rtcore-gdi-object",				"gdi32"				)
	DLL_REDIRECT("ext-ms-win-rtcore-gdi-rgn",					"gdi32"				)
	DLL_REDIRECT("ext-ms-win-rtcore-ntuser-sysparams",			"kxuser"			)
	DLL_REDIRECT("ext-ms-win-uiacore",							"uiautomationcore"	)
};

#undef DLL_REDIRECT