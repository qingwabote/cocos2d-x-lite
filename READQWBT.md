gulp gen-simulator

Undefined symbols for architecture x86_64:
"_SCNetworkReachabilityCreateWithAddress", referenced from:
cocos2d::Reachability::createWithAddress(sockaddr const*) in libcocos2d Mac.a(CCReachability.o)
"_SCNetworkReachabilityCreateWithName", referenced from:
cocos2d::Reachability::createWithHostName(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) in libcocos2d Mac.a(CCReachability.o)
"_SCNetworkReachabilityGetFlags", referenced from:
cocos2d::Reachability::isConnectionRequired() const in libcocos2d Mac.a(CCReachability.o)
cocos2d::Reachability::getCurrentReachabilityStatus() const in libcocos2d Mac.a(CCReachability.o)
"_SCNetworkReachabilityScheduleWithRunLoop", referenced from:
cocos2d::Reachability::startNotifier(std::__1::function<void (cocos2d::Reachability*, cocos2d::Reachability::NetworkStatus, void*)> const&, void*) in libcocos2d Mac.a(CCReachability.o)
"_SCNetworkReachabilitySetCallback", referenced from:
cocos2d::Reachability::startNotifier(std::__1::function<void (cocos2d::Reachability*, cocos2d::Reachability::NetworkStatus, void*)> const&, void*) in libcocos2d Mac.a(CCReachability.o)
"_SCNetworkReachabilityUnscheduleFromRunLoop", referenced from:
cocos2d::Reachability::stopNotifier() in libcocos2d Mac.a(CCReachability.o)
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)

解决方法：添加SystemConfiguration.framework
