#include "global_types.h"

arguments::arguments()
{
	choice = "";
	Hausdorff_ratio_t = 0.005;
	edge_length_ratio = 15;
	edge_length = 0;
	Iteration_Base = 3;
	Hard_Feature = true;
	input = "", output = "";
	octree = true;
	whole_domain = false;
	num_cell = 30;
	scaffold_layer = 3;
	//
	pca_oobb = true;
	scaffold_type = 1;
	weight_opt = 1;
	feature_weight = 0.05;
}

arguments::arguments(arguments const& copy)
{
	choice = copy.choice;
	Hausdorff_ratio_t = copy.Hausdorff_ratio_t;
	edge_length_ratio = copy.edge_length_ratio;
	edge_length = copy.edge_length;
	Iteration_Base = copy.Iteration_Base;
	Hard_Feature = copy.Hard_Feature;
	input = copy.input;
	output = copy.output;
	octree = copy.octree;
	whole_domain = copy.whole_domain;
	num_cell = copy.num_cell;
	scaffold_layer = copy.scaffold_layer;

	//
	pca_oobb = copy.pca_oobb;
	scaffold_type = copy.scaffold_type;
	weight_opt = copy.weight_opt;
	feature_weight = copy.feature_weight;
}

arguments& arguments::operator=(arguments const& copy)
{
	choice = copy.choice;
	Hausdorff_ratio_t = copy.Hausdorff_ratio_t;
	edge_length_ratio = copy.edge_length_ratio;
	edge_length = copy.edge_length;
	Iteration_Base = copy.Iteration_Base;
	Hard_Feature = copy.Hard_Feature;
	input = copy.input;
	output = copy.output;
	octree = copy.octree;
	whole_domain = copy.whole_domain;
	num_cell = copy.num_cell;
	scaffold_layer = copy.scaffold_layer;

	//
	pca_oobb = copy.pca_oobb;
	scaffold_type = copy.scaffold_type;
	weight_opt = copy.weight_opt;
	feature_weight = copy.feature_weight;

	return *this;
}

/*
arguments args;
//meshes
//Mesh hyrbid_mesh;
Mesh_Feature mf;
GEO::Mesh M_i;
Feature_Graph fg;
Feature_Graph Q_final_fg;
vector<vector<uint32_t>> GRAPH_MATCHES;



char path_out[300];
int32_t GRAIN_SIZE;

double diagonal_len;
*/
