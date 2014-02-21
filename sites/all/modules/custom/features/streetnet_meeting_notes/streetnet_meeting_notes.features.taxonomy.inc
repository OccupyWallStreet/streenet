<?php
/**
 * @file
 * streetnet_meeting_notes.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function streetnet_meeting_notes_taxonomy_default_vocabularies() {
  return array(
    'internal_page_category' => array(
      'name' => 'Internal Page Category',
      'machine_name' => 'internal_page_category',
      'description' => 'Categories for internal pages, Policy,  Notes, etc.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
    ),
    'internal_page_tags' => array(
      'name' => 'Internal Page Tags',
      'machine_name' => 'internal_page_tags',
      'description' => 'Tags for internal documents, notes, etc',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
    ),
  );
}
