/*
 *	server/zone/managers/crafting/CraftingManager.cpp generated by engine3 IDL compiler 0.55
 */

#include "CraftingManager.h"

#include "CraftingManagerImplementation.h"

#include "../../objects/player/Player.h"

#include "../../objects/draftschematic/DraftSchematic.h"

#include "../../objects/tangible/TangibleObject.h"

#include "../../objects/tangible/resource/ResourceContainer.h"

#include "../../objects/tangible/crafting/CraftingTool.h"

#include "../../objects/tangible/crafting/CraftingStation.h"

#include "../../objects/tangible/crafting/component/Component.h"

#include "server/zone/ZoneServer.h"

/*
 *	CraftingManagerStub
 */

CraftingManager::CraftingManager(ZoneServer* server, ZoneProcessServerImplementation* processor) {
	_impl = new CraftingManagerImplementation(server, processor);
	_impl->_setStub(this);
}

CraftingManager::CraftingManager(DummyConstructorParameter* param) {
	_impl = NULL;
}

CraftingManager::~CraftingManager() {
}

void CraftingManager::reloadSchematicTable() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((CraftingManagerImplementation*) _impl)->reloadSchematicTable();
}

void CraftingManager::prepareCraftingSession(Player* player, CraftingTool* craftingTool, DraftSchematic* draftSchematic) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addObjectParameter(craftingTool);
		method.addObjectParameter(draftSchematic);

		method.executeWithVoidReturn();
	} else
		((CraftingManagerImplementation*) _impl)->prepareCraftingSession(player, craftingTool, draftSchematic);
}

void CraftingManager::addIngredientToSlot(Player* player, TangibleObject* tano, int slot, int counter) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);
		method.addObjectParameter(tano);
		method.addSignedIntParameter(slot);
		method.addSignedIntParameter(counter);

		method.executeWithVoidReturn();
	} else
		((CraftingManagerImplementation*) _impl)->addIngredientToSlot(player, tano, slot, counter);
}

void CraftingManager::removeIngredientFromSlot(Player* player, int slot, int counter) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);
		method.addSignedIntParameter(slot);
		method.addSignedIntParameter(counter);

		method.executeWithVoidReturn();
	} else
		((CraftingManagerImplementation*) _impl)->removeIngredientFromSlot(player, slot, counter);
}

void CraftingManager::putComponentBackInInventory(Player* player, Component* component) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);
		method.addObjectParameter(component);

		method.executeWithVoidReturn();
	} else
		((CraftingManagerImplementation*) _impl)->putComponentBackInInventory(player, component);
}

void CraftingManager::nextCraftingStage(Player* player, string& test) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);
		method.addAsciiParameter(test);

		method.executeWithVoidReturn();
	} else
		((CraftingManagerImplementation*) _impl)->nextCraftingStage(player, test);
}

void CraftingManager::craftingCustomization(Player* player, string& name, int condition) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);
		method.addAsciiParameter(name);
		method.addSignedIntParameter(condition);

		method.executeWithVoidReturn();
	} else
		((CraftingManagerImplementation*) _impl)->craftingCustomization(player, name, condition);
}

void CraftingManager::handleExperimenting(Player* player, int counter, int numRowsAttempted, string& expstring) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(player);
		method.addSignedIntParameter(counter);
		method.addSignedIntParameter(numRowsAttempted);
		method.addAsciiParameter(expstring);

		method.executeWithVoidReturn();
	} else
		((CraftingManagerImplementation*) _impl)->handleExperimenting(player, counter, numRowsAttempted, expstring);
}

void CraftingManager::createPrototype(Player* player, string& count) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(player);
		method.addAsciiParameter(count);

		method.executeWithVoidReturn();
	} else
		((CraftingManagerImplementation*) _impl)->createPrototype(player, count);
}

void CraftingManager::createSchematic(Player* player, string& count) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);
		method.addAsciiParameter(count);

		method.executeWithVoidReturn();
	} else
		((CraftingManagerImplementation*) _impl)->createSchematic(player, count);
}

float CraftingManager::getWeightedValue(Player* player, CraftingTool* craftingTool, DraftSchematic* draftSchematic, int type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(player);
		method.addObjectParameter(craftingTool);
		method.addObjectParameter(draftSchematic);
		method.addSignedIntParameter(type);

		return method.executeWithFloatReturn();
	} else
		return ((CraftingManagerImplementation*) _impl)->getWeightedValue(player, craftingTool, draftSchematic, type);
}

float CraftingManager::getAssemblyPercentage(float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addFloatParameter(value);

		return method.executeWithFloatReturn();
	} else
		return ((CraftingManagerImplementation*) _impl)->getAssemblyPercentage(value);
}

float CraftingManager::calculateAssemblyValueModifier(CraftingTool* craftingTool) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(craftingTool);

		return method.executeWithFloatReturn();
	} else
		return ((CraftingManagerImplementation*) _impl)->calculateAssemblyValueModifier(craftingTool);
}

void CraftingManager::addDraftSchematicsFromGroupName(Player* player, const string& schematicGroupName) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(player);
		method.addAsciiParameter(schematicGroupName);

		method.executeWithVoidReturn();
	} else
		((CraftingManagerImplementation*) _impl)->addDraftSchematicsFromGroupName(player, schematicGroupName);
}

void CraftingManager::subtractDraftSchematicsFromGroupName(Player* player, const string& schematicGroupName) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(player);
		method.addAsciiParameter(schematicGroupName);

		method.executeWithVoidReturn();
	} else
		((CraftingManagerImplementation*) _impl)->subtractDraftSchematicsFromGroupName(player, schematicGroupName);
}

void CraftingManager::refreshDraftSchematics(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((CraftingManagerImplementation*) _impl)->refreshDraftSchematics(player);
}

/*
 *	CraftingManagerAdapter
 */

CraftingManagerAdapter::CraftingManagerAdapter(CraftingManagerImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* CraftingManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		reloadSchematicTable();
		break;
	case 7:
		prepareCraftingSession((Player*) inv->getObjectParameter(), (CraftingTool*) inv->getObjectParameter(), (DraftSchematic*) inv->getObjectParameter());
		break;
	case 8:
		addIngredientToSlot((Player*) inv->getObjectParameter(), (TangibleObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case 9:
		removeIngredientFromSlot((Player*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case 10:
		putComponentBackInInventory((Player*) inv->getObjectParameter(), (Component*) inv->getObjectParameter());
		break;
	case 11:
		nextCraftingStage((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_nextCraftingStage__Player_string_));
		break;
	case 12:
		craftingCustomization((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_craftingCustomization__Player_string_int_), inv->getSignedIntParameter());
		break;
	case 13:
		handleExperimenting((Player*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter(), inv->getAsciiParameter(_param3_handleExperimenting__Player_int_int_string_));
		break;
	case 14:
		createPrototype((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_createPrototype__Player_string_));
		break;
	case 15:
		createSchematic((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_createSchematic__Player_string_));
		break;
	case 16:
		resp->insertFloat(getWeightedValue((Player*) inv->getObjectParameter(), (CraftingTool*) inv->getObjectParameter(), (DraftSchematic*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case 17:
		resp->insertFloat(getAssemblyPercentage(inv->getFloatParameter()));
		break;
	case 18:
		resp->insertFloat(calculateAssemblyValueModifier((CraftingTool*) inv->getObjectParameter()));
		break;
	case 19:
		addDraftSchematicsFromGroupName((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_addDraftSchematicsFromGroupName__Player_string_));
		break;
	case 20:
		subtractDraftSchematicsFromGroupName((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_subtractDraftSchematicsFromGroupName__Player_string_));
		break;
	case 21:
		refreshDraftSchematics((Player*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CraftingManagerAdapter::reloadSchematicTable() {
	return ((CraftingManagerImplementation*) impl)->reloadSchematicTable();
}

void CraftingManagerAdapter::prepareCraftingSession(Player* player, CraftingTool* craftingTool, DraftSchematic* draftSchematic) {
	return ((CraftingManagerImplementation*) impl)->prepareCraftingSession(player, craftingTool, draftSchematic);
}

void CraftingManagerAdapter::addIngredientToSlot(Player* player, TangibleObject* tano, int slot, int counter) {
	return ((CraftingManagerImplementation*) impl)->addIngredientToSlot(player, tano, slot, counter);
}

void CraftingManagerAdapter::removeIngredientFromSlot(Player* player, int slot, int counter) {
	return ((CraftingManagerImplementation*) impl)->removeIngredientFromSlot(player, slot, counter);
}

void CraftingManagerAdapter::putComponentBackInInventory(Player* player, Component* component) {
	return ((CraftingManagerImplementation*) impl)->putComponentBackInInventory(player, component);
}

void CraftingManagerAdapter::nextCraftingStage(Player* player, string& test) {
	return ((CraftingManagerImplementation*) impl)->nextCraftingStage(player, test);
}

void CraftingManagerAdapter::craftingCustomization(Player* player, string& name, int condition) {
	return ((CraftingManagerImplementation*) impl)->craftingCustomization(player, name, condition);
}

void CraftingManagerAdapter::handleExperimenting(Player* player, int counter, int numRowsAttempted, string& expstring) {
	return ((CraftingManagerImplementation*) impl)->handleExperimenting(player, counter, numRowsAttempted, expstring);
}

void CraftingManagerAdapter::createPrototype(Player* player, string& count) {
	return ((CraftingManagerImplementation*) impl)->createPrototype(player, count);
}

void CraftingManagerAdapter::createSchematic(Player* player, string& count) {
	return ((CraftingManagerImplementation*) impl)->createSchematic(player, count);
}

float CraftingManagerAdapter::getWeightedValue(Player* player, CraftingTool* craftingTool, DraftSchematic* draftSchematic, int type) {
	return ((CraftingManagerImplementation*) impl)->getWeightedValue(player, craftingTool, draftSchematic, type);
}

float CraftingManagerAdapter::getAssemblyPercentage(float value) {
	return ((CraftingManagerImplementation*) impl)->getAssemblyPercentage(value);
}

float CraftingManagerAdapter::calculateAssemblyValueModifier(CraftingTool* craftingTool) {
	return ((CraftingManagerImplementation*) impl)->calculateAssemblyValueModifier(craftingTool);
}

void CraftingManagerAdapter::addDraftSchematicsFromGroupName(Player* player, const string& schematicGroupName) {
	return ((CraftingManagerImplementation*) impl)->addDraftSchematicsFromGroupName(player, schematicGroupName);
}

void CraftingManagerAdapter::subtractDraftSchematicsFromGroupName(Player* player, const string& schematicGroupName) {
	return ((CraftingManagerImplementation*) impl)->subtractDraftSchematicsFromGroupName(player, schematicGroupName);
}

void CraftingManagerAdapter::refreshDraftSchematics(Player* player) {
	return ((CraftingManagerImplementation*) impl)->refreshDraftSchematics(player);
}

/*
 *	CraftingManagerHelper
 */

CraftingManagerHelper* CraftingManagerHelper::staticInitializer = CraftingManagerHelper::instance();

CraftingManagerHelper::CraftingManagerHelper() {
	className = "CraftingManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CraftingManagerHelper::finalizeHelper() {
	CraftingManagerHelper::finalize();
}

DistributedObject* CraftingManagerHelper::instantiateObject() {
	return new CraftingManager(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CraftingManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CraftingManagerAdapter((CraftingManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	CraftingManagerServant
 */

CraftingManagerServant::CraftingManagerServant() {
	_classHelper = CraftingManagerHelper::instance();
}

CraftingManagerServant::~CraftingManagerServant() {
}

void CraftingManagerServant::_setStub(DistributedObjectStub* stub) {
	_this = (CraftingManager*) stub;
}

DistributedObjectStub* CraftingManagerServant::_getStub() {
	return _this;
}

