/*
 *	server/zone/objects/player/sui/transferbox/SuiTransferBox.h generated by engine3 IDL compiler 0.60
 */

#ifndef SUITRANSFERBOX_H_
#define SUITRANSFERBOX_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#include "server/zone/packets/ui/SuiCreatePageMessage.h"

#include "engine/lua/LuaObject.h"

#include "engine/service/proto/BaseMessage.h"

#include "server/zone/objects/player/sui/SuiBox.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace messagebox {

class SuiTransferBox : public SuiBox {
public:
	SuiTransferBox(PlayerCreature* player, unsigned int windowType);

	BaseMessage* generateMessage();

	void addFrom(const String& from, const String& startingFrom, const String& inputFrom, const String& rFrom);

	void addTo(const String& to, const String& startingTo, const String& inputTo, const String& rTo);

	bool isTransferBox();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	SuiTransferBox(DummyConstructorParameter* param);

	virtual ~SuiTransferBox();

	friend class SuiTransferBoxHelper;
};

} // namespace messagebox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::messagebox;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace messagebox {

class SuiTransferBoxImplementation : public SuiBoxImplementation {
protected:
	String lblFrom;

	String lblStartingFrom;

	String lblInputFrom;

	String lblTo;

	String lblStartingTo;

	String lblInputTo;

	String convertRatioFrom;

	String convertRatioTo;

public:
	SuiTransferBoxImplementation(PlayerCreature* player, unsigned int windowType);

	SuiTransferBoxImplementation(DummyConstructorParameter* param);

	BaseMessage* generateMessage();

	void addFrom(const String& from, const String& startingFrom, const String& inputFrom, const String& rFrom);

	void addTo(const String& to, const String& startingTo, const String& inputTo, const String& rTo);

	bool isTransferBox();

	SuiTransferBox* _this;

	operator const SuiTransferBox*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~SuiTransferBoxImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class SuiTransferBox;
};

class SuiTransferBoxAdapter : public SuiBoxAdapter {
public:
	SuiTransferBoxAdapter(SuiTransferBoxImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	BaseMessage* generateMessage();

	void addFrom(const String& from, const String& startingFrom, const String& inputFrom, const String& rFrom);

	void addTo(const String& to, const String& startingTo, const String& inputTo, const String& rTo);

	bool isTransferBox();

protected:
	String _param0_addFrom__String_String_String_String_;
	String _param1_addFrom__String_String_String_String_;
	String _param2_addFrom__String_String_String_String_;
	String _param3_addFrom__String_String_String_String_;
	String _param0_addTo__String_String_String_String_;
	String _param1_addTo__String_String_String_String_;
	String _param2_addTo__String_String_String_String_;
	String _param3_addTo__String_String_String_String_;
};

class SuiTransferBoxHelper : public DistributedObjectClassHelper, public Singleton<SuiTransferBoxHelper> {
	static SuiTransferBoxHelper* staticInitializer;

public:
	SuiTransferBoxHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SuiTransferBoxHelper>;
};

} // namespace messagebox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::messagebox;

#endif /*SUITRANSFERBOX_H_*/
