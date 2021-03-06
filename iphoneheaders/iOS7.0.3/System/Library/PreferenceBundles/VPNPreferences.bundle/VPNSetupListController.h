/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VPNPreferences/VPNPreferences-Structs.h>
#import <Preferences/PSListController.h>

@class NSString, PSSpecifier, NSArray, NSMutableArray, UIAlertView;

@interface VPNSetupListController : PSListController {

	CFStringRef _currentVPNType;
	CFStringRef _originalVPNType;
	int _encType;
	BOOL _dirty;
	BOOL _sendAllTraffic;
	BOOL _useRSASecurID;
	BOOL _usesCertificates;
	BOOL _passwordRequired;
	NSString* _displayName;
	NSString* _server;
	NSString* _account;
	NSString* _password;
	NSString* _secret;
	id _ciscoCertificate;
	PSSpecifier* _sharedSecretSpec;
	PSSpecifier* _encryptionTypeSpec;
	PSSpecifier* _passwordSpec;
	PSSpecifier* _sendAllTrafficSpec;
	PSSpecifier* _rsaSpec;
	PSSpecifier* _groupNameSpec;
	PSSpecifier* _useCertSwitchSpec;
	PSSpecifier* _certListSpec;
	PSSpecifier* _accountSpec;
	NSArray* _onDemandSpecifiers;
	NSMutableArray* _group1Specifiers;
	PSSpecifier* _proxyLabelSpec;
	NSArray* _proxyGroupSpecifiers;
	NSArray* _pacSpecifiers;
	NSArray* _manualSpecifiers;
	NSArray* _proxyAuthSpecifiers;
	NSString* _serviceID;
	NSString* _groupDisplayName;
	int _proxyType;
	NSString* _proxyServer;
	NSString* _proxyPort;
	BOOL _proxyAuthenticated;
	NSString* _proxyUsername;
	NSString* _proxyPassword;
	NSString* _proxyPacFile;
	PSSpecifier* _displayNameSpec;
	BOOL _userCreated;
	BOOL _typeChanged;
	BOOL _onDemandService;
	BOOL _onDemandEnabled;
	NSString* _sslAppName;
	UIAlertView* _deleteConfirm;

}
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)bundle;
-(void)updateDoneButton;
-(BOOL)haveEnoughValues;
-(id)proxyUsesAuthentication:(id)arg1 ;
-(id)proxyType:(id)arg1 ;
-(void)setProxyServer:(id)arg1 specifier:(id)arg2 ;
-(id)proxyServer:(id)arg1 ;
-(void)setProxyUsesAuthentication:(id)arg1 specifier:(id)arg2 ;
-(void)setProxyUsername:(id)arg1 specifier:(id)arg2 ;
-(id)proxyUsername:(id)arg1 ;
-(void)setProxyPassword:(id)arg1 specifier:(id)arg2 ;
-(id)proxyPassword:(id)arg1 ;
-(void)setProxyType:(id)arg1 specifier:(id)arg2 ;
-(void)saveButtonClicked:(id)arg1 ;
-(void)scrollToSpecifier:(id)arg1 ;
-(id)onDemand:(id)arg1 ;
-(id)useRSASecurIDForSpecifier:(id)arg1 ;
-(id)sendAllTraffic:(id)arg1 ;
-(void)_setOriginalVPNType:(CFStringRef)arg1 ;
-(BOOL)_saveConfigurationSettings;
-(BOOL)deleteConfiguration:(id)arg1 ;
-(void)deleteVPNConfiguration:(id)arg1 ;
-(void)_setCurrentVPNType:(CFStringRef)arg1 ;
-(void)setUsesCertificates:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setOnDemandService:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setOnDemand:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setDisplayName:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setUsername:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setServer:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setSharedSecret:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setCiscoCertificate:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setUseRSASecurID:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setSendAllTraffic:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setPPTPEncryptionLevel:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setGroupDisplayName:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setPassword:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setPasswordRequired:(id)arg1 forSpecifier:(id)arg2 ;
-(void)setProxyServerPort:(id)arg1 specifier:(id)arg2 ;
-(void)setPacFile:(id)arg1 specifier:(id)arg2 ;
-(void)setStateForServiceID:(id)arg1 ;
-(void)renewCertificate:(id)arg1 ;
-(void)deleteConfirm:(id)arg1 ;
-(id)proxyServerPort:(id)arg1 ;
-(id)pacFile:(id)arg1 ;
-(id)pptpEncryptionLevelForSpecifier:(id)arg1 ;
-(void)setVPNType:(id)arg1 forSpecifier:(id)arg2 ;
-(CFStringRef)vpnTypeForSpecifier:(id)arg1 ;
-(id)usernameForSpecifier:(id)arg1 ;
-(id)displayNameForSpecifier:(id)arg1 ;
-(id)serverForSpecifier:(id)arg1 ;
-(id)passwordForSpecifier:(id)arg1 ;
-(id)sharedSecretForSpecifier:(id)arg1 ;
-(id)ciscoCertificateForSpecifier:(id)arg1 ;
-(id)groupDisplayNameForSpecifier:(id)arg1 ;
-(id)usesCertificatesForSpecifier:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(id)specifiers;
@end

