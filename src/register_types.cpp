#include "core/class_db.h"
#include "register_types.h"

#include "bt_string_names.h"
#include "bt_root_node.h"
#include "bt_action_node.h"
#include "bt_composite_node.h"
#include "bt_decorator_node.h"
#include "bt_custom_parallel_node.h"

void register_gd_behavior_tree_types() {
	BTStringNames::create();

	ClassDB::register_class<BTRootNode>();
	ClassDB::register_class<BTActionNode>();
	ClassDB::register_class<BTDecoratorNode>();
	ClassDB::register_class<BTSequenceNode>();
	ClassDB::register_class<BTSelectorNode>();
	ClassDB::register_class<BTParallelNode>();
	ClassDB::register_class<BTCustomParallelNode>();
}

void unregister_gd_behavior_tree_types() {
	BTStringNames::free();
}
