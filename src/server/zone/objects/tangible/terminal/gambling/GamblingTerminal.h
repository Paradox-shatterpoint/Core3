/*
 *	server/zone/objects/tangible/terminal/gambling/GamblingTerminal.h generated by engine3 IDL compiler 0.60
 */

#ifndef GAMBLINGTERMINAL_H_
#define GAMBLINGTERMINAL_H_

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

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class GamblingBet;

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

namespace server {
namespace zone {
namespace managers {
namespace minigames {
namespace events {

class GamblingEvent;

} // namespace events
} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames::events;

namespace server {
namespace zone {
namespace objects {
namespace scene {
namespace variables {

class ParameterizedStringId;

} // namespace variables
} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene::variables;

#include "server/zone/templates/tangible/GamblingTerminalTemplate.h"

#include "server/zone/objects/player/sui/SuiWindowType.h"

#include "server/zone/objects/tangible/terminal/Terminal.h"

#include "engine/lua/LuaObject.h"

#include "system/util/Vector.h"

#include "system/util/VectorMap.h"

#include "system/lang/ref/Reference.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace gambling {

class GamblingTerminal : public Terminal {
public:
	static const int ROULETTEMACHINE = 0;

	static const int SLOTMACHINE = 1;

	static const int JOINTERMINAL = 20;

	static const int LEAVETERMINAL = 21;

	static const int NOGAMERUNNING = 0;

	static const int GAMESTARTING = 1;

	static const int GAMESTARTED = 2;

	static const int TWOLEFT = 3;

	static const int ONELEFT = 4;

	static const int END = 5;

	static const int SLOTGAMEENDED = 6;

	static const int NINETY = 2;

	static const int SIXTY = 3;

	static const int THIRTY = 4;

	static const int TWENTY = 5;

	static const int FIFTEEN = 6;

	static const int TEN = 7;

	static const int FIVE = 8;

	static const int WHEELSTART = 9;

	static const int WHEELBEGINSLOW = 10;

	static const int WHEELSLOW = 11;

	static const int WHEELSTOP = 12;

	static const int WHEELPAYOUT = 12;

	GamblingTerminal();

	void initializeTransientMembers();

	void reset();

	Vector<GamblingBet*>* getBets();

	VectorMap<ManagedReference<PlayerCreature* >, unsigned int>* getPlayersWindows();

	VectorMap<ManagedReference<PlayerCreature* >, int>* getWinnings();

	int getFirst();

	int getSecond();

	int getThird();

	void setFirst(int value);

	void setSecond(int value);

	void setThird(int value);

	int getMinBet();

	int getMaxBet();

	int getState();

	void setState(int value);

	int getMachineType();

	GamblingEvent* getEvent();

	void setEvent(GamblingEvent* event);

	void incGameCount();

	int getGameCount();

	bool isGoneEmpty();

	String getMachineTypeText();

	void loadTemplateData(SharedObjectTemplate* templateData);

	String getText(PlayerCreature* player);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void setGamblingRegion(const String& region);

	String getGamblingRegion();

	bool gameRunning();

	void notifyOthers(PlayerCreature* player, ParameterizedStringId* text);

	void notifyAll(ParameterizedStringId* text);

	bool checkJoin(PlayerCreature* player);

	void joinTerminal(PlayerCreature* player);

	void leaveTerminal(PlayerCreature* player);

	void closeMenu(PlayerCreature* player, bool payout);

	void closeAllMenus();

	void statusUpdate(PlayerCreature* player, int event);

	void statusUpdate(int event);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	GamblingTerminal(DummyConstructorParameter* param);

	virtual ~GamblingTerminal();

	String _return_getGamblingRegion;
	String _return_getMachineTypeText;
	String _return_getText;

	friend class GamblingTerminalHelper;
};

} // namespace gambling
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::gambling;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace gambling {

class GamblingTerminalImplementation : public TerminalImplementation {
protected:
	String gamblingRegion;

	int machineType;

	VectorMap<ManagedReference<PlayerCreature* >, unsigned int> playersWindows;

	Reference<GamblingEvent*> event;

	VectorMap<ManagedReference<PlayerCreature* >, int> winnings;

	int gameCount;

	int first;

	int second;

	int third;

	int minBet;

	int maxBet;

	int state;

	Vector<GamblingBet*> bets;

public:
	static const int ROULETTEMACHINE = 0;

	static const int SLOTMACHINE = 1;

	static const int JOINTERMINAL = 20;

	static const int LEAVETERMINAL = 21;

	static const int NOGAMERUNNING = 0;

	static const int GAMESTARTING = 1;

	static const int GAMESTARTED = 2;

	static const int TWOLEFT = 3;

	static const int ONELEFT = 4;

	static const int END = 5;

	static const int SLOTGAMEENDED = 6;

	static const int NINETY = 2;

	static const int SIXTY = 3;

	static const int THIRTY = 4;

	static const int TWENTY = 5;

	static const int FIFTEEN = 6;

	static const int TEN = 7;

	static const int FIVE = 8;

	static const int WHEELSTART = 9;

	static const int WHEELBEGINSLOW = 10;

	static const int WHEELSLOW = 11;

	static const int WHEELSTOP = 12;

	static const int WHEELPAYOUT = 12;

	GamblingTerminalImplementation();

	GamblingTerminalImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void reset();

	Vector<GamblingBet*>* getBets();

	VectorMap<ManagedReference<PlayerCreature* >, unsigned int>* getPlayersWindows();

	VectorMap<ManagedReference<PlayerCreature* >, int>* getWinnings();

	int getFirst();

	int getSecond();

	int getThird();

	void setFirst(int value);

	void setSecond(int value);

	void setThird(int value);

	int getMinBet();

	int getMaxBet();

	int getState();

	void setState(int value);

	int getMachineType();

	GamblingEvent* getEvent();

	void setEvent(GamblingEvent* event);

	void incGameCount();

	int getGameCount();

	bool isGoneEmpty();

	String getMachineTypeText();

	void loadTemplateData(SharedObjectTemplate* templateData);

	String getText(PlayerCreature* player);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void setGamblingRegion(const String& region);

	String getGamblingRegion();

	bool gameRunning();

	void notifyOthers(PlayerCreature* player, ParameterizedStringId* text);

	void notifyAll(ParameterizedStringId* text);

	bool checkJoin(PlayerCreature* player);

	void joinTerminal(PlayerCreature* player);

	void leaveTerminal(PlayerCreature* player);

	void closeMenu(PlayerCreature* player, bool payout);

	void closeAllMenus();

	void statusUpdate(PlayerCreature* player, int event);

	void statusUpdate(int event);

protected:
	bool invalidPosture(PlayerCreature* player);

public:
	GamblingTerminal* _this;

	operator const GamblingTerminal*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~GamblingTerminalImplementation();

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

	friend class GamblingTerminal;
};

class GamblingTerminalAdapter : public TerminalAdapter {
public:
	GamblingTerminalAdapter(GamblingTerminalImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void reset();

	int getFirst();

	int getSecond();

	int getThird();

	void setFirst(int value);

	void setSecond(int value);

	void setThird(int value);

	int getMinBet();

	int getMaxBet();

	int getState();

	void setState(int value);

	int getMachineType();

	void incGameCount();

	int getGameCount();

	bool isGoneEmpty();

	String getMachineTypeText();

	String getText(PlayerCreature* player);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	void setGamblingRegion(const String& region);

	String getGamblingRegion();

	bool gameRunning();

	bool checkJoin(PlayerCreature* player);

	void joinTerminal(PlayerCreature* player);

	void leaveTerminal(PlayerCreature* player);

	void closeMenu(PlayerCreature* player, bool payout);

	void closeAllMenus();

	void statusUpdate(PlayerCreature* player, int event);

	void statusUpdate(int event);

protected:
	String _param0_setGamblingRegion__String_;
};

class GamblingTerminalHelper : public DistributedObjectClassHelper, public Singleton<GamblingTerminalHelper> {
	static GamblingTerminalHelper* staticInitializer;

public:
	GamblingTerminalHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<GamblingTerminalHelper>;
};

} // namespace gambling
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::gambling;

#endif /*GAMBLINGTERMINAL_H_*/
