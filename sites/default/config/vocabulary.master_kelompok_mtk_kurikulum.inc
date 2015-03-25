<?php
/**
 * @file
 * vocabulary.master_kelompok_mtk_kurikulum.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '37',
  'name' => 'Master Kelompok Mtk Kurikulum',
  'machine_name' => 'master_kelompok_mtk_kurikulum',
  'description' => '',
  'hierarchy' => '0',
  'module' => 'taxonomy',
  'weight' => '0',
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'skos:ConceptScheme',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'description' => array(
      'predicates' => array(
        0 => 'rdfs:comment',
      ),
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
